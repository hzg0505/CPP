#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {0,1,2,3,4,5};
    int *p = arr;
    cout << "利用指针访问arr第一个元素：" << *p<<endl;
    p++; // 让指针后移一个指针长度
    cout << "利用指针访问arr第二个元素："<< *p <<endl;
    cout << "利用指针遍历数组：" << endl;
    int * p2 = arr;
    for(int i=0;i<6;i++)
    {
        cout<<*p2++<<endl;
    }

    return 0;
}