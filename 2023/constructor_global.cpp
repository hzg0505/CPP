#include <iostream>
using namespace std;

class Test
{
private:
    int m_num;
public:
    Test(int num);
    ~Test();
};
Test::Test(int num){
    m_num=num;
    cout << "Initial Test num:" << m_num << endl; 
}
Test::~Test()
{
    cout<< "Destroy Test num:" << m_num << endl;
}


// 全局构造函数先于 main 函数
Test t4(10);


int main(int argc, char const *argv[])
{
    cout << "Entering main ..." << endl;

    cout << "Exiting main ..." << endl;
    return 0;
}

// Initial Test num:10
// Entering main ...
// Exiting main ...
// Destroy Test num:10