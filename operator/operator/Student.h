#pragma once
class Student
{
public:
	int score;
	int operator+(Student *student); //运算符重载
	int operator+(Student student);	 //重载
};
