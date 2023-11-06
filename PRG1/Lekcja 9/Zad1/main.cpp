#include <iostream>

int main() {
    int pierwszaZmienna, drugaZmienna;


    std::cout << "Podaj pierwsza zmienna: ";
    std::cin >> pierwszaZmienna;

    std::cout << "Podaj druga zmienna: ";
    std::cin >> drugaZmienna;


    int* wskPierwsza = &pierwszaZmienna;
    int* wskDruga = &drugaZmienna;


    int temp = *wskPierwsza;
    *wskPierwsza = *wskDruga;
    *wskDruga = temp;


    std::cout << "Po zamianie miejscami:" << std::endl;
    std::cout << "Pierwsza zmienna: " << pierwszaZmienna << std::endl;
    std::cout << "Druga zmienna: " << drugaZmienna << std::endl;

    return 0;
}
