#include <iostream>
#include "book.h"
#include "vector"
#include "workingWithFiles.h"
#include <algorithm>
#include <cstdlib>
#include "main.h"

workingWithFiles wwf;
 vector<book> books;
void deleteLastBook(){
    books.pop_back();
}
void deleteBookById(int id){
    for(auto it = books.begin(); it != books.end(); ++it){
        if(id == it->getId()){
            books.erase(it);
            break;
        }
    }
}

bool compareByAuthorSurname(const book& book1, const book& book2) {
    return book1.getAuthorSurname() < book2.getAuthorSurname();
}
bool compareByTitle(const book& book1, const book& book2) {
    return book1.getTitle() < book2.getTitle();
}
void outputVector(vector<book> &books){
    for (const auto &book: books) {
        cout  << "=====================================" << endl;
        cout  << "Id: " << book.getId() << "\n";
        cout  << "Author: " << book.getAuthorName() << " " << book.getAuthorSurname() << "\n";
        cout  << "Title: " << book.getTitle() << "\n";
        cout  << "Year: " << book.getYearOfIssue() << "\n";
    }
}



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
        cout << "\t\t11. Output books array" << endl;
        cout << "\t\t12. Parse from file to Array" << endl;
        cout << "\t\t13. Exit" << endl;
        cout << "\nPlease Enter Your Above Choice : ";
        int n;
        cin >> n;

        switch (n) {
            case 1:
                system("clear");
                addBook();
                system("clear");
                break;
            case 2:
                system("clear");
                sort(books.begin(), books.end(), compareByAuthorSurname);
                break;
            case 3:
                system("clear");
                sort(books.begin(), books.end(), compareByTitle);
                break;
            case 4:
                do{
                    cout << "\n**************************************************************************\n";
                    cout << "                     WELCOME TO LIBRARY MANAGEMENT SYSTEM                   \n";
                    cout << "                                  SEARCH                                 \n";
                    cout << "\n**************************************************************************\n\n";
                    cout << "\t\t1. By author name" << endl;
                    cout << "\t\t2. By author surname" << endl;
                    cout << "\t\t3. By title" << endl;
                    cout << "\t\t4. By year" << endl;
                    cout << "\t\t5. Back to main menu" << endl;

                    int criteria;
                    cin >> criteria;
                    switch (criteria) {
                        case 1:
                            //searchByAuthorName();
                            break;
                        case 2:
                            //searchByAuthorSurname();
                            break;
                        case 3:
                            //searchByTitle();
                            break;
                        case 4:
                            //searchByYear();
                            break;
                        case 5:
                            main();
                            break;
                    }
                } while(true);



            case 5:
                system("clear");
                deleteLastBook();
                cout << "Last record has been successfully deleted" << endl;
                break;
            case 6:
                system("clear");
                int id;
                cout << "Enter id number to delete ";
                cin >> id;
                deleteBookById(id);
                system("clear");
                break;
            case 7: {
                system("clear");
                cout << "Enter File Name: ";
                cin >> fileName;
                wwf.createFile(fileName);
            }
                break;
            case 8:
                system("clear");
                cout << "Enter File Name: ";
                cin >> fileName;
                wwf.writeToTxt(books, fileName);
                break;
            case 9:
                system("clear");
                cout << "Enter File Name: ";
                cin >> fileName;
                wwf.removeFile(fileName);
                break;
            case 10:
                system("clear");
                cout << "Enter File Name: ";
                cin >> fileName;
                wwf.outputFromTxt(fileName);
                break;
            case 11:
                system("clear");
                if(!books.empty()){
                outputVector(books);}
                else cout << "Array is empty";
                break;
            case 12:
                system("clear");
                cout << "Enter File Name: ";
                cin >> fileName;
                wwf.parseFromFile(fileName, books);
                break;

            case 13:
                system("clear");
                cout << "Exiting from program...";
                exit(0);

        }
    } while (true);


}
