#include <iostream>

int main() {

    int *tablica = new int[5];


    std::cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> tablica[i];
    }


    std::cout << "Tablica 1:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(tablica + i) << " ";
    }
    std::cout << "\n";


    for (int i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            *(tablica + i) = 0;
        } else {
            *(tablica + i) *= 2;
        }
    }


    std::cout << "Tablica 2:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(tablica + i) << " ";
    }
    std::cout << "\n";


    delete[] tablica;

    return 0;
}
