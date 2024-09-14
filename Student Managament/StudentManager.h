#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include "Student.h"
#include <vector>

class StudentManager {
private:
    std::vector<Student> students; // Using a vector to manage student records

public:
    // Methods to manage student records
    void addStudent(const Student& student);
    void displayAllStudents() const;
    bool updateStudent(int rollNumber, const std::string& name, int age, char grade);
    bool deleteStudent(int rollNumber);
};

#endif // STUDENTMANAGER_H

