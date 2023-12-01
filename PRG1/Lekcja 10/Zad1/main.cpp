#include <iostream>
using namespace std;

int main() {

    int *tablica = new int[5];


    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> tablica[i];
    }


    cout << "Tablica 1:\n";
    for (int i = 0; i < 5; ++i) {
        cout << *(tablica + i) << " ";
    }
    cout << "\n";


    for (int i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            *(tablica + i) = 0;
        } else {
            *(tablica + i) *= 2;
        }
    }


    cout << "Tablica 2:\n";
    for (int i = 0; i < 5; ++i) {
        cout << *(tablica + i) << " ";
    }
    cout << "\n";


    delete[] tablica;

    return 0;
}
