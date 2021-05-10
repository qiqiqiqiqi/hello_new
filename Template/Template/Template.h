#pragma once
#include <iostream>
using namespace std;
#if !defined(template_h)
#define template_h
//函数模版
template <typename T>
T templateFunc(T t)
{
	cout << "templateFunc():t=" << t << endl;
	return t;
}
//类模版
template <class T, class M>
class TemplateDemo
{
public:
	TemplateDemo(){};
	T funcTT(T t)
	{
		cout << "TemplateDemo--funcT():a=" << t << endl;
		return t;
	}
	M funcMM(M m)
	{
		cout << "TemplateDemo--funcM():b=" << m << endl;
		return m;
	}

	void funcTM()
	{
		cout << "TemplateDemo--funcTM():" << endl;
	}
	~TemplateDemo(){};
};

#endif // template_h
