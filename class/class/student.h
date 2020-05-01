#pragma once
#ifndef Student_H
#define Student_H

class Student {
	friend void setAge(Student* student);//友元函数，访问某个私有变量
	friend class InnerStudent ;//友元类，访问多个私有变量
	private:
		int age;
		int scroe;
	public :
		Student(int age);
		~Student();
		void setAge(int age);
		int getAge();
		void setScroe(int scroe)const;//常量函数，不可以修改类中的变量
		int getScroe() {
			return scroe;
		}

	protected:
		int a;
	

};
class InnerStudent {
public:
	void setAge(Student* student, int age) {
		student->age = age;
	}
	void setScroe(Student* student, int scroe) {
		student->scroe = scroe;
	}
};
#endif