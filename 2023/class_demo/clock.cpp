#include "clock.h"
#include<iostream>
using namespace std;

void Clock::Display(){
    cout << m_hour << ":" << m_minute << ":" << m_second << endl;
}

void Clock::Init(int h, int m, int s){
    m_hour = h;
    m_minute = m;
    m_second = s;
}