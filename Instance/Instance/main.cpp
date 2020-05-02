#include<iostream>
#include"student.h"
int main() {
	Student* student = Student::getInstance();
	Student* student1 = Student::getInstance();

	student->study();
	return 0;
}