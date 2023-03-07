#include<iostream>
using namespace std;

int main()
{
    int *p = new int;         // 分配一个整数空间 4 字节
    cout << *p << endl;
    int *p1 = new int(33);    // 分配一个整数空间 初始值用圆括号
    cout << *p1 << endl;
    int *q = new int[10];     // 分配10个整数空间 10 字节   数组没办法初始化，需逐个初始化
    cout << *q << endl;

    // 销毁
    delete p;
    delete p1;
    delete[] q;
    return 0;
}