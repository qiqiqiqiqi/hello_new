#include<iostream>
#include"Student.h"
using namespace std;
int main() {
	Student student_0,student_1;
	student_0.score = 100;
	student_1.score = 100;
	int sum=student_0 + &student_1;
	int sum1 = student_0 + student_1;

	cout <<"ָ�뷽ʽ��"<< sum << ",����ʽ��"<< sum1<< endl;
}