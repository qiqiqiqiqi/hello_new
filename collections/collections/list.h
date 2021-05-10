#pragma once
#include <iostream>
#include <list>
#include <string>
using namespace std;
struct Student
{
	int age;
	string name;
	Student(int age, string name)
	{
		this->age = age;
		this->name = name;
	}
	Student(){};
	string show()
	{
		return "name=" + this->name + ",age=" + to_string(this->age);
	}
};
void printList(std::list<Student> &l)
{
	list<Student>::iterator begin;
	for (begin = l.begin(); begin != l.end(); begin++)
	{
		cout << begin->show() << endl;
	}
}
void listDemo()
{
	//创建
	list<Student> ll;
	for (int i = 0; i < 2; i++)
	{
		struct Student student = Student(i, "zhou" + to_string(i));
		ll.push_back(student);
	}
	printf("source\n");
	printList(ll);

	/*
	增加
	*/
	//在指定位置插入元素

	ll.insert(ll.begin(), Student(18, "haha"));
	printf("insert\n");
	printList(ll);
	//添加在首位
	ll.push_front(Student(17, "xiaoxin"));
	printf("push_front\n");
	printList(ll);
}
