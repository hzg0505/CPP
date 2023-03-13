#include <iostream>
using namespace std;

void Func(void){
    class ClassLocal
    {
    private:
        // static int a=10;  // error：此类中不允许静态数据成员声明C/C++(817)
        const int a = 20;   // warning: default member initializer for non-static data member is a C++11 extension [-Wc++11-extensions]
    public:
        void func()
        {
            cout << "Local class func ..." << endl;
            cout << a << endl;
        }
    };
    
    // void ClassLocal::func()  // error:不允许使用限定名C/C++(283)
    // {
    //     cout << "Local class func ..." << endl;  
    // }

    ClassLocal o;
    o.func();
    
}


int main()
{
    // ClassLocal lc;  // error: 局部类外部不可见
    Func();
}