#include <iostream>
#include <cctype>


int obliczSumeCyfr(int znak1, int znak2, int znak3) {

    return znak1 + znak2 + znak3;
}
void obliczSumeCyfr(char zna1, char znak2, char znak3){
    std::cout << "Brak cyfr w podanych znakach." << std::endl;
}


int main() {
    char znak1, znak2, znak3;

    std::cout << "Podaj trzy znaki: ";
    std::cin >> znak1 >> znak2 >> znak3;
    int zn1, zn2, zn3;

    if (isdigit(znak1)) {
        zn1 =  znak1 - '0';
    }
    if (isdigit(znak2)) {
        zn2 = znak2 - '0';
    }
    if (isdigit(znak3)) {
        zn3 = znak3 - '0';
    }

    int suma = obliczSumeCyfr(zn1,zn2,zn3);


    if (suma > 0) {
        std::cout << "Suma cyfr w podanych znakach: " << suma << std::endl;
    } else {
        obliczSumeCyfr(znak1, znak2, znak3);
    }

    return 0;
}
