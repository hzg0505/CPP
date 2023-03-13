#ifndef _B_H_
#define _B_H_

// #include "A.h"   // A 中引用了 B， B又引用A 存在相互包含问题

// 解决方法   前向声明
class A;

class B
{
private:
    /* data */
public:
    B(/* args */);
    ~B();

    // A m_a;  // B 类中定义 A 对象   error：unknown type name 'A'gcc
    A* m_a;  // 前向声明的类不能实例化对象，不知道对象是什么样的，无法分配内存，但是可以定义指针或引用。
}; 




#endif // _B_H_