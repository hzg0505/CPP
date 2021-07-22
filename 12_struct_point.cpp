#include <iostream>
using namespace std;
#include <string>

// 1、创建结构体
struct Student{
    string name;
    int age;
    int score;
};

int main()
{

    // 2、创建结构体变量
    Student s1={"张三", 18, 100,};
    // 3、通过指针指向结构体变量

    Student *p = &s1;

    cout<<"  姓名："<< p->name 
    <<"  年龄："<< p->age
    <<"  分数："<< p->score << endl;
    return 0;
}
