//
// Created by Kiryl Sankouski on 16/12/2023.
//

#include "workingWithFiles.h"
#include "iostream"
#include "string"
#include "fstream"
#include <cstdio>
#include "main.h"

using namespace std;

void workingWithFiles::writeToTxt(vector<book> &books, string fileName) {
    std::ofstream txtFile(fileName + ".txt");
    if (txtFile.is_open()) {
        for (const auto &book: books) {
            txtFile << "=====================================" << endl;
            txtFile << "Id: " << book.getId() << "\n";
            txtFile << "Author: " << book.getAuthorName() << " " << book.getAuthorSurname() << "\n";
            txtFile << "Title: " << book.getTitle() << "\n";
            txtFile << "Year: " << book.getYearOfIssue() << "\n";
        }
        txtFile.close();
        std::cout << "Data successfully written to the text file 'Library.txt'" << std::endl;
    } else {
        std::cerr << "Error opening the text file for writing." << std::endl;
    }
}

void workingWithFiles::outputFromTxt(string filename) {
    ifstream file(filename + ".txt");
    string content;
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            content += line + "\n";
        }
        file.close();
    } else cerr << "Error while opening a file" << endl;
    cout << content;

}


void workingWithFiles::createFile(string fileName) {

    ofstream{fileName + ".txt"};
}

void workingWithFiles::removeFile(string fileName) {

    remove((fileName + ".txt").c_str());
}

void workingWithFiles::parseFromFile(string fileName, vector<book> &books) {

    ifstream file(fileName + ".txt");
    string tempStr;
    string string_id;
    string author_name;
    string author_surname;
    string title;
    string string_yearOfIssue;

    if (!file.is_open()) {
        cerr << "Error while opening a file" << endl;
    } else {
        while (file >> tempStr) {
            getline(file, tempStr);
            getline(file, tempStr, ':');
            file >> tempStr;
            getline(file, tempStr, ':');
            file >> author_name >> author_surname;
            getline(file, tempStr, ':');
            getline(file, title);
            getline(file, tempStr, ':');
            file >> string_yearOfIssue;

            int yearOfIssue = stoi(string_yearOfIssue);
            books.emplace_back(author_name, author_surname, title, yearOfIssue);

        }

        file.close();
    }}

void workingWithFiles::searchByAuthorSurname(vector<book> &books) {
    string authorSurname;
    cout << "Enter author surname to search: ";
    cin.ignore();
    getline(cin, authorSurname);
    for(const auto &book : books){
        if(book.getAuthorSurname() == authorSurname){
            cout << "=====================================" << endl;
            cout << "Id: " << book.getId() << "\n";
            cout << "Author: " << book.getAuthorName() << " " << book.getAuthorSurname() << "\n";
            cout << "Title: " << book.getTitle() << "\n";
            cout << "Year: " << book.getYearOfIssue() << "\n";
        }
    }
}

void workingWithFiles::searchByTitle(vector<book> &books) {
    string title;
    cout << "Enter title to search: ";
    cin.ignore();
    getline(cin, title);
    for(const auto &book : books){
        if(book.getTitle().find(title) != string::npos){
            cout << "=====================================" << endl;
            cout << "Id: " << book.getId() << "\n";
            cout << "Author: " << book.getAuthorName() << " " << book.getAuthorSurname() << "\n";
            cout << "Title: " << book.getTitle() << "\n";
            cout << "Year: " << book.getYearOfIssue() << "\n";
        }
    }
}

void workingWithFiles::searchByYear(vector<book> &books) {
    int year;
    cout << "Enter year to search: ";
    cin >> year;
    for(const auto &book : books){
        if(book.getYearOfIssue() == year){
            cout << "=====================================" << endl;
            cout << "Id: " << book.getId() << "\n";
            cout << "Author: " << book.getAuthorName() << " " << book.getAuthorSurname() << "\n";
            cout << "Title: " << book.getTitle() << "\n";
            cout << "Year: " << book.getYearOfIssue() << "\n";
        }
    }
}

void workingWithFiles::searchByAuthorName(vector<book> &books) {
    string authorName;
    cout << "Enter author name to search: ";
    cin.ignore();
    getline(cin, authorName);
    for (const auto &book: books) {
        if (book.getAuthorName() == authorName) {
            cout << "=====================================" << endl;
            cout << "Id: " << book.getId() << "\n";
            cout << "Author: " << book.getAuthorName() << " " << book.getAuthorSurname() << "\n";
            cout << "Title: " << book.getTitle() << "\n";
            cout << "Year: " << book.getYearOfIssue() << "\n";
        }
    }
}






