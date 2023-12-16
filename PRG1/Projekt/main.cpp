#include <iostream>
#include <fstream>
#include <iomanip>
#include "json.hpp"
#include "Book.h"
#include "LinkedList.h"
using namespace std;
using json = nlohmann::json;



void writeToTxt(const std::vector<Book>& books) {
    std::ofstream txtFile("output.txt");
    if (txtFile.is_open()) {
        for (const auto& book : books) {
            txtFile << "Id: " << book.getId() << "\n";
            txtFile << "Author: " << book.getAuthorName() << " " << book.getAuthorSurname() << "\n";
            txtFile << "Title: " << book.getTitle() << "\n";
            txtFile << "Year: " << book.getDateOfIssue() << "\n\n";
        }
        txtFile.close();
        std::cout << "Data successfully written to the text file 'output.txt'" << std::endl;
    } else {
        std::cerr << "Error opening the text file for writing." << std::endl;
    }
}

int main() {
    // Create an array of Book objects
LinkedList<Book> books;
books.append(*new Book(1,"Kiryl", "Sankouski", "Gaf", 1994));



    json jsonBooks;


    for (ListNode<Book>* book = books.getHead() != nullptr) {
        json bookJson;
        bookJson["id"] = book.id;
        bookJson["firstName"] = book.firstName;
        bookJson["lastName"] = book.lastName;
        bookJson["title"] = book.title;
        bookJson["year"] = book.year;
        jsonBooks.push_back(bookJson);
    }


    std::ofstream jsonFile("output.json");
    if (jsonFile.is_open()) {
        jsonFile << std::setw(4) << jsonBooks << std::endl;
        jsonFile.close();
        std::cout << "Data successfully written to the file 'output.json'" << std::endl;
    } else {
        std::cerr << "Error opening the file for writing JSON." << std::endl;
        return 1;
    }
    writeToTxt(books);



    return 0;
}
