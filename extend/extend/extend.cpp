#include"extend.h"
#include<iostream>
using namespace std;
void Parent::test() {
	cout << "Parent" << endl;
}
Parent::~Parent() {
	cout << "~parent" << endl;
}
void Child:: test() {
	Parent::test();//�൱��Java��super����
	cout << "Child" << endl;
}
void Child::test1() {

}
Child::~Child() {
	cout << "~child" << endl;
}