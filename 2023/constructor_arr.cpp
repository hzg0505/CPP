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
    Test t[2]={10, 20};         
    
    Test* t2 = new Test(2);
    delete t2;

    Test* t3 = new Test[2];
    delete[] t3;
    return 0;
}

