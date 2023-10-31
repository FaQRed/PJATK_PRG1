#include <iostream>


long long silnia(long);


double potega(double, int);

int main() {
    long liczba;
    int wykladnik;
    double podstawa;

    std::cout << "Podaj liczbe (na ktorej bedzie wykonane podnoszenie do potegi): ";
    std::cin >> podstawa;

    std::cout << "Podaj wykladnik potegi: ";
    std::cin >> wykladnik;

    if (wykladnik < 0 || (wykladnik == 0 && podstawa == 0)) {
        std::cerr << "Niepoprawne dane. Wykladnik nie moze byc ujemny ani rowny 0, a podstawa potegi nie moze byc 0 przy wykladniku rownym 0." << std::endl;
        return 1;
    }
    double wynik_potegi = potega(podstawa, wykladnik);

    std::cout << "Podaj liczbe (na ktorej bedzie wykonana silnia): ";
    std::cin >> liczba;
    long silnia_res = silnia(liczba);



    std::cout << liczba << "! = " << silnia_res << std::endl;
    std::cout << podstawa << "^" << wykladnik << " = " << wynik_potegi << std::endl;

    return 0;
}

double potega(double podstawa, int wykladnik) {
    if (wykladnik == 0) {
        return 1;
    } else {
        return podstawa * potega(podstawa, wykladnik - 1);
    }
}

long long silnia(long n) {
    if (n == 0) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}
