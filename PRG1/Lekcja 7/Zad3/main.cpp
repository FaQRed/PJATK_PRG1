#include <iostream>


int silnia(int n) {
    if (n == 0) {
        return 1;
    }
    return n * silnia(n - 1);
}


double PrawdopodobienstwoPosortowania(int rozmiar) {

    int kombinacje = silnia(rozmiar) / (silnia(3) * silnia(rozmiar - 3));


    int niemalejace_ciagi = rozmiar - 2;

    double prawdopodobienstwo = (niemalejace_ciagi) / kombinacje;

    return prawdopodobienstwo;
}

int main() {
    int rozmiar;

    std::cout << "Podaj rozmiar zbioru (ilość dostępnych liczb całkowitych): ";
    std::cin >> rozmiar;

    if (rozmiar < 3) {
        std::cerr << "Za mało dostępnych liczb do obliczenia prawdopodobieństwa." << std::endl;
        return 1;
    }

    double prawdopodobienstwo = PrawdopodobienstwoPosortowania(rozmiar);

    std::cout << "Prawdopodobieństwo posortowania trójki liczb: " << prawdopodobienstwo << std::endl;

    return 0;
}
