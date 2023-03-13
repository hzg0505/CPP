#include <iostream>
using namespace std;

class Outer
{
    class Inter   // 只供内部调用，如何定权限为 public，外部也可访问
    {
    private:
        /* data */
    public:
        void Func();
        // {
        //     cout<< "Inter::Func....." << endl;
        // }
    };
    
private:
    Inter m_obj;
public:
    void func(){
        cout << "Outer::Func...." << endl;
        m_obj.Func();
    }
    Outer(/* args */);
    ~Outer();
};

int main(){ 
    Outer oc;
    oc.func();
}

Outer::Outer(/* args */)
{
}
Outer::~Outer()
{
}

void Outer::Inter::Func(void){
    cout<< "Inter::Func....." << endl;
}