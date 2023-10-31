#include <iostream>


double dodawanie(double a, double b) {
    return a + b;
}


double odejmowanie(double a, double b) {
    return a - b;
}


double mnozenie(double a, double b) {
    return a * b;
}


double dzielenie(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Nie można dzielić przez zero." << std::endl;
        return 0.0;
    }
}

int main() {
    double liczba1, liczba2;
    char operacja;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;

    std::cout << "Podaj operacje (+, -, *, /): ";
    std::cin >> operacja;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;

    double wynik;

    switch (operacja) {
        case '+':
            wynik = dodawanie(liczba1, liczba2);
            break;
        case '-':
            wynik = odejmowanie(liczba1, liczba2);
            break;
        case '*':
            wynik = mnozenie(liczba1, liczba2);
            break;
        case '/':
            wynik = dzielenie(liczba1, liczba2);
            break;
        default:
            std::cerr << "Nieznana operacja." << std::endl;
            return 1;
    }

    std::cout << "Wynik: " << wynik << std::endl;

    return 0;
}
