// 默认形参
#include<iostream>
using namespace std;

int fun(int a, int b=5){
    return a+b;
}


// int fun(int a, int b=5);

int main(){
    cout<< fun(3) << endl;
    return 0;
}