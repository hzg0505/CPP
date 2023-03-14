// 转换构造函数
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

    Test& operator=(const Test& other);
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

Test& Test::operator=(const Test& other){
    cout << "Test::operator=" << endl;
    if(this == &other)
        return *this;
    m_num = other.m_num;
    return *this;
}

int main(int argc, char const *argv[])
{
    // Test t(10);     // 带一个参数的构造函数
    // t = 20;         // 将整数赋值给类类型：t 为Test类 类型, 20 为整形，一般来说不能直接赋值
    //                 // 实际流程；
    //                 // 1、调用转换构造函数将20整数类型转换为Test类对象（创建临时类对象）
    //                 // 2、将临时类对象赋值给 t
    //                 // 3、释放临时对象
    //                 // 4、释放t对象

    // Test t2(30);

    Test t3 = 50;   // 等价于 Test t3(50);  = 不是运算符，表示初始化
    t3 = 60;        // = 为运算符，赋值

    Test t4(70);
    t3 = t4;
}

