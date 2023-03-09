#include<iostream>
using namespace std;

void func(int& val){
    cout << "val:" << val << endl;
}

int main(){
    const int val = 10;    // 常量
    int n = val;      // 只是赋值操作
    n = 100;
    cout  << "val:" << val << endl;
    cout << "n:" << n << endl;

    // int n2 = const_cast<int>(val);   // error: const_cast 中的类型必须是指针、引用或指向对象类型成员的指针C/C++(717)

    // 1. 指针
    // int *p = &val;   // error: "const int *" 类型的值不能用于初始化 "int *" 类型的实体C/C++(144)
    int *p = const_cast<int*>(&val);   // 指针指向 val的地址
    *p = 100;   // 修改地址中的内容，val值不变

    // 地址相同
    cout << "&val:" << &val << endl;
    cout << "p:" << p << endl;

    // 常量仍然保持不变，*p 确可以被改变（可以认为是临时对象，临时空间）
    cout  << "val:" << val << endl;
    cout << "*p:" << *p << endl;
    cout << "p:" <<  p << endl;

    // 2. 引用
    const int val2 = 20;
    // int& ref_val2 = val2;  // error: 将 "int &" 类型的引用绑定到 "const int" 类型的初始值设定项时，限定符被丢弃C/C++(433)
    int& ref_val2 = const_cast<int&>(val2);
    ref_val2 = 200;
    cout << "ref_val2:" << ref_val2 << endl;   // 临时空间
    cout << "val2:" << val2 << endl;     // val2 不被修改

    // 3. 传递 const 对象
    // func(val2);    // error: 将 "int &" 类型的引用绑定到 "const int" 类型的初始值设定项时，限定符被丢弃C/C++(433)
    func(ref_val2);   // 传入 非 const 的引用，此时引用的临时空间被修改



    // int const *p = &val;   // 常量指针，指针指向内容不可变
    // // *p = 20;     // error read-only variable is not assignable
    // int* q = const_cast<int*>(p);
    // *q  = 20;
    // cout << "q-> "<< *q << endl;
    // cout << "p-> "<< *p << endl;
    // cout << "val=" << val << endl;

}