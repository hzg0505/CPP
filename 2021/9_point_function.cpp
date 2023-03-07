// 指针和函数
#include <iostream>
using namespace std;

void swap(int *a,int *b){
    cout << "函数内交换前："<<endl;
    cout << "a:" <<*a <<endl;
    cout << "b:" <<*b <<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "函数内交换后："<<endl;
    cout << "a:" <<*a <<endl;
    cout << "b:" <<*b <<endl;
}

int main()
{
    int a=10;
    int b=20;
    cout << "函数内交换前："<<endl;
    cout << "a:" <<a <<endl;
    cout << "b:" <<b <<endl;
    swap(&a,&b);
    cout << "函数外交换后："<<endl;
    cout << "a:" <<a <<endl;
    cout << "b:" <<b <<endl;
    
    // system("pause");
    return 0;
}