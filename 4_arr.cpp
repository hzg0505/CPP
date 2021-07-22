#include <iostream>
using namespace std;
int main()
{
    // 数组定义三种方式
    // 1
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    // 2、如果在初始化数据时没写全，会默认为0
    int arr2[5] = {10,20,30,40,50};
    // 3、
    int arr3[] = {10,20,30,40,50,60,70,80,90};

    // 查看首地址
    cout<<"第一个元素地址"<<arr3<<endl;
    cout<<"第二个元素地址"<<&arr3[1]<<endl;
    cout<<sizeof(arr3)<<endl; // 9*sizeof(int) = 36
}