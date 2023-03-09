#include<iostream>
using namespace std;

// 值传递
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
}
// 地址传递
void swap_p(int* p, int* q){
    int c = *p;
    *p = *q;
    *q = c;
}

// 引用传递
void swap_r(int& x, int& y){   // 引用在调用时初始化 int& x=a, int& y=b, 
    int c = x;
    x = y;
    y = c;
}

int main(){
    int a=1;
    int b=2;
    swap(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    // swap_p(&a, &b);
    // cout << "a:" << a << endl;
    // cout << "b:" << b << endl;

    swap_r(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    return 0;
}