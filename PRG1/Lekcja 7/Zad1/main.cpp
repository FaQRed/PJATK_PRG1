#include <iostream>
#include <random>
using namespace std;


void odwrocTablice(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar / 2; i++) {
        int temp = tablica[i];
        tablica[i] = tablica[rozmiar - 1 - i];
        tablica[rozmiar - 1 - i] = temp;
    }
}




int main() {
    int rozmiar;

    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;

    if (rozmiar <= 0) {
        cerr << "Rozmiar tablicy musi być dodatni." << endl;
        return 1;
    }

    int tablica[rozmiar];

   cout << "Podaj " << rozmiar << " liczb całkowitych: ";
    for (int i = 0; i < rozmiar; i++) {
        cin >> tablica[i];
    }


    odwrocTablice(tablica, rozmiar);

    std::cout << "Tablica po odwróceniu: ";
    for (int i = 0; i < rozmiar; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;



    return 0;
}
