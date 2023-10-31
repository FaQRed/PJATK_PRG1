#include <iostream>
#include <string>
using namespace std;

int main() {
    string ciag1 = "piątek";
    string ciag2 = "piąteczek";


    bool porownanie = (ciag1 == ciag2);

    int dlugosc_ciag1_przed_dod_spacji = ciag1.length();


    ciag1.append(" ");


    string konkatenacja = ciag1 + ciag2;


    int dlugosc_ciag1 = ciag1.size();
    int dlugosc_ciag2 = ciag2.size();


    int dlugosc_konkatenacji = konkatenacja.size();

    cout << "Porównanie dwóch ciągów: " << (porownanie ? "Równe" : "Różne") << endl;
    cout << "Konkatenacja dwóch ciągów: " << konkatenacja << endl;
    cout << "Długość pierwszego ciągu przed dodaniu spacji: " << dlugosc_ciag1_przed_dod_spacji << endl;
    cout << "Długość pierwszego ciągu po dodaniu spacji: " << dlugosc_ciag1 << endl;
    cout << "Długość drugiego ciągu: " << dlugosc_ciag2 << endl;
    cout << "Długość po konkatenacji: " << dlugosc_konkatenacji << endl;

    return 0;
}
