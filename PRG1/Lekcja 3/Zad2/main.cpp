#include <iostream>

int main() {

    int first_num, second_num;
    std::cout << "Podaj pierwsza liczbe calkowita: ";
    std::cin >> first_num;
    std::cout << "Podaj druga liczbe calkowita: ";
    std::cin >> second_num;




    int answer = 0;
    for (int i = first_num; i <= second_num; ++i) {
        if (i % 7 == 0 || i % 13 == 0) {
            answer++;
        }
    }

    int a = 7, b = 13;
    int nww, tmp;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    nww = (7 * 13) / a;

    std::cout << "Liczby podzielne przez 7 lub 13: " << answer << std::endl;
    std::cout << "Najwieksza wspolna wielokrotnosc 7 i 13: " << nww << std::endl;

    return 0;
}
