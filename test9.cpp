// 案例二：设计一个英雄结构体
// 英雄：姓名，年龄，性别；
// 结构体数组：五名英雄
// 冒泡排序：年龄升序排列
// 打印排序结果

#include <iostream>
#include <string>
using namespace std;

struct hero{
    string name;
    int age;
    string sex;
};

void boubbleSort(struct hero h[],int len)
{
    struct hero temp;
    int flag = 1;
    for(int i=0;flag;i++){
        flag = 0;
        for(int j=0;j<len-1-i;j++)
        {
            if(h[j].age>h[j+1].age)
            {
                flag = 1;
                temp = h[j];
                h[j]=h[j+1];
                h[j+1]=temp;
            }
        }
    }
}


void print_hero(struct hero h[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"     英雄名字：" << h[i].name 
            <<"     英雄年龄：" << h[i].age
            <<"     英雄性别：" << h[i].sex<<endl;
    }
}

int main()
{
    struct hero h[5]={
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",18,"女"}
    };
    int len = sizeof(h) / sizeof(h[0]);
    boubbleSort(h,len);
    print_hero(h,len);

    return 0;
}