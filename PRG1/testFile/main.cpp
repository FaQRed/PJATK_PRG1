#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Book {
public:
    int id;
    std::string authorName;
    std::string authorSurname;
    std::string title;
    int yearOfIssue;

    // Конструктор
    Book(int _id, const std::string& _authorName, const std::string& _authorSurname, const std::string& _title, int _yearOfIssue)
            : id(_id), authorName(_authorName), authorSurname(_authorSurname), title(_title), yearOfIssue(_yearOfIssue) {}
};

class WorkingWithFiles {
public:
    std::vector<Book> parseFromFile(const std::string& fileName) {
        std::vector<Book> books;
        std::ifstream file(fileName + ".txt");
        std::string tempStr;
        std::string string_id;
        std::string author_name;
        std::string author_surname;
        std::string title;
        std::string string_yearOfIssue;

        if (!file.is_open()) {
            std::cerr << "Error while opening a file" << std::endl;
        } else {
            while (getline(file, tempStr)) {
                getline(file, tempStr, ':');
                file >> string_id;
                getline(file, tempStr, ':');
                file >> author_name >> author_surname;
                getline(file, tempStr, ':');
                file >> title;
                getline(file, tempStr, ':');
                file >> string_yearOfIssue;

                int id = std::stoi(string_id);
                int yearOfIssue = std::stoi(string_yearOfIssue);

                books.emplace_back(id, author_name, author_surname, title, yearOfIssue);
            }
            // Не читаем лишний раз после последней записи
            // file >> tempStr; // Закомментировано, чтобы избежать "лишнего" чтения

            file.close();
        }

        return books;
    }
};

int main() {
    WorkingWithFiles fileParser;
    std::vector<Book> parsedBooks = fileParser.parseFromFile("Library");

    // Теперь 'parsedBooks' содержит объекты Book для каждой записи в файле
    // Можно использовать эти данные по необходимости

    // Вывод данных для проверки
    for (const auto& book : parsedBooks) {
        std::cout << "ID: " << book.id << std::endl;
        std::cout << "Author: " << book.authorName << " " << book.authorSurname << std::endl;
        std::cout << "Title: " << book.title << std::endl;
        std::cout << "Year of Issue: " << book.yearOfIssue << std::endl;
        std::cout << "----------------------" << std::endl;
    }

    return 0;
}