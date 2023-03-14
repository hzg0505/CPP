#include<iostream>
using namespace std;

class Test
{
private:
    int m_num;
public:
    Test(int num);
    Test(const Test& other);
    ~Test();
};

Test::Test(int num):m_num(num)
{
    cout<<"Initial Test..." << m_num << endl; 
}

Test::Test(const Test& other):m_num(other.m_num)
{
    cout<<"Initial copy constructor ..." << m_num << endl; 
}

Test::~Test()
{
    cout<<"Destroy Test..." << m_num << endl; 
}


// 形参是类对象
void func(Test t)
{
    cout << "func..." << endl;
}

// 形参是类对象， 引用传递
void func2(const Test& t)
{
    cout << "func2..." << endl;
}

// 返回类对象， 引用传递
Test func3(const Test& t)
{
    cout << "func3..." << endl;
    return t;                 // 需要创建临时对象
}

// 返回类对象引用， 引用传递
const Test& func4(const Test& t)
{
    cout << "func4..." << endl;
    return t;                 // 需要创建临时对象
}

int main(int argc, char const *argv[])
{
    Test t(10);
    // Test t1 = t;    // 调用拷贝构造函数
    // Test t2(t);
    // func(t);            // 形参是类对象，调用拷贝构造函数
    // func2(t);              // 形参是类对象，引用传递不调用拷贝构造函数


    // func3(t);              // 对象没有接收者，会立刻销毁
    // cout << "....." << endl;
    // Test t3 = func3(t);    // 函数返回对象有接收者，临时对象不会销毁，临时对象被接管
    // cout << "....." << endl;

    // func4(t);                // 返回时不调用拷贝构造函数
    Test t4 = func4(t);         // 会初始化 t4 调用拷贝构造
    const Test& t4 = func4(t);  // 用引用接受，不调用拷贝构造
    cout << "....." << endl;

 
    return 0;
}
