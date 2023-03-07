// 常量
#include <iostream>
using namespace std;
#define CAT(x, y) x##y
#define STR(a) #a

int main(void){
    int xy=100;
    cout << CAT(x,y) << endl;
    cout << STR(abcd) << endl;
}

// MFC
// #
// ##

// 泛型编程也是替换 很灵活