#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    bool podzielna = false;
    if (liczba % 2 == 0) {
        cout << "Liczba jest podzielna przez 2." << endl;
        podzielna = true;
    }
    if (liczba % 3 == 0) {
        cout << "Liczba jest podzielna przez 3." << endl;
        podzielna = true;
    }
    if (liczba % 4 == 0) {
        cout << "Liczba jest podzielna przez 4." << endl;
        podzielna = true;
    }
    if (liczba % 5 == 0) {
        cout << "Liczba jest podzielna przez 5." << endl;
        podzielna = true;
    }
    if (liczba % 6 == 0) {
        cout << "Liczba jest podzielna przez 6." << endl;
        podzielna = true;
    }
    if (liczba % 7 == 0) {
        cout << "Liczba jest podzielna przez 7." << endl;
        podzielna = true;
    }
    if (!podzielna) {
        cout << "Liczba nie jest podzielna przez 2, 3, 4, 5, 6 ani 7." << endl;
    }

    return 0;
}
