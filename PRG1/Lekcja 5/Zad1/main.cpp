#include <iostream>

int main() {
    int n;
    std::cout << "Podaj rozmiar tablicy: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Rozmiar tablicy musi być liczbą dodatnią." << std::endl;
        return 1;
    }

    int array[n];

    std::cout << "Wprowadź elementy tablicy oddzielone spacją: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (array[i] == 5) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Liczba 5 została znaleziona w tablicy." << std::endl;
    } else {
        std::cout << "Liczba 5 nie została znaleziona w tablicy." << std::endl;
    }


    return 0;
}


/*
 * SORTOWANIE
 * A) przez proste wybieranie
 * B) przez proste wstawianie
 * C) babelkowe
 * D) quick sort (s. szybkie)
 * E) koktajlowe
 * F) grzebieniowe
 */
