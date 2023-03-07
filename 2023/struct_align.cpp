// 常量
#include <iostream>
#include <stdio.h>
using namespace std;

#pragma pack(4)   // 更改结构体对齐的对齐整数
struct Test
{
    char a;
    double b;
    char c;
};
#pragma pack()
// 第一个成员与结构体变量的偏移量为0
// 其他成员对齐到某个数的整数倍
// 编译器预设对齐的整数与该成员大小的较小值

int main(void){
    Test test;
    printf("p=%p\n", &test);
    printf("p=%p\n", &test.a);
    printf("p=%p\n", &test.b);
    cout << &test << endl;
    cout << &test.a << endl;
    cout << sizeof(struct Test) << endl;
    cout << sizeof(Test) << endl; // c++ 中结构体也是一个类

    return 0;
}

// MFC
// #
// ##

// 泛型编程也是替换 很灵活