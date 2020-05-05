#pragma once
#include<iostream>
#include<list>
#include<string>
using namespace std;
struct Student
{
	int age;
	string name;
	Student(int age, string name) {
		this->age = age;
		this->name = name;

	}
	Student() {};
	string show() {
		return "name="+this->name+",age="+to_string(this->age);
	}
};
void printList(std::list<Student>& l) {
	list<Student>::iterator begin;
	for (begin = l.begin(); begin != l.end(); begin++) {
		cout << begin->show() << endl;
	}
}
void listDemo() {
	//����
	list<Student> ll;
	for (int i = 0; i < 2; i++) {
		struct Student student=Student(i,"zhou"+to_string(i));
		ll.push_back(student);
	}
	printList(ll);

	/*
	����
	*/
	//��ָ��λ�ò���Ԫ��

	ll.insert(ll.begin(), Student( 18, "haha"));
	printList(ll);
	//�������λ
	ll.push_front(Student(17, "xiaoxin"));
	printList(ll);

	
	
}
