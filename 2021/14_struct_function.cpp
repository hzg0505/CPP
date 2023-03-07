#include <iostream>
using namespace std;
#include <string>

// 结构体做函数参数
// 将学生传入到一个参数中，打印学生身上所有的信息
struct Student{
    string name;
    int age;
    int score;
}s3;

// 值传递
void print_student1(struct Student s)
{
     s.age = 100;
     cout<<"姓名："<< s.name << "  年龄："<< s.age<<"  分数："<<s.score<<endl;
     return ;
}
// 地址传递
void print_student2(struct Student *p)
{
     p->age=90;
     cout<<"姓名："<< p->name << "  年龄："<<  p->age<<"  分数："<<p->score<<endl;
     return ;
}

int main()
{
    // 第一种方法创建对象
    // struct 
    Student s1;
    // 给s1赋值
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;

    // 值传递
    print_student1(s1);
    cout<<"姓名："<< s1.name << "  年龄："<< s1.age<<"  分数："<<s1.score<<endl;
    // 地址传年底
    print_student2(&s1);
    cout<<"姓名："<< s1.name << "  年龄："<< s1.age<<"  分数："<<s1.score<<endl;

    // // 第二种创建方法
    // struct Student s2 = {"李四",19,120};
    // cout<<"姓名："<< s2.name << "  年龄："<< s2.age<<"  分数："<<s2.score<<endl;

    // // 第三种创建方法 在定义结构体是顺便创建结构体变量
    // s3.name = "王五";
    // s3.age = 19;
    // s3.score = 150;
    // cout<<"姓名："<< s3.name << "  年龄："<< s3.age<<"  分数："<<s3.score<<endl;


    return 0;
}