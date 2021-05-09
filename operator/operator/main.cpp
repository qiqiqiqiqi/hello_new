#include <iostream>
#include "Student.cpp"
using namespace std;
int main()
{
	Student student_0, student_1;
	student_0.score = 100;
	student_1.score = 100;
	int sum = student_0 + &student_1;
	int sum1 = student_0 + student_1;

	cout << "sum=" << sum << ",sum1=" << sum1 << endl;
}