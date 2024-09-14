#include "Student.h"
#include <iostream>

// Constructor
Student::Student(const std::string &name, int rollNumber, int age, char grade)
	: name(name), rollNumber(rollNumber), age(age), grade(grade) {}

//Getters
std::string Student::getName() const { return name; }
int Student::getRollNumber() const { return rollNumber; }
int Student::getAge() const { return age; }
char Student::getGrade() const { return grade; }

//Setters
void Student::setName(const std::string& name) { this->name = name; }
void Student::setAge(int age) { this->age = age; }
void Student::setGrade(char grade) { this->grade = grade; }

//Display function
void Student::display() const {
	std::cout << "Name: " << name << ", Roll Number: " << rollNumber
		      << ", Age: " << age << ", Grade: " << grade << std::endl;
}
