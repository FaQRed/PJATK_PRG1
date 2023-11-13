#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int rozmiar;


    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;


    if (rozmiar <= 0) {
        cout << "Rozmiar tablicy musi być większy od zera." << endl;
        return 1;
    }


    int* tablica = new int[rozmiar];


    srand(static_cast<unsigned>(time(nullptr)));


    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = rand() % 100;
    }


    int minElement = *tablica;
    int maxElement = *tablica;
    int suma = *tablica;

    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i] < minElement) {
            minElement = tablica[i];
        }
        if (tablica[i] > maxElement) {
            maxElement = tablica[i];
        }
        suma += tablica[i];
    }


    cout << "Tablica losowych liczb:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    cout << "Najmniejszy element: " << minElement << endl;
    cout << "Największy element: " << maxElement << endl;
    cout << "Suma wszystkich elementów: " << suma << endl;


    delete[] tablica;

    return 0;
}
