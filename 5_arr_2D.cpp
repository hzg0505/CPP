// 二维数组
#include <iostream>
using namespace std;
int main()
{
    //四种定义
    // 1
    int arr[2][3];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6;

    // 2
    int arr2[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };

    // 3  不写默认为0
    int arr3[2][3]={1,2,3,4,5,6};

    // 4  不写默认为0
    int arr4[][3] = {1,2,3,4,5,6};

    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<arr4[i][j]<<' ';
    //     }
    //     cout << endl;
    // }

    cout << "二维数组占用内存空间为:" << sizeof(arr2)<<endl;
    cout << "二维数组第一行占用内存为:"<< sizeof(arr2[0])<<endl;
    cout << "二维数组第一个元素占用内存为:" << sizeof(arr2[0][0]) <<endl;

    cout << "二维数组行数为:" << sizeof(arr2)/sizeof(arr2[0])<<endl;
    cout << "二维数组列数为:" << sizeof(arr2[0])/sizeof(arr2[0][0])<<endl;

    cout << "二维数组首地址为:" << arr <<endl;

    return 0;
}