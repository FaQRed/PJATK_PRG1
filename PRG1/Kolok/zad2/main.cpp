#include <iostream>

void drukujRomb(int n) {
    // Górna część rombu
    for (int i = 0; i < n; i++) {
        // Drukowanie odstępów przed gwiazdkami
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }

        // Drukowanie gwiazdek
        for (int k = 0; k < 2 * i + 1; k++) {
            std::cout << "*";
        }

        // Przejście do nowej linii po zakończeniu wiersza
        std::cout << std::endl;
    }

    // Dolna część rombu
    for (int i = n - 2; i >= 0; i--) {
        // Drukowanie odstępów przed gwiazdkami
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }

        // Drukowanie gwiazdek
        for (int k = 0; k < 2 * i + 1; k++) {
            std::cout << "*";
        }

        // Przejście do nowej linii po zakończeniu wiersza
        std::cout << std::endl;
    }
}

int main() {
    // Testowanie funkcji z rombem o rozmiarze 5
    drukujRomb(4);

    return 0;
}
