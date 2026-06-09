#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    // Valiutų kursai:
    double gbp_bendras = 0.8729, gbp_pirkti = 0.8600, gbp_parduoti = 0.9220;
    double usd_bendras = 1.1793, usd_pirkti = 1.1460, usd_parduoti = 1.2340;
    double inr_bendras = 104.6918, inr_pirkti = 101.3862, inr_parduoti = 107.8546;

    int pasirinkimas = 0;

    // Naudoju while ciklą, duoti pasirnkimą vartotojui
    while (pasirinkimas != 4) {
        cout << "Pasirinkite valiutą:" << endl;
        cout << "1. Valiutos kurso palyginimas" << endl;
        cout << "2. Pirkti valiutą" << endl;
        cout << "3. Parduoti valiutą" << endl;
        cout << "4. Išėjimas" << endl;
        cout << "Pasirinkite veiksmą: ";
        cin >> pasirinkimas;

        if (pasirinkimas == 4) {
            cout << "Programa baigta";
            break;
        }

        if (pasirinkimas < 1 || pasirinkimas > 4) {
            cout << "Klaida. Rinkite tarp 1 ir 4";
            continue;
        }

        string valiuta;
        cout << "Pasirinkite valiuta (GBP, USD, INR) ";
        cin >> valiuta;

        // Kintamieji valiutos kursui išsaugoti
        double kursas_bendras = 0, kursas_pirkti = 0, kursas_parduoti = 0;

        // Priskiriame kursa prie pasirinktos valiutos
        if (valiuta == "GBP") {
            kursas_bendras = gbp_bendras;
            kursas_pirkti = gbp_pirkti;
            kursas_parduoti = gbp_parduoti;
        } else if (valiuta == "USD") {
            kursas_bendras = usd_bendras;
            kursas_pirkti = usd_pirkti;
            kursas_parduoti = usd_parduoti;
        } else if (valiuta == "INR") {
            kursas_bendras = inr_bendras;
            kursas_pirkti = inr_pirkti;
            kursas_parduoti = inr_parduoti;
        } else {
            cout << "Klaida, tokios valiutos neturime";
            continue;
        }

        // Apvaliname
        cout << fixed << setprecision(2);

        // Atliekame valiutos keitimo veiksmus

        if (pasirinkimas == 1) {
            cout << valiuta << " kursai uz 1 eur";
            cout << "Bendras: " << kursas_bendras;
            cout << "Pirkti: " << kursas_pirkti;
            cout << "Parduoti: " << kursas_parduoti;
        }
        else if (pasirinkimas == 2) {
            double kiekis_eur;
            cout << "Kiek euru keisite: ";
            cin >> kiekis_eur;
            // Eurus dauginame is pasirinkto kurso
            double resultas_eur = kiekis_eur * kursas_pirkti;
            cout << "Uz " << kiekis_eur << " eur " << resultas_eur << " " << valiuta;
        }
        else if (pasirinkimas == 3) {
            double kiekis_val;
            cout << "kiek " << valiuta << " norite parduoti?";
            cin >> kiekis_val;
            // Parduodant daliname is pardavimo kurso
            double gausi_eur = kiekis_val / kursas_parduoti;
            cout << "Pardaves " << kiekis_val << " " << valiuta << " " << " gausi: " << gausi_eur << " EUR ";
        }
    }
    return 0;
}