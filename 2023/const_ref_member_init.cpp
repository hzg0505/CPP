#include<iostream>
using namespace std;

// 常量成员必须在初始化列表中进行初始化
class Object
{
private:
    const int m_num;
    int& m_ref;
public:
    Object(int num, int& ref);
    ~Object();
};

// Object::Object()   // error: constructor for 'Object' must explicitly initialize the const member 'm_num'
Object::Object(int num, int& ref):m_num(num), m_ref(ref)
{
    cout << "Object::Object ... " << m_num << endl;
}

Object::~Object()
{
    cout << "Object::~Object ... " << m_num << endl;
}


int main(int argc, char const *argv[])
{
    int val = 20;
    Object c(10, val);

    return 0;
}