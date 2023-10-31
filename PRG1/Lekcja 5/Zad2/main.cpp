#include <iostream>
#include <algorithm>
#include <cstdlib>
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
    const int n = 50;
    int array[n];

    for (int & i : array) {
        i = std::rand() % 100;
    }
    for (int i = 0; i < size(array) - 1; ++i) {
        cout << array[i] << ' ';
    }
    cout << '\n';


    bubbleSort(array, size(array));
    for (int i = 0; i < size(array) - 1; ++i) {
        cout << array[i] << ' ';
    }

    cout << '\n';
    int target;
    std::cout << "Podaj liczbę do wyszukania: ";
    std::cin >> target;

    bool found = std::binary_search(array, array + n, target);
    int index = std::binary_search(array, array + n, target);

    if (found) {
        std::cout << "Liczba " << target << " została znaleziona w tablicy. "<< "Jego indeks - " << index -1 << std::endl;
    } else {
        std::cout << "Liczba " << target << " nie została znaleziona w tablicy." << std::endl;
    }

    return 0;
}


