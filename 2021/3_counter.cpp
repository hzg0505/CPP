#include <iostream>
using namespace std;

int main()
{
    // int a = 3;
    // int b = 10;
    // cout << b/a << endl;

    //递增递减
    int a=2;
    cout<< "(a++):" << a++ <<endl;
    cout<< "(++a):" << ++a <<endl;
    cout<< "(a--):" << a-- <<endl;
    cout<< "(--a):" << --a <<endl;

    int b=10;
    int c = b++ * 10;
    b=10;
    int d = ++b * 10;
    cout<<c<<d<<endl;

    return 0;
}