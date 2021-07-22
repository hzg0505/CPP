#include <iostream>
using namespace std;

// 1、创建学生数据类型：
// 自定义数据类型，一些类型集合组成一个类型
// 在C++中结构体创建是关键词struct不可以省略，在创建对象时可以省略
struct Student{
    string name;
    int age;
    int score;
}s3;

// 2、通过创建的数据类型创建具体学生

int main()
{
    // 第一种方法创建对象
    // struct 
    Student s1;
    // 给s1赋值
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;

    cout<<"姓名："<< s1.name << "  年龄："<< s1.age<<"  分数："<<s1.score<<endl;

    // 第二种创建方法
    struct Student s2 = {"李四",19,120};
    cout<<"姓名："<< s2.name << "  年龄："<< s2.age<<"  分数："<<s2.score<<endl;

    // 第三种创建方法 在定义结构体是顺便创建结构体变量
    s3.name = "王五";
    s3.age = 19;
    s3.score = 150;
    cout<<"姓名："<< s3.name << "  年龄："<< s3.age<<"  分数："<<s3.score<<endl;


    return 0;
}