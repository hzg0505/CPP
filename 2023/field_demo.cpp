#include<iostream>
using namespace std;

int val =  100;
int main()
{
    int val = 50;
    cout << val << endl;
    cout << ::val << endl;
    return 0;
}