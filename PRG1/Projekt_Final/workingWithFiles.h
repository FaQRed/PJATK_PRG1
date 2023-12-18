//
// Created by Kiryl Sankouski on 16/12/2023.
//

#ifndef PROJEKT_FINAL_WORKINGWITHFILES_H
#define PROJEKT_FINAL_WORKINGWITHFILES_H

#include "vector"
#include "book.h"

class workingWithFiles {

public:
    static void createFile(const string& fileName);
    static void writeToTxt(vector<book>& books, const string& fileName);
    static void removeFile(const string& fileName);
    static void outputFromTxt(const string& filename);
    static void parseFromFile(const string& filePath, vector<book> &books);
    static void searchByAuthorName(vector<book> &books);
    static void searchByAuthorSurname(vector<book> &books);
    static void searchByTitle(vector<book> &books);
    static void searchByYear(vector<book> &books);
};


#endif //PROJEKT_FINAL_WORKINGWITHFILES_H
