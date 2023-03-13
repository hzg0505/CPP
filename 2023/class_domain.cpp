// 类作用域
#include<iostream>
using namespace std;

class Test
{
public:
    int num_ = 30;  // warning：default member initializer for non-static data member is a C++11 extension [-Wc++11-extensions] 
};

int num_ = 40;     // 文件作用域

int add(int a, int b);

int add(int a, int b){   // 形参 a,b 为块作用域； a,b 两个标识符的作用域为函数原型作用域。
    return a+b;
}

// 函数作用域  针对 goto 语句
void func(){
    LABEL1: 
        cout << "label1" << endl;
        goto LABEL3;     // LABEL3 是函数作用域， 虽然还未定义，但是可以goto 发现
    LABEL2:
        cout << "label2" << endl;
        goto LABEL1;
    LABEL3:
        cout << "label3" << endl;
        goto LABEL2;
}

int main()
{
    Test t;
    int num_ = 50;       // num_ 作为块作用域
    {
        int num_ = 100;  // num_ 作为块作用域
    }
    cout << t.num_<< endl;
    cout << ::num_<< endl;   // 访问文件作用域
}