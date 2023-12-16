//
// Created by Kiryl Sankouski on 16/12/2023.
//

#ifndef PROJEKT_FINAL_BOOK_H
#define PROJEKT_FINAL_BOOK_H

#include "string"

using namespace std;

class book {
private:
    int id;
    string author_name;
    string author_surname;
    string title;
    int yearOfIssue;

public:
    book(const string &authorName, const string &authorSurname, const string &title, int yearOfIssue);

    int getId() const;

    void setId(int id);

    const string &getAuthorName() const;

    void setAuthorName(const string &authorName);

    const string &getAuthorSurname() const;

    void setAuthorSurname(const string &authorSurname);

    const string &getTitle() const;

    void setTitle(const string &title);

    int getYearOfIssue() const;

    void setYearOfIssue(int yearOfIssue);

};


#endif //PROJEKT_FINAL_BOOK_H
