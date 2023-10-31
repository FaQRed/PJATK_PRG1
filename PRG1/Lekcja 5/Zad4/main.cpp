#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    const int size = 20;
    int array[size];

    for (int i = 0; i < size; ++i) {
        array [i] = std::rand() % 100;
    }
    for (int i = 0; i < size- 1; ++i) {
        cout << array[i] << ' ';
    }
    cout << '\n';

    insertionSort(array, size);

    std::cout << "Tablica po posortowaniu rosnąco: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
