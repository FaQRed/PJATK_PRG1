//
// Created by Kiryl Sankouski on 10/12/2023.
//

#ifndef PROJEKT_BOOK_H
#define PROJEKT_BOOK_H
#include "iostream"
using namespace std;


class Book {

private:
    int id;
    string author_name;
    string author_surname;
    string title;
    int dateOfIssue;

public:

    Book(const int &id, const string &authorName, const string &authorSurname, const string &title,
         const int &dateOfIssue);

    const int &getId() const;

    void setId(const int &id);

    const string &getAuthorName() const;

    void setAuthorName(const string &authorName);

    const string &getAuthorSurname() const;

    void setAuthorSurname(const string &authorSurname);

    const string &getTitle() const;

    void setTitle(const string &title);

    const int &getDateOfIssue() const;

    void setDateOfIssue(const int &dateOfIssue);

    friend ostream &operator<<(ostream &os, const Book &book);
};



#endif //PROJEKT_BOOK_H
