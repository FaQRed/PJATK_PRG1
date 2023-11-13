#include <iostream>
using namespace std;
struct student{
    int indexNum;
    string name;
    string surname;

    student(int indexNum, const string &name, const string &surname) : indexNum(indexNum), name(name),
                                                                       surname(surname) {}
};


int main() {
    student alex(123456, "Alex", "Podber");
    student sasha(3452, "Sasha", "Belko");
    student mike(435902, "Mike", "Karlson");
    student miroslaw(6545029, "Myroslaw", "Natalchenko");
    return 0;
}
