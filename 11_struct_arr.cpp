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

    // 2、创建结构体数组
    struct Student stuArray[3]=
    {
        {"张三", 18, 100},
        {"李四", 28, 99},
        {"王五", 38, 66}
    };

    // 3、给结构体数组中的元素赋值
    stuArray[2].name = "赵六";
    stuArray[2].age = 80;
    stuArray[2].score = 66;

// 4、遍历结构体数组
    for(int i=0;i<3;i++)
    {
        cout<<"  姓名："<< stuArray[i].name 
            <<"  年龄："<< stuArray[i].age
            <<"  分数："<< stuArray[i].score << endl;
    }
    

    return 0;
}
