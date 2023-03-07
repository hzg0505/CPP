#include <iostream>
#include "my_f.h"
using namespace std;


int main()
{
    int a=10;
    int b=20;
    cout << "函数外交换前："<<endl;
    cout << "a:" <<a <<endl;
    cout << "b:" <<b <<endl;
    swap(a,b);
    cout << "函数外交换后："<<endl;
    cout << "a:" <<a <<endl;
    cout << "b:" <<b <<endl;

    return 0;
}