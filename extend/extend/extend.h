#pragma once
using namespace std;
class Parent {
public:
	 virtual void test();
	 virtual void test1() = 0;//���麯������������ʵ��
	 virtual ~Parent();
};

class Child : public Parent {
public:
	void test();
	void test1();
	virtual ~Child();
};
