#include <iostream>
#include <map>
#include <string>
using namespace std;
void printMap(std::map<string, string> &m)
{
    cout << "m={";
    for (map<string, string>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "{key=" << it->first << ",value=" << it->second << "},";
    }
    cout << "}";
}
int main()
{
    map<string,string> map;
    map["zhou"]="zhouzhou";
    map["liu"]="liuliu";
    map["liu"]="liuliuliu";
    printMap(map);

}