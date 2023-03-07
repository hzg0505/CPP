#include <iostream>
#include "my_f.h"
using namespace std;

void swap(int num1, int num2)
{
    cout << "函数内交换前："<<endl;
    cout << "num1:" <<num1 <<endl;
    cout << "num2:" <<num2 <<endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "函数内交换后："<<endl;
    cout << "num1:" <<num1 <<endl;
    cout << "num2:" <<num2 <<endl;
}

// int max(int a,int b)
// {
//     return a>b ? a:b;
// }
