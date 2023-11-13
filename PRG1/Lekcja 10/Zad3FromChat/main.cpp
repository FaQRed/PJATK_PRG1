#include <iostream>
#include <string>

struct Student {
    std::string imię;
    std::string nazwisko;
    int nrIndeksu;
};

// Funkcja dodająca studenta do listy
void dodajStudenta(Student *studentsArray, int &numOfStudents, int rozmiar) {
    if (numOfStudents < rozmiar) {
        std::cout << "Podaj imię studenta: ";
        std::cin >> studentsArray[numOfStudents].imię;

        std::cout << "Podaj nazwisko studenta: ";
        std::cin >> studentsArray[numOfStudents].nazwisko;

        std::cout << "Podaj numer indeksu studenta: ";
        std::cin >> studentsArray[numOfStudents].nrIndeksu;

        std::cout << "Student dodany pomyślnie.\n";
        numOfStudents++;
    } else {
        std::cout << "Lista studentów jest pełna.\n";
    }
}

// Funkcja wyświetlająca listę studentów
void wyswietlListeStudentow(const Student *studentsArray, int numOfStudents) {
    if (numOfStudents == 0) {
        std::cout << "Lista studentów jest pusta.\n";
    } else {
        std::cout << "Lista studentów:\n";
        for (int i = 0; i < numOfStudents; ++i) {
            std::cout << "Imię: " << studentsArray[i].imię << "\tNazwisko: " << studentsArray[i].nazwisko << "\tNr indeksu: " << studentsArray[i].nrIndeksu << "\n";
        }
    }
}

int main() {
    const int maxStudents = 1000;
    Student studentsArray[maxStudents];
    int numOfStudents = 0;

    char wybór;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Dodaj studenta\n";
        std::cout << "2. Wyświetl listę studentów\n";
        std::cout << "3. Wyjście\n";
        std::cout << "Wybierz opcję: ";
        std::cin >> wybór;

        switch (wybór) {
            case '1':
                dodajStudenta(studentsArray, numOfStudents, maxStudents);
                break;
            case '2':
                wyswietlListeStudentow(studentsArray, numOfStudents);
                break;
            case '3':
                std::cout << "Wyjście z programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybór. Spróbuj ponownie.\n";
        }
    } while (wybór != '3');

    return 0;
}
