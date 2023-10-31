#include <iostream>
#include <cstdlib>

using namespace std;

void selectionSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int maxIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            std::swap(arr[i], arr[maxIndex]);
        }
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    const int size = 20;
    int array[size];

    for (int i = 0; i < size; ++i) {
       array[i] = std::rand() % 100;
    }

    for (int i = 0; i < size- 1; ++i) {
        cout << array[i] << ' ';
    }
    cout << '\n';

    selectionSortDescending(array, size);

    std::cout << "Tablica po ułożeniu malejąco: ";
    for (int i = 0; i < size; ++i) {
       cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
