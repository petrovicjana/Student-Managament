#include <iostream>
#include <limits>
#include "StudentManager.h"

void displayMenu() {
    std::cout << "1. Add New Student\n";
    std::cout << "2. Display All Students\n";
    std::cout << "3. Update Student Information\n";
    std::cout << "4. Delete Student Record\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    StudentManager manager;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        // Check if the input for choice was successful
        if (std::cin.fail()) {
            std::cin.clear(); // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining input
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1: {
            // Add a new student
            std::string name;
            int rollNumber, age;
            char grade;
            std::cout << "Enter name, roll number, age, and grade: ";
            std::cin >> name >> rollNumber >> age >> grade;

            // Validate input for rollNumber and age
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input for student details.\n";
                continue;
            }

            manager.addStudent(Student(name, rollNumber, age, grade));
            break;
        }
        case 2: {
            // Display all students
            manager.displayAllStudents();
            break;
        }
        case 3: {
            // Update student information
            int rollNumber;
            std::string name;
            int age;
            char grade;
            std::cout << "Enter roll number to update: ";
            std::cin >> rollNumber;

            // Validate input for rollNumber
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid roll number.\n";
                continue;
            }

            std::cout << "Enter new name, age, and grade: ";
            std::cin >> name >> age >> grade;

            // Validate input for age
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input for student details.\n";
                continue;
            }

            if (!manager.updateStudent(rollNumber, name, age, grade)) {
                std::cout << "Student not found.\n";
            }
            break;
        }
        case 4: {
            // Delete student record
            int rollNumber;
            std::cout << "Enter roll number to delete: ";
            std::cin >> rollNumber;

            // Validate input for rollNumber
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid roll number.\n";
                continue;
            }

            if (!manager.deleteStudent(rollNumber)) {
                std::cout << "Student not found.\n";
            }
            break;
        }
        case 5:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


