#include<iostream>
using namespace std;

void test(int a, int b){
    cout<<"int"<< endl;
    
}

void test(int a, double b){
    cout<<"int + double" << endl;
}

void test(int a);  // c++ 会进行名字改编

// extern "C" void test(double a){   // 加上 extern “C” 表示不进行名字改编
//     cout<<"xxxxx"<<endl;
// }
// extern "C" void test1(int a){
//     cout<<"yyyyy"<<endl;
// }

//通常这需要放到头文件中，只进行函数声明，可以同时被c和c++使用
// c 语言不用加 extern “C”
// c++需要加 extern ”C“
#ifdef __cplusplus
extern "C"{
#endif
    void test(double a){   // 加上 extern “C” 表示不进行名字改编
        cout<<"xxxxx"<<endl;
    }
    extern "C" void test1(int a){
        cout<<"yyyyy"<<endl;
    }
#ifdef __cplusplus
}
#endif

int main()
{
    test(3, 4);
    test(3, 4.0);
    test(1.1);
}