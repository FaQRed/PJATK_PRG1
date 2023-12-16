//
// Created by Kiryl Sankouski on 16/12/2023.
//

#include "workingWithFiles.h"
#include "iostream"
#include "string"
#include "fstream"

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
