#include <iostream>

using namespace std;

int main() {
    int mas[4]={0};
    cin >> mas[6];
    cin.clear();
    mas[3] = mas[6]*2;
    cout << sizeof(mas)/sizeof(int) << '\n';
    cout << mas[3] << ' ' << mas[6];
    return 0;
}
