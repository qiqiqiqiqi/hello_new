#include "student.h"
#include <iostream>
using namespace std;
Student::Student(int age) : age(age)
{
	this->age = age;
	cout << "构造函数" << endl;
}
Student::~Student()
{
	cout << "析构函数" << endl;
}

void Student::setAge(int age)
{
	this->age = age;
}
int Student::getAge()
{
	return this->age;
}

void Student::setScroe(int scroe) const
{
	//只能读及处理逻辑
	//可以通过友元的方式写数据
}
int Student::getScroe()
{
	return this->scroe;
}
//实现友元函数
void setAge(Student *student)
{
	student->age = 8;
}
