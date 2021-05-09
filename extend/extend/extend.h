#pragma once
#if !defined(extend_H)
#define extend_H
/* 构造函数不要用virtual修饰,析构函数用virtual修饰*/
class Parent
{
public:
	/*
     * void test_static() 多态时之类调用的是父类方法;
	 * Parent* parent = new Child();这样是静态多态
     */

	/*
	 * virtual void test() 多态时之类调用的是自己的方法
	 * Parent* parent = new Child();这样是静态多态
	 */
	void test_static();
	virtual void test_dynamic();
	virtual void test1() = 0; //纯虚函数，必须子类实现
	virtual ~Parent();
};

class Child : public Parent
{
public:
	void test_static();
	void test_dynamic();
	void test1();
	virtual ~Child();
};

#endif // extend_H
