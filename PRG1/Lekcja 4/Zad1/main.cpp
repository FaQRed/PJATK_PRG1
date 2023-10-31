#include <iostream>

using namespace std;

bool isEven(int n)
{

    if ((n ^ 1) == (n + 1))
        return true;
    else
        return false;
}

int main() {
    double liczba;
    long long liczba_res, cnt=0;
    do
    {
        cout << "\nWprowadz calkowita1 liczbe: \n";

        cin >> liczba;
        cin.clear();
        cin.sync();
    }
    while (liczba!= (long long) liczba);


    liczba_res=(long long)liczba;

    while (liczba_res>0)
    {
        if (liczba_res&1)
            cnt++;
        liczba_res>>=1;
    }
    cout << cnt << '\n';
    if (isEven(cnt))
        cout << "Ilosc jedynek w postaci binarnej jest parzysta" << "\n";
    else
        cout << "Ilosc jedynek w postaci binarnej nie jest parzysta" << "\n";


    return 0;
}