#include <iostream>
using namespace std;

int main() {
    int dzien_tygodnia;
    cout << "Podaj liczbę całkowitą od 1 do 7: ";
    cin >> dzien_tygodnia;

    switch (dzien_tygodnia) {
        case 0:
            cout << "Dzień tygodnia: niedziela" << endl;
            break;
        case 1:
            cout << "Dzień tygodnia: poniedziałek" << endl;
            break;
        case 2:
            cout << "Dzień tygodnia: wtorek" << endl;
            break;
        case 3:
            cout << "Dzień tygodnia: środa" << endl;
            break;
        case 4:
            cout << "Dzień tygodnia: czwartek" << endl;
            break;
        case 5:
            cout << "Dzień tygodnia: piątek" << endl;
            break;
        case 6:
            cout << "Dzień tygodnia: sobota" << endl;
            break;
        default:
            cout << "Nie znaleziono dnia tygodnia dla tej liczby." << endl;
            break;
    }
}
