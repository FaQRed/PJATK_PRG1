
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Функция для создания игровой доски размером size x size, заполненной нулями
vector<vector<int>> createBoard(int size) {
    return vector<vector<int>>(size, vector<int>(size, 0));
}

// Функция для вывода игровой доски на стандартный вывод
void printBoard(const vector<vector<int>>& board) {
    for (const vector<int>& row : board) {
        for (int num : row) {
            cout << num << ' ';
        }
        cout << endl;
    }
}

// Функция для сдвига всех элементов влево
void shiftLeft(vector<vector<int>>& board) {
    int size = board.size();
    for (int i = 0; i < size; i++) {
        vector<int> newRow;
        int lastMerged = -1;
        for (int j = 0; j < size; j++) {
            if (board[i][j] != 0) {
                if (newRow.empty()) {
                    newRow.push_back(board[i][j]);
                } else {
                    if (newRow.back() == board[i][j] && lastMerged != j - 1) {
                        newRow.back() *= 2;
                        lastMerged = j;
                    } else {
                        newRow.push_back(board[i][j]);
                    }
                }
            }
        }
        while (newRow.size() < size) {
            newRow.push_back(0);
        }
        board[i] = newRow;
    }
}

// Функция для сдвига всех элементов вправо
void shiftRight(vector<vector<int>>& board) {
    int size = board.size();
    for (int i = 0; i < size; i++) {
        vector<int> newRow;
        int lastMerged = size;
        for (int j = size - 1; j >= 0; j--) {
            if (board[i][j] != 0) {
                if (newRow.empty()) {
                    newRow.push_back(board[i][j]);
                } else {
                    if (newRow.back() == board[i][j] && lastMerged != j + 1) {
                        newRow.back() *= 2;
                        lastMerged = j;
                    } else {
                        newRow.push_back(board[i][j]);
                    }
                }
            }
        }
        while (newRow.size() < size) {
            newRow.push_back(0);
        }
        reverse(newRow.begin(), newRow.end());
        board[i] = newRow;
    }
}

// Функция для сдвига всех элементов вверх
void shiftUp(vector<vector<int>>& board) {
    int size = board.size();
    for (int j = 0; j < size; j++) {
        vector<int> newCol;
        int lastMerged = -1;
        for (int i = 0; i < size; i++) {
            if (board[i][j] != 0) {
                if (newCol.empty()) {
                    newCol.push_back(board[i][j]);
                } else {
                    if (newCol.back() == board[i][j] && lastMerged != i - 1) {
                        newCol.back() *= 2;
                        lastMerged = i;
                    } else {
                        newCol.push_back(board[i][j]);
                    }
                }
            }
        }
        while (newCol.size() < size) {
            newCol.push_back(0);
        }
        for (int i = 0; i < size; i++) {
            board[i][j] = newCol[i];
        }
    }
}

// Функция для сдвига всех элементов вниз
void shiftDown(vector<vector<int>>& board) {
    int size = board.size();
    for (int j = 0; j < size; j++) {
        vector<int> newCol;
        int lastMerged = size;
        for (int i = size - 1; i >= 0; i--) {
            if (board[i][j] != 0) {
                if (newCol.empty()) {
                    newCol.push_back(board[i][j]);
                } else {
                    if (newCol.back() == board[i][j] && lastMerged != i + 1) {
                        newCol.back() *= 2;
                        lastMerged = i;
                    } else {
                        newCol.push_back(board[i][j]);
                    }
                }
            }
        }
        while (newCol.size() < size) {
            newCol.push_back(0);
        }
        reverse(newCol.begin(), newCol.end());
        for (int i = 0; i < size; i++) {
            board[i][j] = newCol[i];
        }
    }
}

Kiryl, [31.10.2023 17:42]
int main() {
    int size;
    cin >> size;
    vector<vector<int>> board = createBoard(size);

    while (true) {
        char op;
        cin >> op;
        if (op == 'N') {
            int x, y, w;
            cin >> x >> y >> w;
            board[x][y] = w;
        } else if (op == 'L') {
            shiftLeft(board);
        } else if (op == 'P') {
            shiftRight(board);
        } else if (op == 'G') {
            shiftUp(board);
        } else if (op == 'D') {
            shiftDown(board);
        } else if (op == 'S') {
            int totalSum = 0;
            for (const vector<int>& row : board) {
                for (int num : row) {
                    totalSum += num;
                }
            }
            cout << totalSum << endl;
        } else if (op == 'W') {
            printBoard(board);
        } else if (op == 'C') {
            int M;
            cin >> M;
            board = createBoard(M);
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < M; j++) {
                    int val;
                    cin >> val;
                    board[i][j] = val;
                }
            }
        } else if (op == 'K') {
            int totalSum = 0;
            for (const vector<int>& row : board) {
                for (int num : row) {
                    totalSum += num;
                }
            }
            cout << totalSum << endl;
            break;
        }
    }

    return 0;
}