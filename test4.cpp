// 数组元素逆置
#include<iostream>
using namespace std;
int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int len = 9;
    for(int i=0;i<len/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-i-1] = temp;
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}