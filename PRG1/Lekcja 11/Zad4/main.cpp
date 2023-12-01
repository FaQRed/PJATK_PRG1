#include <iostream>

struct WezelDrzewa {
    int dane;
    WezelDrzewa* lewy;
    WezelDrzewa* prawy;

    WezelDrzewa(int wartosc) : dane(wartosc), lewy(nullptr), prawy(nullptr) {}
};

class DrzewoBinarne {
private:
    WezelDrzewa* korzen;


    WezelDrzewa* dodaj(WezelDrzewa* wezel, int wartosc) {
        if (wezel == nullptr) {
            return new WezelDrzewa(wartosc);
        }

        if (wartosc < wezel->dane) {
            wezel->lewy = dodaj(wezel->lewy, wartosc);
        } else if (wartosc > wezel->dane) {
            wezel->prawy = dodaj(wezel->prawy, wartosc);
        }

        return wezel;
    }

    // Prywatna metoda do rekurencyjnego wyświetlania drzewa w porządku inorder
    void inorderPrzejscie(WezelDrzewa* wezel) {
        if (wezel != nullptr) {
            inorderPrzejscie(wezel->lewy);
            std::cout << wezel->dane << " ";
            inorderPrzejscie(wezel->prawy);
        }
    }

public:
    // Konstruktor
    DrzewoBinarne() : korzen(nullptr) {}

    // Metoda do dodawania elementu do drzewa
    void dodaj(int wartosc) {
        korzen = dodaj(korzen, wartosc);
    }

    // Metoda do wyświetlania drzewa w porządku inorder
    void wyswietlInorder() {
        std::cout << "Przejście inorder: ";
        inorderPrzejscie(korzen);
        std::cout << std::endl;
    }
};

int main() {
    DrzewoBinarne drzewo;

    drzewo.dodaj(12);
    drzewo.dodaj(3);
    drzewo.dodaj(7);
    drzewo.dodaj(2);
    drzewo.dodaj(4);
    drzewo.dodaj(6);
    drzewo.dodaj(8);

    drzewo.wyswietlInorder();

    return 0;
}
