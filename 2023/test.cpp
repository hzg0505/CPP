#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sum0=0;
    int sum1=0;
    int k = 4;
    int num = 0;
    while(k){
        num++;
        int temp=num;
        while(temp){
            if(temp%10==1){sum0+=1;}
            if(temp%10==3){sum1+=3;}
            temp/=10;
        }
        if(sum0==sum1){
            cout << num << endl;
            k--;
        }
        if(num==10000){
            cout << "num=" << num << endl;
        }
    }
    return 0;
}
