#include "custom_namespace.cpp"
#include <iostream>

using namespace std;
int main()
{
    first_space::func();
    second_space::func();

    int a = 7;
    int *p = &a;
    int &b = a; //引用存在空引用,引用必须连接到一块合法的内存,需要在创建的时候初始化,不能指向另一个对象了
    int c = 8;
    cout << "a=" << a << ",*p=" << *p << ",b=" << b << endl;//a=7,*p=7,b=7
    *p=9;
    cout << "a=" << a << ",*p=" << *p << ",b=" << b << endl;//a=9,*p=9,b=9
    p=&c;//指针可以在任何时候指向另一个地址
    cout << "a=" << a << ",*p=" << *p << ",b=" << b << endl;//a=9,*p=8,b=9
    a=1;//a改了,b也跟着改了
    cout << "a=" << a << ",*p=" << *p << ",b=" << b << endl;//a=1,*p=8,b=1
}