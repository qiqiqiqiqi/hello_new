#include <set>
#include <iostream>
using namespace std;

/*
顺序容器
*/

void printSet(std::set<int> &v)
{
    set<int>::iterator it;
    cout << "v= ";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
    cout << "" << endl;
}

int main()
{
    set<int> set;
    for (int i = 0; i < 7; i++)
    {
        set.insert(i);
    }
    printSet(set);
    set.insert(1);//不可添加重复的元素
    printSet(set);
}