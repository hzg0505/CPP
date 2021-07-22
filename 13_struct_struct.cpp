#include <iostream>
using namespace std;
#include <string>

// 结构体嵌套
struct Student{
    string name;
    int age;
    int score;
};

struct Professor{
    int id; //教师编号
    string name; // 
    int age;
    struct Student stu[3];
};


int main()
{
    Professor p1 = {111,"张老师",50,{{"张三",19,100},{"李四",20,60},{"王五",21,80}}};
    cout << p1.stu[1].name << endl;


    // cout<<"  姓名："<< p->name 
    // <<"  年龄："<< p->age
    // <<"  分数："<< p->score << endl;
    return 0;
}
