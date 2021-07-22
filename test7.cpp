// 利用数组、函数、指针封装冒泡排序
#include <iostream>
using namespace std;
void bubbleSort(int *arr,int len)
{
    int flag=1; // 如果没有产生交换则说明已排好序
    int i=0; // 每次比较次数减少
    while(flag)
    {
        flag = 0;
        for(int j=0;j<len-1-i;j++) 
        {
            if(arr[j]>arr[j+1])//从小到大 升序
            {
                flag = 1;
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
        for(int k=0;k<len;k++)
            {
                cout<<arr[k]<<' ';
            }
            cout<<endl;
        i++;
    }
}

int main()
{
    int arr[10] = {1,8,5,9,6,4,3,2,7,10};
    bubbleSort(arr,10);
    cout << "-------------------------------"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<' ';
    }
}