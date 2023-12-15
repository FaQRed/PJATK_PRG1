#include <iostream>
#include <fstream>
#include<string>
#include "Book.h"
using namespace std;
int main() {
    Book book("Steven", "King", "Green Mile", "1989");


    ofstream fOut;
    fOut.open("MyFile.txt");

    fOut << book;

    return 0;
}
