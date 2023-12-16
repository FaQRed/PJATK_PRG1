//
// Created by Kiryl Sankouski on 16/12/2023.
//

#include "book.h"
int counter_id = 1;
book::book(const string &authorName, const string &authorSurname, const string &title, int yearOfIssue) : id(
        counter_id), author_name(authorName), author_surname(authorSurname), title(title), yearOfIssue(yearOfIssue) {
    counter_id++;
}
int book::getId() const {
    return id;
}

void book::setId(int id) {
    book::id = id;
}

const string &book::getAuthorName() const {
    return author_name;
}

void book::setAuthorName(const string &authorName) {
    author_name = authorName;
}

const string &book::getAuthorSurname() const {
    return author_surname;
}

void book::setAuthorSurname(const string &authorSurname) {
    author_surname = authorSurname;
}

const string &book::getTitle() const {
    return title;
}

void book::setTitle(const string &title) {
    book::title = title;
}

int book::getYearOfIssue() const {
    return yearOfIssue;
}

void book::setYearOfIssue(int yearOfIssue) {
    book::yearOfIssue = yearOfIssue;
}
