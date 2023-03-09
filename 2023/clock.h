#ifndef _CLOCK_H_
#define _CLOCK_H_

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

#endif