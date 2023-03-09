// 引用
#include <iostream>
using namespace std;

int main(){
    int val=10;
    // int& ref_val;   // 引用 变量 "ref_val" 需要初始值设定项C/C++(252)
    int& ref_val = val;
    ref_val = 200;     // 对引用的修改就是对引用的变量所做出的修改
    cout << val << endl;

    int val2 = 500;
    ref_val = val2;   // 不代表重新初始化引用, 只是赋值操作
    ref_val = 600;
    cout << val2 << endl;
    return 0;
}