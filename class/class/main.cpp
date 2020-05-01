#include<iostream>
#include"student.h"
using namespace std;
void setAge(Student* student) {
	student->age = 8;
}
int main() {
	
	Student student(18);
	cout << student.getAge() << endl;
	student.setAge(28);
	cout << student.getAge() << endl;
	setAge(&student);
	cout << student.getAge() << endl;
	InnerStudent inner;
	inner.setAge(&student,18);
	inner.setScroe(&student, 100);
	cout<< "age=" << student.getAge() << " ,scroe= " << student.getScroe() << endl;
	
}