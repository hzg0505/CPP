#include<iostream>
using namespace std;

int& add(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}

// 不能返回局部变量的引用
int main(){
    int s = add(3, 4);     // s 是一个变量 能够被赋值，有自己的地址空间
    int& ref_s = add(4, 5);   //  ref_s 是引用，返回值的别名，没有自己的地址空间，返回的局部变量在函数返回后被释放掉
                              //  ref_s 是无效的引用，返回值是不确定的
    cout << s << endl;    
    cout << ref_s << endl;
    // warning: reference to stack memory associated with local variable 'sum' returned [-Wreturn-stack-address]
    return 0;
}