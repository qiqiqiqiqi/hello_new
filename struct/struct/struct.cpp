#include<stdio.h>
#include<string.h>
#include "struct.h"
//�ṹ��͹�������������ڣ��ṹ��ĸ�����Ա��ռ�ò�ͬ���ڴ棬����֮��û��Ӱ�죻
//������������г�Առ��ͬһ���ڴ棬�޸�һ����Ա��Ӱ���������г�Ա��
//
//�ṹ��ռ�õ��ڴ���ڵ������г�Առ�õ��ڴ���ܺͣ���Ա֮����ܻ���ڷ�϶����
//������ռ�õ��ڴ������ĳ�Առ�õ��ڴ档������ʹ�����ڴ渲�Ǽ�����
//ͬһʱ��ֻ�ܱ���һ����Ա��ֵ��������µĳ�Ա��ֵ���ͻ��ԭ����Ա��ֵ���ǵ���

//�ṹ��
struct Person
{
	short height;//4,�ڴ���룬��ʹheight��������short16λ�����ǻ���ռ�õ�4���ֽ�32λ
	int age;//4
	char name[21];//20
};
void struct_study()
{
	char name[] = "zhoubaoqi";
	struct Person person;
	person.age = 18;
	printf("�ṹ��()��person size = %d\n", sizeof(person));
}
//������
union Man {//�������size��24��Ϊʲô����20��������
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
	printf("������():man.a=%d,man.b=%d,sizeof(name)=%d,size=%d", man.a, man.b,sizeof(man.name), sizeof(man));
}
int main() {
	struct_study();
	union_study();
}


