#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    string surname;
    int indexNumber;
};


void addStudent(Student studentsArray[], int &numOfStudents, int size) {
    if (numOfStudents < size) {
        cout << "Name of student: ";
        cin >> studentsArray[numOfStudents].name;

        cout << "Surname of student: ";
        cin >> studentsArray[numOfStudents].surname;

        cout << "Student's index number: " << endl;
        cin >> studentsArray[numOfStudents].indexNumber;

        cout << "Added Student.\n";
        numOfStudents++;
    } else {
        cout << "List is full of students.\n";
    }
}


void showStudents(const Student *studentsArray, int numOfStudents) {
    if (numOfStudents == 0) {
        cout << "List is null.\n";
    } else {
        cout << "List of students:\n";
        for (int i = 0; i < numOfStudents; ++i) {
            cout << "Name: " << studentsArray[i].name << endl <<
                 "Surname: " << studentsArray[i].surname << endl <<
                 "Nr indeksu: " << studentsArray[i].indexNumber << endl;
            cout << "--------------------------------------" << endl;
        }
    }
}

int main() {
    const int maxStudents = 1000;
    Student studentsArray[maxStudents];
    int numOfStudents = 0;
    char casing;

    do {
        cout << "1. Add student\n";
        cout << "2. Show list of students\n";
        cin >> casing;

        switch (casing) {
            case '1':
                addStudent(studentsArray, numOfStudents, maxStudents);
                break;
            case '2':
                showStudents(studentsArray, numOfStudents);
                break;
            default:
                cout << "Exiting.\n";
                break;
        }
    } while (casing == '2' || casing == '1');

    return 0;
}
