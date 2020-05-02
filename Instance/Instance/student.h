#pragma once
#ifndef Student_H
#define Student_H


class Student {
private :
	Student();
	static Student* student;
public :
	~Student();
	static Student* getInstance();
	void study();
};
#endif // !Student_H;