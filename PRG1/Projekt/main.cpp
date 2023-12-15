#include <iostream>
#include <fstream>
#include <iomanip>
#include "json.hpp"

using json = nlohmann::json;

struct Book {
    std::string firstName;
    std::string lastName;
    std::string title;
    int year;
};

void writeToTxt(const std::vector<Book>& books) {
    std::ofstream txtFile("output.txt");
    if (txtFile.is_open()) {
        for (const auto& book : books) {
            txtFile << "Author: " << book.firstName << " " << book.lastName << "\n";
            txtFile << "Title: " << book.title << "\n";
            txtFile << "Year: " << book.year << "\n\n";
        }
        txtFile.close();
        std::cout << "Data successfully written to the text file 'output.txt'" << std::endl;
    } else {
        std::cerr << "Error opening the text file for writing." << std::endl;
    }
}

int main() {
    // Create an array of Book objects
    std::vector<Book> books = {
            {"Jane", "Johnson", "Another Book", 2010},
            {"John", "Doe", "Example Book", 2015},
            // Add other books as needed
    };

    // Create a JSON array of objects
    json jsonBooks;

    // Fill the JSON array from the Book array
    for (const auto& book : books) {
        json bookJson;
        bookJson["firstName"] = book.firstName;
        bookJson["lastName"] = book.lastName;
        bookJson["title"] = book.title;
        bookJson["year"] = book.year;
        jsonBooks.push_back(bookJson);
    }

    // Write JSON data to a file
    std::ofstream jsonFile("output.json");
    if (jsonFile.is_open()) {
        jsonFile << std::setw(4) << jsonBooks << std::endl;  // pretty print with indentation
        jsonFile.close();
        std::cout << "Data successfully written to the file 'output.json'" << std::endl;
    } else {
        std::cerr << "Error opening the file for writing JSON." << std::endl;
        return 1;
    }

    // Write data to a text file
    writeToTxt(books);

    return 0;
}
