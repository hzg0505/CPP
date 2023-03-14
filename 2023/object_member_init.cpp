#include<iostream>
using namespace std;

class Object
{
private:
    int m_num;
public:
    Object(int num);
    ~Object();
};

Object::Object(int num):m_num(num)
{
    cout << "Object::Object ... " << m_num << endl;
}

Object::~Object()
{
    cout << "Object::~Object ... " << m_num << endl;
}


class Container
{
private:
    Object m_obj;
    Object m_obj1;
public:
    Container(int obj=0, int obj1=0);
    ~Container();
};

// 构造时初始化顺序与初始化列表中的顺序无关，与定义时的顺序有关
Container::Container(int obj, int obj1):m_obj(obj), m_obj1(obj1)
{
    cout << "Container::Container ... " << endl;
}

Container::~Container()
{
    cout << "Container::~Container ... " << endl;
}


int main(int argc, char const *argv[])
{
    Container c(10, 20);
    return 0;
}

// Object::Object ... 
// Container::Container ... 
// Container::~Container ... 
// Object::~Object ... 

// object 是 container 中的一个对象成员
// 初始化 container 时
    // 初始化 对象成员


// Object::Object ... 10
// Object::Object ... 20
// Container::Container ... 
// Container::~Container ... 
// Object::~Object ... 20
// Object::~Object ... 10