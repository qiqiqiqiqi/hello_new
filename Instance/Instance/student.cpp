#include<iostream>
#include"student.h"
using namespace std;
Student::Student(){
	cout << "student()" << endl;
}
Student::~Student() {//因为是静态单例无法释放
	cout << "student()" << endl;
}
Student* Student::student ;
Student* Student::getInstance() {
	if (student==nullptr) {
		student = new Student();
	}
	return student;
}

void Student::study() {
	cout << "学生学习" << endl;
}