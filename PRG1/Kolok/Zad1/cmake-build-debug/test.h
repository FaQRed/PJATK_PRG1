#include <iostream>

// Funkcja dzieląca przez 4 za pomocą przesunięcia bitowego
int podzielPrzezCztery(int liczba) {
    return liczba >> 2;
}

int main() {
    // Przykład użycia funkcji
    int liczbaDoPodzielenia = 16;

    std::cout << "Liczba przed dzieleniem: " << liczbaDoPodzielenia << std::endl;

    int wynikDzielenia = podzielPrzezCztery(liczbaDoPodzielenia);

    std::cout << "Wynik dzielenia przez 4: " << wynikDzielenia << std::endl;

    return 0;
}
