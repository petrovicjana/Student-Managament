#include "StudentManager.h"
#include <iostream>

using namespace std;

// Adding a new student
void StudentManager::addStudent(const Student& student) {
	students.push_back(student);
}

// Display all student records
void StudentManager::displayAllStudents() const {
	for (const auto &student : students) {
		student.display();
	}
}

// Update a student's information by roll number
bool StudentManager::updateStudent(int rollNumber, const string& name, int age, char grade) {
    for (auto& student : students) {
        if (student.getRollNumber() == rollNumber) {
            student.setName(name);
            student.setAge(age);
            student.setGrade(grade);
            return true;
        }
    }
    return false;
}

// Delete a student's record by roll number
bool StudentManager::deleteStudent(int rollNumber) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getRollNumber() == rollNumber) {
            students.erase(it);
            return true;
        }
    }
    return false;
}
