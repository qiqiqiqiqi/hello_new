#include<stdio.h>
#include "point_array.h"
//����ָ��
void array_point()
{
	int array[] = { 100,200,300 };
	//ָ��pָ������array��ͷ��ַ
	int* p = array;
	//�޸��׵�ַ��ֵ
	*p = 400;//100=>400
	for (int i = 0; i < 3; i++) {
		printf("����ָ��p=%d,index=%d,value=%d\n", p + i, i, *(p+i));
	}
}
//ָ������
void point_array() {
	int array0[] = { 100,200,300 };//�ռ�����
	int array1[] = { 400,500,600 };//�ռ�����
	int array2[] = { 700,800,900 };//�ռ�����
	int* point[] = {array0,array1,array2};
	printf("ָ������,valus={%d,%d,%d}��size=%d\n", array0, array1, array2,sizeof(point));

	for (int i = 0; i < 3; i++) {
		printf("ָ������p=%d��*p=%d,index=%d,valus={%d,%d,%d}\n", (point + i) ,*(point + i),i,(*(point + i))[0], (*(point + i))[1], (*(point + i))[2]);
	
	}
	
}
int main(void) {
	array_point();
	point_array();
}