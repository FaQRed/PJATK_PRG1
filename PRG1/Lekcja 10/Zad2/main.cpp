#include <iostream>
using namespace std;

int* generujciagFibonacci(int n) {
    if (n <= 0) {
        cerr << "Podaj liczbę większą od zera.\n";
        return nullptr;
    }

    int* ciag = new int[n];

    ciag[0] = 0;

    if (n == 1) {
        return ciag;
    }

    ciag[1] = 1;

    for (int i = 2; i < n; ++i) {
        ciag[i] = ciag[i - 1] + ciag[i - 2];
    }

    return ciag;
}

int main() {
    int iloscOfFib;

 
    cout << "Podaj iloscOfFib liczb fib do generowania: ";
    cin >> iloscOfFib;
    
    int* ciagFibonacci = generujciagFibonacci(iloscOfFib);
    
    cout << "ciag Fibonacci " << iloscOfFib << " elementowy:\n";
    for (int i = 0; i < iloscOfFib; ++i) {
        cout << ciagFibonacci[i] << " ";
    }
    delete[] ciagFibonacci;

    return 0;
}
