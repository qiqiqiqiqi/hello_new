#include<iostream>
#include"extend.cpp"
int main() {
	Parent* parent = new Child();
	parent->test_static();//调用的是父类的方法,静态多态
	parent->test_dynamic();//调用的是子类的方法,动态多态
	Child child;
	child.test_static();
	
}