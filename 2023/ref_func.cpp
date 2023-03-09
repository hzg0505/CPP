#include<iostream>
using namespace std;

// 引用作为函数返回值
int a[] = {0, 1, 2, 3, 4};

// 引用在函数返回时被调用
int& index(int i){
    return a[i];
}


int main(){
    index(3) = 5;
    cout << a[3] << endl;
    return 0;
}

