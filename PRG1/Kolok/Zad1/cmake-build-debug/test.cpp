#include <iostream>

// Funkcja do sortowania bąbelkowego tablicy dwuwymiarowej
void sortujBabelkowo(int tablica[][3], int liczbaWierszy) {
    for (int i = 0; i < liczbaWierszy; i++) {
        for (int j = 0; j < 3 - 1; j++) {  // Załóżmy, że każdy wiersz ma 3 elementy
            for (int k = 0; k < 3 - j - 1; k++) {
                if (tablica[i][k] > tablica[i][k + 1]) {
                    // Zamiana miejscami elementów, jeśli są w złej kolejności
                    std::swap(tablica[i][k], tablica[i][k + 1]);
                }
            }
        }
    }
}

// Funkcja do wyświetlania tablicy dwuwymiarowej
void wyswietlTablice(int tablica[][3], int liczbaWierszy) {
    for (int i = 0; i < liczbaWierszy; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    const int liczbaWierszy = 4;
    int tablica[][3] = {
            {4, 2, 7},
            {9, 5, 1},
            {6, 8, 3},
            {0, 2, 5}
    };

    std::cout << "Tablica przed sortowaniem:" << std::endl;
    wyswietlTablice(tablica, liczbaWierszy);

    sortujBabelkowo(tablica, liczbaWierszy);

    std::cout << "\nTablica po sortowaniu bąbelkowym:" << std::endl;
    wyswietlTablice(tablica, liczbaWierszy);

    return 0;
}
