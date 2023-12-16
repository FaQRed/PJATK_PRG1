//
// Created by Kiryl Sankouski on 10/12/2023.
//

#include "Book.h"

Book::Book(const int &id, const string &authorName, const string &authorSurname, const string &title,
           const int &dateOfIssue) : id(id), author_name(authorName), author_surname(authorSurname), title(title),
                                        dateOfIssue(dateOfIssue) {}

const string &Book::getAuthorName() const {
    return author_name;
}

void Book::setAuthorName(const string &authorName) {
    author_name = authorName;
}

const string &Book::getAuthorSurname() const {
    return author_surname;
}

void Book::setAuthorSurname(const string &authorSurname) {
    author_surname = authorSurname;
}

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    Book::title = title;
}

const int &Book::getDateOfIssue() const {
    return dateOfIssue;
}

void Book::setDateOfIssue(const int &dateOfIssue) {
    Book::dateOfIssue = dateOfIssue;
}

ostream &operator<<(ostream &os, const Book &book) {
    os << "author_name: " << book.author_name << " author_surname: " << book.author_surname << " title: " << book.title
       << " dateOfIssue: " << book.dateOfIssue;
    return os;
}

const int &Book::getId() const {
    return id;
}


void Book::setId(const int &id) {
    Book::id = id;
}
