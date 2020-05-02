#pragma once
using namespace std;
class Parent {
public:
	 virtual void test();
	 virtual void test1() = 0;//纯虚函数，必须子类实现
	 virtual ~Parent();
};

class Child : public Parent {
public:
	void test();
	void test1();
	virtual ~Child();
};
