#include<stdio.h>
#include "point_array.h"
//数组指针
void array_point()
{
	int array[] = { 100,200,300 };
	//指针p指向数组array的头地址
	int* p = array;
	//修改首地址的值
	*p = 400;//100=>400
	for (int i = 0; i < 3; i++) {
		printf("数组指针p=%d,index=%d,value=%d\n", p + i, i, *(p+i));
	}
}
//指针数组
void point_array() {
	int array0[] = { 100,200,300 };//空间连续
	int array1[] = { 400,500,600 };//空间连续
	int array2[] = { 700,800,900 };//空间连续
	int* point[] = {array0,array1,array2};
	printf("指针数组,valus={%d,%d,%d}，size=%d\n", array0, array1, array2,sizeof(point));

	for (int i = 0; i < 3; i++) {
		printf("指针数组p=%d，*p=%d,index=%d,valus={%d,%d,%d}\n", (point + i) ,*(point + i),i,(*(point + i))[0], (*(point + i))[1], (*(point + i))[2]);
	
	}
	
}
int main(void) {
	array_point();
	point_array();
}