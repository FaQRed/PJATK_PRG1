#include <iostream>
#include "book.h"
#include "vector"
#include "workingWithFiles.h"

using namespace std;
static vector<book> books;
workingWithFiles wwf;


void addBook() {
    string author_name;
    string author_surname;
    string title;
    int yearOfIssue;

    cout << "Adding book" << endl;
    cout << "Enter Author's name: " << endl;
    cin >> author_name;
    cout << "Enter Author's surname: " << endl;
    cin >> author_surname;
    cout << "Enter Title: " << endl;
    getline(cin >> ws, title);
    cout << "Enter Year of Issue: " << endl;
    cin >> yearOfIssue;

    books.emplace_back(author_name, author_surname, title, yearOfIssue);

}


int main() {
    string fileName;

    do {
        cout << "\n**************************************************************************\n";
        cout << "                     WELCOME TO LIBRARY MANAGEMENT SYSTEM                   \n";
        cout << "                                  MAIN MENU                                 \n";
        cout << "\n**************************************************************************\n\n";
        cout << "\t\t1. Add book" << endl;
        cout << "\t\t2. Sort books by surname" << endl;
        cout << "\t\t3. Sort books by title" << endl;
        cout << "\t\t4. Search book" << endl;
        cout << "\t\t5. Delete last book" << endl;
        cout << "\t\t6. Delete book by id" << endl;
        cout << "\t\t7. Add file" << endl;
        cout << "\t\t8. Save file" << endl;
        cout << "\t\t9. Delete file" << endl;
        cout << "\t\t10. Output file" << endl;
        cout << "\t\t11. Exit" << endl;
        cout << "\nPlease Enter Your Above Choice : ";
        int n;
        cin >> n;

        switch (n) {
            case 1:
                addBook();
                break;
            case 7: {

                cout << "Enter File Name: ";
                cin >> fileName;
                wwf.createFile(fileName);
            }
                break;
            case 8:
                wwf.writeToTxt(books, fileName);
                break;
            case 9:
                cout << "Enter File Name: ";
                cin >> fileName;
                wwf.removeFile(fileName);
                break;
            case 10:
                wwf.outputFromTxt();
                break;

            case 11:
                cout << "Exiting from program...";
                exit(0);

        }
    } while (true);


}
