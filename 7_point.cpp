#include <iostream>
using namespace std;

int main()
{
    cout<<"hello world!"<<endl;
    
    // 1、定义指针
    int a = 10;
    int b = 20;
    // 定义指针变量 ： 数据类型 * 指针变量名
    int * p;
    // 指针指向a
    p = &a;
    cout<<"a的地址为："<< &a <<endl;
    cout<<"指针p为："<< p <<endl;

    // 2、使用指针
    cout << "a为："<<a<<endl;
    cout<<"*p为："<<*p<<endl;

    // 3、指针内存空间
    cout << "sizeof int *:" << sizeof(int *)<<endl;
    cout << "sizeof float*:" << sizeof(float *)<<endl;
    cout << "sizeof double *:" << sizeof(double *)<<endl;
    cout << "sizeof char *:" << sizeof(char *)<<endl;

    // 4、空指针
    // int *q = NULL; 
    // *q = 10; // 此处发生异常 空指针指向0为系统占用空间、无权限
    // 0~255 为系统占用的内存编号，因此不可以访问
    // cout << "*q:"<<*q<<endl;

    // 5、野指针
    // int *r = (int *)0x1100;
    // cout << "*r为："<<*r<<endl; //访问报错

    // 6、常量指针
    const int *q = &a;
    // int const *m = &a;
    // m = &b;
    // 常量指针 特点：指针指向可以修改，但是指针指向的值不能改 可以改q 不能改*q 
    q = &b; 
    cout << *q << endl;

    //7、指针常量
    int * const r = &a;
    // 常量指针 特点：指针指向不可以修改，但是指针指向的值可以改 不可以改q  可以改*q 
    *r = 15;

    

    // 8、全都为常量
    const int* const t = &a;


    return 0;
}