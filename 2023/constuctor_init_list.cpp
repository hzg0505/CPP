// 构造函数初始化列表
#include<iostream>
using namespace std;

class Test
{
private:
    int m_h;
    int m_m;
    int m_s;

public:
    void Display(void);
    Test(int h=0, int m=0, int s=0);
    ~Test();
};

Test::Test(int h, int m, int s)
:m_h(h), m_m(m), m_s(s)   // 构造函数初始化列表
{
    // 不是初始化，只是简单的赋值
    // m_h = h;
    // m_m = m;
    // m_s = s;
}

Test::~Test()
{
}

void Test::Display(void){
    cout << m_h << ":" << m_m << ":" << m_s << endl;
}


int main(int argc, char const *argv[])
{
    /* code */
    Test t(1, 2, 3);
    t.Display();
    return 0;
}
