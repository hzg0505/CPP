#include <iostream>
using namespace std;

class Test
{
private:
    int m_num;
public:
    void Display();

    Test();     // 不写构造函数会自动生成默认构造函数。
    Test(int num);

    ~Test();
};

void Test::Display()
{
    cout<<"Display func: num=" << m_num << endl;
}

Test::Test()
{
    m_num = 0;
    cout << "Initial Test Default!" << endl; 
}
Test::Test(int num){
    m_num=num;
    cout << "Initial Test num:" << m_num << endl; 
}

Test::~Test()
{
    cout<< "Destroy Test num:" << m_num << endl;
}


int main(int argc, char const *argv[])
{
    Test t;         // 自动调用默认构造函数
    t.Display();    
    Test t2(10);    // 构造函数重载
    t2.Display();
    Test* t3 = new Test(20);   // new operator    分配内存，构造函数  在堆空间
    t3->Display();

    delete t3;  // 释放对空间内存
    return 0;
}

// Initial Test Default!        // 栈
// Display func: num=0
// Initial Test num:10          // 栈
// Display func: num=10
// Initial Test num:20          // 堆
// Display func: num=20
// Destroy Test num:20          // 堆
// Destroy Test num:10          // 栈
// Destroy Test num:0           // 栈