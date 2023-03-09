#include <iostream>
using namespace std;
int main(){
    const int val = 100;
    // int& ref2_val = val;  // error 将 "int &" 类型的引用绑定到 "const int" 类型的初始值设定项时，限定符被丢弃C/C++(433)
    const int& ref_val = val;

    int val2 = 200;
    const int& ref_val2 = val2;   
    // ref_val2 = 100;       // error 表达式必须是可修改的左值C/C++(137)
    val2 = 100;
    cout << val2 << endl;

    double val3 = 3.14;
    const int& ref_val3 = val3;   // 会产生一个临时变量
                                    // int temp=val3;
                                    // const int& ref_val3 = temp;
    cout << val3 << endl;
    cout << ref_val3 << endl;

    // 非 const 引用无法指向不同类型的对象
    // int& ref2_val3 = val3;    // error 无法用 "double" 类型的值初始化 "int &" 类型的引用(非常量限定)C/C++(434)


    return 0;
}