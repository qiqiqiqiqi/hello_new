
#include <iostream>
#include "student.cpp"
using namespace std;

int main(void)
{
    // 构造赋值
	Student student(18);
	std::cout << student.getAge() << std::endl;
	// 公共方法赋值
	student.setAge(28);
	cout << student.getAge() << endl;
    // 友元函数赋值
	setAge(&student);
	cout << student.getAge() << endl;
	// 友元类赋值
	InnerStudent inner;
	inner.setAge(&student, 18);
	inner.setScro(&student, 100);
	cout << "age=" << student.getAge() << " ,scroe= " << student.getScroe() << endl;
	return 0;
}