#include<iostream>
using namespace std;

// 结构体   和类定义方法相同
struct Test
{
    int m_x;
    int m_y;
    int m_z;
    void Display();
};

void Test::Display(){
    cout << "m_x=" << m_x << '\t'
         << "m_y=" << m_y << '\t' 
         << "m_z=" << m_z << '\t'
         << endl;
}


class Test2
{
    int m_x;
    int m_y;
    int m_z;
    void Display();
};

void Test2::Display(){
    cout << "m_x=" << m_x << '\t'
         << "m_y=" << m_y << '\t' 
         << "m_z=" << m_z << '\t'
         << endl;
}

int main(){

    // 结构体 默认公有 public
    Test t;
    t.m_x = 1;
    t.m_y = 2;
    t.m_z = 3;
    t.Display();
    // 类也可用此方法进行初始化，但是前提是公有成员数据
    Test t3 = {10, 20, 30};
    t3.Display();
    // 类 默认私有 private
    Test2 t2;
    // t2.m_x = 1;    // error: 函数 "Test2::Display" (已声明 所在行数:29) 不可访问C/C++(265)


}