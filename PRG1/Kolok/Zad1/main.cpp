#include <iostream>
#include <sstream>

// Funkcja pomocnicza do odwracania kolejności liter w danym wyrazie
std::string odwrocWyraz(const std::string& wyraz) {
    if (wyraz.length() <= 1) {
        return wyraz;
    } else {
        return wyraz.back() + odwrocWyraz(wyraz.substr(0, wyraz.length() - 1));
    }
}

// Funkcja rekurencyjna do odwracania kolejności liter w każdym wyrazie
std::string odwrocKolejnoscLiterRekurencyjnie(const std::string& tekst) {
    std::istringstream strstream(tekst);
    std::ostringstream result;

    std::string wyraz;
    while (strstream >> wyraz) {
        result << odwrocWyraz(wyraz) << " ";
    }

    return result.str();
}

int main() {
    // Przykład użycia funkcji
    std::string tekstPrzykladowy = "To jest przykladowy tekst";
    std::string wynik = odwrocKolejnoscLiterRekurencyjnie(tekstPrzykladowy);
    std::cout << wynik << std::endl;

    return 0;
}
