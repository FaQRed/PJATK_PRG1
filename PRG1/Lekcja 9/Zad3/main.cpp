#include <iostream>

using namespace std;

int main() {
    const int rozmiar = 10;
    int* tablica1 = new int[rozmiar];
    int* tablica2 = new int[rozmiar];

    cout << "Wprowadź 10 elementów do pierwszej tablicy:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << "Element " << i << ": ";
        cin >> tablica1[i];
    }

    cout << "Wprowadź 10 elementów do drugiej tablicy:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << "Element " << i << ": ";
        cin >> tablica2[i];
    }

    int nowyRozmiar = 2 * rozmiar + 2;
    int* nowaTablica = new int[nowyRozmiar];

    for (int i = 0; i < rozmiar; i++) {
        nowaTablica[i] = tablica1[i];
        nowaTablica[i + rozmiar] = tablica2[i];
    }

    cout << "Wprowadź 2 dodatkowe elementy:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Element " << (i + nowyRozmiar - 2) << ": ";
        cin >> nowaTablica[i + rozmiar * 2];
    }

    cout << "Nowa tablica po połączeniu i dodaniu 2 dodatkowych elementów:" << endl;
    for (int i = 0; i < nowyRozmiar; i++) {
        cout << "Element " << i << ": " << nowaTablica[i] << endl;
    }

    delete[] tablica1;
    delete[] tablica2;
    delete[] nowaTablica;

    return 0;
}
