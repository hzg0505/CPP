#include<iostream>
using namespace std;

// 声明
class Clock
{
public:
    void Display();
    void Init(int h, int m, int s);
public:
    int m_hour;
    int m_minute;
    int m_second;
};


void Clock::Display(){
    cout << m_hour << ":" << m_minute << ":" << m_second << endl;
}

void Clock::Init(int h, int m, int s){
    m_hour = h;
    m_minute = m;
    m_second = s;
}

//
int main(void){
    Clock my_clock;
    my_clock.Init(2, 10, 12);
    my_clock.Display();
    my_clock.m_second +=1 ;
    my_clock.Display();
    return 0;
}