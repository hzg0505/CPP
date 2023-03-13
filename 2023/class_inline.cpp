#include<iostream>
using namespace std;

// 两种方法定义内联函数
// 声明
class Test
{
public:
    int ADD(int a, int b);

    int Mul(int a, int b){
        return a*b;
    }
};

inline int Test::ADD(int a, int b){
    return a+b;
}


//
int main(void){
    Test t;
    cout << t.ADD(1, 2) << endl;
    cout << t.Mul(1, 2) << endl;
}