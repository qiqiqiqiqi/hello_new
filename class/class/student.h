#pragma once
#ifndef Student_H
#define Student_H

class Student {
	friend void setAge(Student* student);//��Ԫ����������ĳ��˽�б���
	friend class InnerStudent ;//��Ԫ�࣬���ʶ��˽�б���
	private:
		int age;
		int scroe;
	public :
		Student(int age);
		~Student();
		void setAge(int age);
		int getAge();
		void setScroe(int scroe)const;//�����������������޸����еı���
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