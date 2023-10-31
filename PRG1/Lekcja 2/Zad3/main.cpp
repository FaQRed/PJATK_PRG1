#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    int setki = liczba / 100;
    int dziesiatki = (liczba % 100) / 10;
    int jednosci = liczba % 10;
    cout << "Setki: " << setki << ", Dziesiątki: " << dziesiatki << ", Jedności: " << jednosci << endl;

}
