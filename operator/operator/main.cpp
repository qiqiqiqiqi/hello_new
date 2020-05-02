#include<iostream>
#include"Student.h"
using namespace std;
int main() {
	Student student_0,student_1;
	student_0.score = 100;
	student_1.score = 100;
	int sum=student_0 + &student_1;
	int sum1 = student_0 + student_1;

	cout <<"指针方式："<< sum << ",对象方式："<< sum1<< endl;
}