#include<iostream>
#include"Template.h"
int main() {
	TemplateDemo<int, float>* templateDemo = new TemplateDemo<int,float>();
	templateDemo->funcTM();
	templateDemo->funcMM(77.0);
}