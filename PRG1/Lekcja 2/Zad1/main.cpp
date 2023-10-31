#include <iostream>
using namespace std;
int main() {
    int liczba;
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;


    if ((liczba >= 0 && liczba <= 100) || (liczba >= 1000 && liczba <= 1100)) {
        cout << "Liczba jest z zakresu od 0 do 100 lub od 1000 do 1100." << endl;
    } else {
        cout << "Liczba nie jest z zakresu od 0 do 100 ani od 1000 do 1100." << endl;
    }
    return 0;
}
