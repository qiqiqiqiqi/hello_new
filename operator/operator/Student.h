#pragma once
class Student {
public:
	int score;
	int operator+(Student* student);//���������
	int operator+(Student student);//����
};
