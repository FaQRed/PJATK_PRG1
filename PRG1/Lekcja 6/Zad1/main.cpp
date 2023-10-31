#include <iostream>
#include <algorithm>


void wczytajTablice(int tablica[], int rozmiar) {
    std::cout << "Wprowadz " << rozmiar << " liczb calkowitych:" << std::endl;
    for (int i = 0; i < rozmiar; i++) {
        std::cin >> tablica[i];
    }
}
void swap(int arr[] , int pos1, int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}
int partition(int arr[], int low, int high, int pivot){
    int i = low;
    int j = low;
    while( i <= high){
        if(arr[i] > pivot){
            i++;
        }
        else{
            swap(arr,i,j);
            i++;
            j++;
        }
    }
    return j-1;
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = arr[high];
        int pos = partition(arr, low, high, pivot);

        quickSort(arr, low, pos-1);
        quickSort(arr, pos+1, high);
    }
}


void wyswietlTabliceNiepos(int tablica[], int rozmiar) {
    std::cout << "Nieposortowana tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;


}
void wyswietlTablicePos(int tablica[], int rozmiar){
    std::cout << "Posortowana tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int rozmiar = 10;
    int tablica[rozmiar];


    wczytajTablice(tablica, rozmiar);

    wyswietlTabliceNiepos(tablica,rozmiar);

   quickSort(tablica, 0, rozmiar - 1);


    wyswietlTablicePos(tablica, rozmiar);

    return 0;
}

