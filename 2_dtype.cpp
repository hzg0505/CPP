#include <iostream>
using namespace std;

#define Pi 3.14
int main()
{
    //变量
    //constant
    const float pi = 3.14;
    // pi = 3
    cout<<pi<<endl;
    float p = 3.1415926f;
    // cout << sizeof(p) <<endl;
    // cout<<sizeof(float)<<sizeof(double)<<endl;
    cout << p << endl;

    // 小数默认双精度
    // 实数默认保存6位有效数字
    // 科学计数法
    cout<<3e2<<endl;
    cout<<3e-2<<endl;

    //字符型
    char ch = 'a';

    // 字符串
    // c style
    char str[] = "hello world";
    cout<<str<<endl;
    // c++ style 部分环境需要包含头文件 #include <string>
    string str1 = "hello world";
    cout << str1 << endl;

    // bool 本质1代表真 0代表假
    bool flag = true;
    cout<<flag<<endl;

    //数据输入
    cout<<"给变量字符型变量ch赋值:"<<endl;
    cin >> ch;
    cout<<ch<<endl;

}