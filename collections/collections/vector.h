#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
顺序容器
*/
void printVector(std::vector<int> &v)
{
	vector<int>::iterator it;
	cout << "v= ";
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << ",";
	}
	cout << "" << endl;
}
void printVectorByIterator(std::reverse_iterator<std::vector<int>::iterator> &rbegin, std::vector<int> &v)
{
	cout << "v(rbegin)= ";
	for (rbegin = v.rbegin(); rbegin != v.rend(); rbegin++)
	{
		cout << *rbegin << ",";
	}
	cout << "" << endl;
}  

/*
基于数组的动态容器 vector
*/
void vectorDemo()
{
	//超过容器容量扩容原来的1/2
	vector<int> v;
	for (vector<int>::size_type i = 0; i < 7; i++)
	{
		v.push_back(i);
	}
	/*
	增
	*/
	cout << "增加元素" << endl;
	//push_back在尾端追加数据
	v.push_back(17);
	printVector(v);
	//insert在第几个元素前插入2两个6
	v.insert(v.begin(), 2, 6);
	printVector(v);
	//insert在第几个元素前插入数组第a（包含）个元素到第b（不包含）个元素之间的元素
	int array[] = {1, 23, 4, 8};
	v.insert(v.begin(), (array + 1), (array + 3));
	printVector(v);
	//insert在第几个元素前插入元素
	vector<int>::iterator it = v.insert(v.begin(), 1);
	printVector(v);
	/*
	删
	*/
	cout << "删除元素" << endl;
	//删除第几个元素
	vector<int>::iterator it2 = v.erase(it);
	printVector(v);
	//删除某段[begin,end)之间的元素
	v.erase(it2, it2 + 2);
	printVector(v);
	//删除尾数据
	v.pop_back();
	printVector(v);
	/*
	改
	（1）a.assign(b.begin(), b.begin()+3); //b为向量，将b的0~2个元素构成的向量赋给a
	（2）a.assign(4,2); //是a只含4个元素，且每个元素为2
	*/
	/*cout << "修改元素" << endl;
	v.assign(1, 9);
	printVector(v);*/
	/*
	查
	reference at(int pos):返回pos位置元素的引用
	reference front():返回首元素的引用
	reference back():返回尾元素的引用
	iterator begin():返回向量头指针，指向第一个元素
	iterator end():返回向量尾指针，指向向量最后一个元素的下一个位置
	reverse_iterator rbegin():反向迭代器，指向最后一个元素
	reverse_iterator rend():反向迭代器，指向第一个元素之前的位置
	*/
	cout << "查元素" << endl;
	int element = v.at(0);
	cout << "v.at(0)=" << element << endl;
	int front = v.front();
	int back = v.back();
	cout << "v.front()=" << front << ",v.back()=" << back << endl;

	vector<int>::iterator begin = v.begin();
	vector<int>::iterator end = v.end();
	cout << "v.begin()=" << *begin << ",*(end-3)=" << *(end - 1) << endl;

	vector<int>::reverse_iterator rbegin;
	printVectorByIterator(rbegin, v);

	vector<int>::reverse_iterator rend = v.rend();
	//cout << "v.rbegin()=" << *rbegin<<",*(rend-1)="<< *(rend+1) << endl;
	/*
	排序
	*/
	sort(v.begin(), v.end());
	printVector(v);
	/*
	倒序
	*/
	sort(v.rbegin(), v.rend());
	printVector(v);
	/*
	反转
	*/
	reverse(v.begin(), v.end());
	printVector(v);

	cout << "v:capacity=" << v.capacity() << ",size=" << v.size() << endl;
}