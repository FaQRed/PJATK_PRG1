//
// Created by Kiryl Sankouski on 10/12/2023.
//

#ifndef PROJEKT_BOOK_H
#define PROJEKT_BOOK_H
#include "iostream"
using namespace std;


class Book {
private:
    string author_name;
    string author_surname;
    string title;
    string dateOfIssue;

public:
    Book(const string &authorName, const string &authorSurname, const string &title, const string &dateOfIssue);

    const string &getAuthorName() const;

    void setAuthorName(const string &authorName);

    const string &getAuthorSurname() const;

    void setAuthorSurname(const string &authorSurname);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getDateOfIssue() const;

    void setDateOfIssue(const string &dateOfIssue);

    friend ostream &operator<<(ostream &os, const Book &book);
};



#endif //PROJEKT_BOOK_H
