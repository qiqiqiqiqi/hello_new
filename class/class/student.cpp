#include<iostream>
#include "student.h"
using namespace std;
Student::Student(int age) {
	cout << "���췽��" << endl;
	this->age = age;
}
Student::~Student() {
	cout << "��������" << endl;
}//���������������ͷ��ڴ�

void Student::setAge(int age) {
	this->age = age;
}
int Student::getAge() {
	return this->age;
}

void Student::setScroe(int scroe) const{
	//this->scroe = scroe;

}