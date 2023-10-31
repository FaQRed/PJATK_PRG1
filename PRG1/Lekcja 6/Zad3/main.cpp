#include <iostream>
#include <cctype>


int obliczSumeCyfr(char znak1, char znak2, char znak3) {
    int suma = 0;

    if (isdigit(znak1)) {
        suma = suma + znak1 - '0';
    }
    if (isdigit(znak2)) {
        suma = suma + znak2 - '0';
    }
    if (isdigit(znak3)) {
        suma = suma + znak3 - '0';
    }

    return suma;
}

int main() {
    char znak1, znak2, znak3;

    std::cout << "Podaj trzy znaki: ";
    std::cin >> znak1 >> znak2 >> znak3;

    int suma = obliczSumeCyfr(znak1, znak2, znak3);

    if (suma > 0) {
        std::cout << "Suma cyfr w podanych znakach: " << suma << std::endl;
    } else {
        std::cout << "Brak cyfr w podanych znakach." << std::endl;
    }

    return 0;
}
