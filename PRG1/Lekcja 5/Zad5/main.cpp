#include <iostream>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>


int calculateDeterminant(int matrix[3][3]) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

int main() {
    const int size = 3;
    int matrix[size][size];


    std::srand(static_cast<unsigned>(std::time(nullptr)));


    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = std::rand() % 100;
        }
    }


    std::cout << "Macierz 3x3:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int determinant = calculateDeterminant(matrix);
    std::cout << "Wyznacznik macierzy: " << determinant << std::endl;

    return 0;
}
