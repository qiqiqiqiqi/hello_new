#include<iostream>
#include"Template.h"
int main() {
	//声明函数
	templateFunc<int>(7);
	//声明类
	TemplateDemo<int, float>* templateDemo = new TemplateDemo<int,float>();
	templateDemo->funcTM();
	templateDemo->funcMM(77.0);
	TemplateDemo<int,float> templateDemo2;
	templateDemo2.funcTM();
}