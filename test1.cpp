// 水仙花数
#include <iostream>
using namespace std;
int main()
{
    int num=999;
    for(int i=100;i<=num;i++)
    {
        int ge = i%10;
        int shi = i/10%10;
        int bai = i/100;
        if(ge*ge*ge + shi*shi*shi+bai*bai*bai == i)
        {
            cout<<i<<endl;
        }

    }
    return 0;
}