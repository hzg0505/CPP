// 常量
#include <iostream>
using namespace std;

// const 数据类型 常量名=常量值；
// 数据类型 const 常量名=常量值；
int main(void){
    // 1. 常量定义必须初始化
    // const int a;      // error 常量 变量 "a" 需要初始值设定项C/C++(257)
    const int a=1;
    // a = 2;            // error 表达式必须是可修改的左值C/C++(137) 不可重新被赋值
    cout << a << endl;

    // 2. int const * p     常量指针，指针指向内容为常量
    int b = 2;
    const int *p;   // const 在 * 左边 *p为常量，指向的内容不可变, 指针可指向其他内容
    cout << *p << endl;   // 指针指向内容随机指向
    p = &a;
    // *p = b;      // error 不能更改指向内容
    cout << *p << endl;
    p = &b;         // 可更改指向
    cout << *p << endl;

    // 3. int * const q     指针常量 指针为常量，内容可变
    int c = 3;
    int * const q=&c;  // q 为常量 得初始化   常量指针，得赋值
    cout << *q << endl;
    // q = &b;            // error  q指针为常量 不能重新赋值
    c = 4;
    cout << *q << endl;   // 指向内容可变化
    // const int *q;   // const 在 * 左边 *p为常量，指向的内容不可变, 指针可指向其他内容
    // q = &c;
    // c = 4;
    // cout << *p << endl;

}