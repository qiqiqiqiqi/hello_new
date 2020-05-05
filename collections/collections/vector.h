#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
˳������
*/
void printVector(std::vector<int>& v)
{
	vector<int>::iterator it;
	cout << "v= ";
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << ",";
	}
	cout << "" << endl;
}
void printVectorByIterator(std::reverse_iterator<std::vector<int>::iterator>& rbegin, std::vector<int>& v)
{
	cout << "v(rbegin)= ";
	for (rbegin = v.rbegin(); rbegin != v.rend(); rbegin++) {
		cout << *rbegin << ",";
	}
	cout << "" << endl;
}

/*
��������Ķ�̬���� vector
*/
void vectorDemo() {
	//����������������ԭ����1/2
	vector<int> v;
	for (vector<int>::size_type i = 0; i < 7; i++) {
		v.push_back(i);
	}
	/*
	��
	*/
	cout << "����Ԫ��" << endl;
	//push_back��β��׷������
	v.push_back(17);
	printVector(v);
	//insert�ڵڼ���Ԫ��ǰ����2����6
	v.insert(v.begin(), 2, 6);
	printVector(v);
	//insert�ڵڼ���Ԫ��ǰ���������a����������Ԫ�ص���b������������Ԫ��֮���Ԫ��
	int array[] = { 1,23,4,8 };
	v.insert(v.begin(), (array + 1), (array + 3));
	printVector(v);
	//insert�ڵڼ���Ԫ��ǰ����Ԫ��
	vector<int>::iterator it = v.insert(v.begin(), 1);
	printVector(v);
	/*
	ɾ
	*/
	cout << "ɾ��Ԫ��" << endl;
	//ɾ���ڼ���Ԫ��
	vector<int>::iterator it2 = v.erase(it);
	printVector(v);
	//ɾ��ĳ��[begin,end)֮���Ԫ��
	v.erase(it2, it2 + 2);
	printVector(v);
	//ɾ��β����
	v.pop_back();
	printVector(v);
	/*
	��
	��1��a.assign(b.begin(), b.begin()+3); //bΪ��������b��0~2��Ԫ�ع��ɵ���������a
	��2��a.assign(4,2); //��aֻ��4��Ԫ�أ���ÿ��Ԫ��Ϊ2
	*/
	/*cout << "�޸�Ԫ��" << endl;
	v.assign(1, 9);
	printVector(v);*/
	/*
	��
	reference at(int pos):����posλ��Ԫ�ص�����
	reference front():������Ԫ�ص�����
	reference back():����βԪ�ص�����
	iterator begin():��������ͷָ�룬ָ���һ��Ԫ��
	iterator end():��������βָ�룬ָ���������һ��Ԫ�ص���һ��λ��
	reverse_iterator rbegin():�����������ָ�����һ��Ԫ��
	reverse_iterator rend():�����������ָ���һ��Ԫ��֮ǰ��λ��
	*/
	cout << "��Ԫ��" << endl;
	int element = v.at(0);
	cout << "v.at(0)=" << element << endl;
	int front = v.front();
	int back = v.back();
	cout << "v.front()=" << front << ",v.back()=" << back << endl;

	vector<int>::iterator begin = v.begin();
	vector<int>::iterator end = v.end();
	cout << "v.begin()=" << *begin << ",*(end-3)=" << *(end - 3) << endl;

	vector<int>::reverse_iterator rbegin;
	printVectorByIterator(rbegin, v);

	vector<int>::reverse_iterator rend = v.rend();
	//cout << "v.rbegin()=" << *rbegin<<",*(rend-1)="<< *(rend+1) << endl;
	/*
	����
	*/
	sort(v.begin(), v.end());
	printVector(v);
	/*
	����
	*/
	sort(v.rbegin(), v.rend());
	printVector(v);
	/*
	��ת
	*/
	reverse(v.begin(), v.end());
	printVector(v);

	cout << "v:capacity=" << v.capacity() << ",size=" << v.size() << endl;
}