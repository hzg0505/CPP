// 访问权限，私有成员数据
#include<iostream>
using namespace std;

// 声明
class Clock
{
public:
    void Display();
    void Init(int h, int m, int s);
    void Update();
    int GetHour();
    int GetMinute();
    int GetSecond();

    void SetHour(int h);
    void SetMintue(int m);
    void SetSecond(int s);
private:
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
void Clock::Update(){
    m_second ++;
    if(m_second==60){
        m_minute++;
        m_second=0;
    }
    if(m_minute==60){
        m_hour++;
        m_minute = 0;
    }
    if(m_hour==24){
        m_hour = 0;
    }
}

int Clock::GetHour(){
    return m_hour;
}
int Clock::GetMinute(){
    return m_minute;
}
int Clock::GetSecond(){
    return m_second;
}

void Clock::SetHour(int h){
    if(h>=24 || h<0){
        cout<< "hour should be a int number range[0, 24)!" << endl;
    }else{
        m_hour = h;
    }
}
void Clock::SetMintue(int m){
    if(m>=60 || m<0){
        cout<< "minute should be a int number range[0, 60)!" << endl;
    }else{
        m_minute = m;
    }
}
void Clock::SetSecond(int s){
    if(s>=60 || s<0){
        cout<< "second should be a int number range[0, 60)!" << endl;
    }else{
        m_second = s;
    }
}


//
int main(void){
    Clock my_clock;
    my_clock.Init(2, 10, 12);
    my_clock.Display();
    // my_clock.m_second +=1 ;  // 私有成员无法访问  // error:成员 "Clock::m_second" (已声明 所在行数:15) 不可访问C/C++(265)
    for(int i=0; i<=100; i++){
        my_clock.Update();    // 通过公有的接口访问 public 成员函数
        my_clock.Display();
    }
    my_clock.SetHour(16);
    my_clock.SetMintue(40);
    my_clock.SetSecond(10);

    my_clock.Display();
    cout<< my_clock.GetHour() << ":" << my_clock.GetMinute() << ":" << my_clock.GetSecond() <<endl;
    return 0;
}