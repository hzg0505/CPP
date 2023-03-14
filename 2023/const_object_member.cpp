#include<iostream>
using namespace std;

// 常量成员必须在初始化列表中进行初始化
class Object
{
private:
    const int m_num;
    
public:
    enum E_TYPE
    {
        TYPE_A = 100,
        TYPE_B = 200
    };
    // const int m_c=100;  // warning:default member initializer for non-static data member is a C++11 extension [-Wc++11-extensions]gcc
    Object(int num);
    ~Object();
};

// Object::Object()   // error: constructor for 'Object' must explicitly initialize the const member 'm_num'
Object::Object(int num):m_num(num)
{
    cout << "Object::Object ... " << m_num << endl;
}

Object::~Object()
{
    cout << "Object::~Object ... " << m_num << endl;
}


int main(int argc, char const *argv[])
{

    Object obj1(10);
    Object obj2(20);
    cout << obj1.TYPE_A << endl;
    cout << obj1.TYPE_B << endl;
    return 0;
}