#include<iostream>
#include"student.h"
using namespace std;
Student::Student(){
	cout << "student()" << endl;
}
Student::~Student() {//��Ϊ�Ǿ�̬�����޷��ͷ�
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
	cout << "ѧ��ѧϰ" << endl;
}