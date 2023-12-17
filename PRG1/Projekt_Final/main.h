//
// Created by Kiryl Sankouski on 17/12/2023.
//

#ifndef PROJEKT_FINAL_MAIN_H
#define PROJEKT_FINAL_MAIN_H


using namespace std;



void deleteLastBook();
void deleteBookById(int id);
bool compareByAuthorSurname(const book& book1, const book& book2);
bool compareByTitle(const book& book1, const book& book2);
void outputVector(vector<book> &books);
void addBook();
int main();
#endif //PROJEKT_FINAL_MAIN_H
