// 结构体案例
// 案例描述：
// 学校正在做毕设项目，每名老师带5个学生，总共三个老师
// 老师：姓名，学生数组
// 学生：姓名，考试分数，
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
    string name; // 
    int age;
    struct Student stu[5];
};


int main()
{
    struct Professor p[3];
    
    p[0] = {"老张",30,{{"张一",19,100},{"张二",20,60},{"张三",21,80},{"张四",22,80},{"张五",23,80}}};
    p[1] = {"老陈",40,{{"李一",29,100},{"李二",30,60},{"李三",31,80},{"李四",32,80},{"李五",33,80}}};
    p[2] = {"老李",50,{{"王一",39,100},{"王二",40,60},{"王三",41,80},{"王四",42,80},{"王五",43,80}}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout <<"    老师姓名:"<<p[i].name
                 <<"    学生姓名:" <<p[i].stu[j].name 
                 <<"    学生年龄:"<<p[i].stu[j].age
                 <<"    学生分数:"<<p[i].stu[j].score<< endl;
        }
    }
    return 0;
}
