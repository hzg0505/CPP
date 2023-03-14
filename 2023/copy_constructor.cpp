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




int main(int argc, char const *argv[])
{
    Test t(10);
    // Test t1 = t;    // 调用拷贝构造函数
    Test t2(t);
    return 0;
}
