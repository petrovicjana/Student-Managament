#ifndef STUDENT_H
#define STUDENT_H

#include <string>


class Student {
private:
	std::string name;
	int rollNumber;
	int age;
	char grade;

public:
	// Constructor
	Student(const std::string &name, int rollNumber, int age, char grade);

	// Getters and Setters
	std::string getName() const;
	int getRollNumber() const;
	int getAge() const;
	char getGrade() const;

	void setName(const std::string& name);
	void setAge(int age);
	void setGrade(char grade);

	// Display Student Information
	void display() const;
};

#endif // STUDENT_H

