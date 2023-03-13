#include<iostream>
using namespace std;

// 声明
class Test
{
public:
    // void Init();
    // void Init(int x);
    // void Init(int x, int y);
    // void Init(int x, int y, int z);
    void Init(int x=0, int y=0, int z=0);

    void Display();
private:
    int m_x;
    int m_y;
    int m_z;
};

// void Test::Init(){
//     m_x = 0;
//     m_y = 0;
//     m_z = 0;
// }
// void Test::Init(int x){
//     m_x = x;
//     m_y = 0;
//     m_z = 0;
// }
// void Test::Init(int x, int y){
//     m_x = x;
//     m_y = y;
//     m_z = 0;
// }
// void Test::Init(int x, int y, int z){
//     m_x = x;
//     m_y = y;
//     m_z = z;
// }

void Test::Init(int x, int y, int z){
    m_x = x;
    m_y = y;
    m_z = z;
}
void Test::Display(){
    cout << "m_x=" << m_x << '\t'
         << "m_y=" << m_y << '\t' 
         << "m_z=" << m_z << '\t'
         << endl;
}


//
int main(void){
    Test t;
    t.Init();
    t.Display();
    t.Init(1, 2);
    t.Display();
}