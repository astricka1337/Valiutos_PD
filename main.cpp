#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // Valiutų kursai:
    double gbp_bendras = 0.8729, gbp_pirkti = 0.8600, gbp_parduoti = 0.9220;
    double usd_bendras = 1.1793, usd_pirkti = 1.1460, usd_parduoti = 1.2340;
    double inr_bendras = 104.6918, inr_pirkti = 101.3862, inr_parduoti = 107.8546;

    int pasirinkimas = 0;

    // Naudoju while ciklą, duoti pasirnkimą vartotojui
    while (pasirinkimas != 4) {
        cout << "Pasrinkite valiutą:";
        cout << "1. Valiutos kurso palyginimas";
        cout << "2. Pirkti valiutą";
        cout << "3. Parduoti valiutą";
        cout << "4. Išėjimas";
        cout << "Pasirinkkite veiksmą";
        cin >> pasirinkimas;
    }

    if (pasirinkimas == 4) {
        cout << "Progama baigta";
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}