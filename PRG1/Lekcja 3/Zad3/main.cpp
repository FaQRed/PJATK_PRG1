#include <iostream>
#include <cctype>

int main() {
    char znak;
    std::cout << "Podaj znak: ";
    std::cin >> znak;


    if (std::isalpha(znak)) {
        znak = std::tolower(znak);


        int litery_przed = znak - 'a';
        int litery_po = 'z' - znak;

        std::cout << "Liter przed: " << litery_przed << std::endl;
        std::cout << "Liter po: " << litery_po << std::endl;
    } else {
        std::cout << "To nie jest litera." << std::endl;
    }

    return 0;
}
