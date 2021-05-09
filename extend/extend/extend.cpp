#include "extend.h"
#include <iostream>
using namespace std;
void Parent::test_static()
{
	cout << "Parent--test_static()" << endl;
}
void Parent::test_dynamic()
{
	cout << "Parent--test_dymamic()" << endl;
}
Parent::~Parent()
{
	cout << "~parent" << endl;
}
void Child::test_static()
{
	Parent::test_static(); //相当于Java中super（）
	cout << "Child--test_static()" << endl;
}
void Child::test_dynamic()
{
	cout << "Child--test_dynamic()" << endl;
}
void Child::test1()
{
}
Child::~Child()
{
	cout << "~child" << endl;
}