#include<iostream>
#include"Student.h"
int Student::operator+(Student* student) {
	return this->score + student->score;
}
int Student::operator+(Student student) {
	return this->score + student.score;
}