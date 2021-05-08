#include <stdio.h>
#include "point_array.h"
//数组的指针
void array()
{
	int array[] = {100, 200, 300};
	//指针p指向数组array的头地址
	int *p = array;
	//修改首地址的值
	*p = 400; //100=>400
	array[2] = 500;
	for (int i = 0; i < 3; i++)
	{
		//p[i] 等价 (*(p+i))
		printf("数组指针,p=%d,index=%d,value=%d,value=%d\n", p + i, i, p[i], *(p + i));
	}
}
//指针优先级 ()>[]>*

//指针数组(元素是指针)ÍÍÍ
void point_array()
{
	printf("\n");
	//array0 type int[3]
	int array0[] = {100, 200, 300}; //空间连续
	int array1[] = {400, 500, 600}; //空间连续
	int array2[] = {700, 800, 900}; //空间连续
	//指针数组,元素是指针
	int *point[3] = {array0, array1, array2};
	printf("指针数组,valus={%d,%d,%d}，size=%d\n", array0, array1, array2, sizeof(point));
	for (int i = 0; i < 3; i++)
	{
		//point 指针数组,指向头地址 -> int *[3]
		//*(point+ i) 等价point[i] 元素,元素是指针  -> int*
		printf("指针数组,p=%d，*p=%d,index=%d,values={%d,%d,%d}\n", point[i], *(point + i), i, /*  *(*(point + i)) */ (*(point + i))[0], point[i][1], *(*(point + i) + 2));
	}
}
//数组指针(行指针)
void array_point()
{
	printf("\n");
	int a[2][3] = {{100, 200, 300}, {400, 500, 600}};
	//point  是数组指针,指向length为3的一维数组
	int(*point)[3] = a; //  将二维数组的首地址赋值给point,a[0]/a[0][0]
	printf("sizeof(a)=%d,sizeof(a[0])=%d\n", sizeof(a), sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		int(*p)[3] = point; // point 的类型 int(*)[]
		//point 数组指针中元素地址 -> int (*)[3]
		//*point 元素  -> int[3]
		int *b = *point;
		printf("数组指针, p = %d,values={%d,%d,%d}\n", point, (*point)[0], (*point)[1], (*point)[2]);
		point++; //+1后p指向了a[1]ÍÍÍÍ
	}
}

int main(void)
{
	array();
	point_array();
	array_point();
}