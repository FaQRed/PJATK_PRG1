#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void bubbleSort(int list[], int listLength)
{
    while(listLength--)
    {
        bool swapped = false;

        for(int i = 0; i < listLength; i++)
        {
            if(list[i] > list[i + 1])
            {
                swap(list[i], list[i + 1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
}



int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int n;
    do {
        std::cout << "Podaj liczbę elementów tablicy: ";
        std::cin >> n;

        if (n <= 0) {
            std::cout << "Liczba elementów musi być dodatnia." << std::endl;
        }
    } while (n <= 0);

    int array [n];

    for (int i = 0; i < n; ++i) {
        array[i] = std::rand() % 100;
    }

    std::cout << "Tablica przed sortowaniem:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(array, n);

    std::cout << "Tablica po posortowaniu rosnąco:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

