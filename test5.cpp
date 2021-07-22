// 冒泡排序
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,32,44,1,55,3,7,9,44,55,5,4,33,535,53,66,32,11,12,231};
    int len = sizeof(arr)/4;
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
    // for(int i=0;i<len;i++)
    // {
    //     cout<<arr[i];
    // }
    return 0;
}