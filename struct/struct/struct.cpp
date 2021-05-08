#include<stdio.h>
#include<string.h>
#include "struct.h"
//结构体和共用体的区别在于：结构体的各个成员会占用不同的内存，互相之间没有影响；
//而共用体的所有成员占用同一段内存，修改一个成员会影响其余所有成员。
//
//结构体占用的内存大于等于所有成员占用的内存的总和（成员之间可能会存在缝隙），
//共用体占用的内存等于最长的成员占用的内存。共用体使用了内存覆盖技术，
//同一时刻只能保存一个成员的值，如果对新的成员赋值，就会把原来成员的值覆盖掉。

//结构体
struct Person
{
	short height;//4,内存对齐，即使height的类型是short16位，但是还是占用的4个字节32位
	int age;//4
	char name[21];//20
};
void struct_study()
{
	char name[] = "zhoubaoqi";
	struct Person person;
	person.age = 18;
	printf("结构体()：person size = %d\n", sizeof(person));
}
//共用体
union Man {//共用体的size是24，为什么不是20？？？？
	double money;
	char name[17];
	int a;
	int b;
};
void union_study(){
	union Man man;
	man.money = 100000.0;
	man.a = 7;
	man.b = 77;
	printf("共用体():man.a=%d,man.b=%d,sizeof(name)=%d,size=%d", man.a, man.b,sizeof(man.name), sizeof(man));
}
int main() {
	struct_study();
	union_study();
}


