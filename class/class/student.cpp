#include<iostream>
#include "student.h"
using namespace std;
Student::Student(int age) {
	cout << "构造方法" << endl;
	this->age = age;
}
Student::~Student() {
	cout << "析构方法" << endl;
}//析构函数，用于释放内存

void Student::setAge(int age) {
	this->age = age;
}
int Student::getAge() {
	return this->age;
}

void Student::setScroe(int scroe) const{
	//this->scroe = scroe;

}