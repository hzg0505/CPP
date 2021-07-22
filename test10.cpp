// 通讯录管理系统
// 1、添加联系人
// 2、显示联系人
// 3、删除联系人
// 4、查找联系人
// 5、修改联系人
// 6、清空联系人
// 0、推出通讯录
#include <iostream>
#define MAX_NUM 1000
using namespace std;
#include <string>
struct Person{
    string name; //姓名
    int sex; // 
    int age;
    string tel; //电话
    string address; // 通讯地址
};

// 菜单功能
void showMenu()
{
    cout << "------------------------------------" <<endl;
    cout << "1、添加联系人" <<endl;
    cout << "2、显示联系人" <<endl;
    cout << "3、删除联系人" <<endl;
    cout << "4、查找联系人" <<endl;
    cout << "5、修改联系人" <<endl;
    cout << "6、清空联系人" <<endl;
    cout << "0、退出通讯录" <<endl;
    cout << "------------------------------------" <<endl;
    return ;
}

// 添加联系人
void add_person(struct Person perArr[],int num)
{
    // 直接在数组后添加
    if(num == MAX_NUM) {cout<< "通讯录已满!" << endl;}
    else{
        cout<<"输入姓名："<<endl;
        cin >> perArr[num].name;

        cout<<"输入性别："<<endl;
        cout<<"1->男"<<endl;
        cout<<"2->女"<<endl;
        while(true){
            cin >> perArr[num].sex;
            if(perArr[num].sex==1 ||perArr[num].sex==2)
                break;
            else{
                cout << "输入有误，重新输入！"<<endl;
            }
        }

        cout<<"输入年龄："<<endl;
        while(true){
            cin >> perArr[num].age;
            if(perArr[num].age>0)
                break;
            else{
                cout << "年龄应为正整数！"<<endl;
            }
        }
        
        cout<<"输入电话："<<endl;
        cin >> perArr[num].tel;
        cout<<"输入住址："<<endl;
        cin >> perArr[num].address;
        cout << "成功添加:"<<endl;
        string sex = perArr[num].sex==1?"男":"女";
        cout<<"     姓名："<< perArr[num].name
            <<"     性别："<< sex
            <<"     年龄："<< perArr[num].age
            <<"     电话："<< perArr[num].tel
            <<"     住址："<< perArr[num].address<<endl;
        // system("pause");
        // system("cls");
    }
    showMenu();
    return;
}

// 显示联系人
void display(struct Person perArr[], int num)
{
    for(int i=0;i<num;i++)
    {
        string sex = perArr[i].sex==1?"男":"女";
        cout<<"\t姓名："<< perArr[i].name 
            <<"\t性别："<< sex  
            <<"\t年龄："<< perArr[i].age  
            <<"\t电话："<< perArr[i].tel  
            <<"\t住址："<< perArr[i].address<<endl;
    }
    // system("pause");
    showMenu();
    return;
}

// 删除联系人  通过姓名删除
bool delete_per(struct Person perArr[], int num)
{
    if(num==0){cout<<"无联系人可删除！"<<endl;return false;}
    string name;
    cout<<"输入要删除联系人姓名!"<<endl;
    cin >> name;
    for(int i=0;i<num;i++){
        if(name==perArr[i].name)
        {
            for(int j=i;j<num-1;j++)
            {
                perArr[j] = perArr[j+1];
            }
            cout<<"成功删除"<<name<<endl;
            return true;
        }
    }
    cout << "没有此联系人" <<endl;
    return false;
}

// 查找联系人
bool search_per(struct Person perArr[], int num)
{
    if(num==0){cout<<"无联系人可查找！"<<endl;return false;}
    string name;
    cout<<"输入要查找联系人姓名!"<<endl;
    cin >> name;
    for(int i=0;i<num;i++){
        if(name==perArr[i].name)
        {
            string sex = perArr[i].sex==1?"男":"女";
            cout<<"\t姓名："<< perArr[i].name 
                <<"\t性别："<< sex  
                <<"\t年龄："<< perArr[i].age  
                <<"\t电话："<< perArr[i].tel  
                <<"\t住址："<< perArr[i].address<<endl;
            return true;
        }
    }
    cout << "未查到"<<name<<endl;
    return false;
}

// 修改联系人
bool modify_per(struct Person perArr[], int num)
{
    if(num==0){cout<<"无联系人可修改！"<<endl;return false;}
    string name;
    cout<<"输入要修改联系人姓名!"<<endl;
    cin >> name;
    for(int i=0;i<num;i++){
        if(name==perArr[i].name)
        {
            string sex = perArr[i].sex==1?"男":"女";
            cout<<"\t姓名："<< perArr[i].name 
                <<"\t性别："<< sex  
                <<"\t年龄："<< perArr[i].age  
                <<"\t电话："<< perArr[i].tel  
                <<"\t住址："<< perArr[i].address<<endl;

            cout<<"输入姓名："<<endl;
            cin >> perArr[i].name;
            cout<<"输入性别："<<endl;
            cout<<"1->男"<<endl;
            cout<<"2->女"<<endl;
            while(true){
                cin >> perArr[i].sex;
                if(perArr[i].sex==1 ||perArr[i].sex==2)
                    break;
                else{
                    cout << "输入有误，重新输入！"<<endl;
                }
            }

            cout<<"输入年龄："<<endl;
            while(true){
                cin >> perArr[i].age;
                if(perArr[i].age>0)
                    break;
                else{
                    cout << "年龄应为正整数！"<<endl;
                }
            }
        
            cout<<"输入电话："<<endl;
            cin >> perArr[i].tel;
            cout<<"输入住址："<<endl;
            cin >> perArr[i].address;
            cout << "成功修改为:"<<endl;

            cout<<"     姓名："<< perArr[i].name
                <<"     性别："<< sex
                <<"     年龄："<< perArr[i].age
                <<"     电话："<< perArr[i].tel
                <<"     住址："<< perArr[i].address<<endl;

            return true;
        }
    }
    cout << "未查到"<<name<<endl;
    return false;
}


int main()
{
    // 1、初始化一个通讯录 联系人数组 最多支持1000个联系人
    struct Person perArray[MAX_NUM];
    int numbers = 0; // 现有联系人数量
    int command;
    showMenu();
    while(true)
    {
        // showMenu();
        cin>>command;

        switch(command){
            case 1: 
                add_person(perArray,numbers);
                numbers+=1;
                break;
            case 2: 
                display(perArray,numbers);
                break;
            case 3: 
                if(delete_per(perArray,numbers)) 
                numbers--;//删除
                break;
            case 4:  // 查找
                search_per(perArray,numbers);
                break;
            case 5:  // 修改
                modify_per(perArray,numbers);
                break;
            case 6:  // 清空
                numbers = 0;
                cout << "联系人已清空"<<endl;
                break;
            case 0: // 退出
                 {   cout << "欢迎下次使用！"<< endl;
                    // system("pause");
                    return 0;
                    break;
                }
            default: {break;}
        }
    }
    return 0;

} 

