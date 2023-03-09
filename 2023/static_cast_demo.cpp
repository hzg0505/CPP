#include<iostream>
using namespace std;

int main(){
    // 隐式转换
    int a = 3.14;   
    // warning : implicit conversion from 'double' to 'int' changes value from 3.14 to 3 [-Wliteral-conversion]gcc
    cout<< a << endl;

    // 显式转换
    int b = static_cast<int>(3.14);  // 无警告
    cout << b << endl;

    // void * p 转换为其他类型
    void *p = &b;
    // cout << *p << endl;   // error: 表达式必须是指向完整对象类型的指针C/C++(852)
    int *p2 = static_cast<int*>(p);
    cout << *p2 << endl;
    return 0;
}