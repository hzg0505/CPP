#include<iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char* m_str;
    char* AllocAndCopy(char* str);
public:
    String &operator=(const String& str);
    void Display();
    String(char* str="");
    String(const String& other);
    ~String();
};

char *String::AllocAndCopy(char *str)
{
    int len = strlen(str) + 1;
    char *temp = new char[len];
    memset(temp, 0, len);
    strcpy(temp, str);
    return temp;
}

String& String::operator=(const String& other)
{
    if(this == &other){  // 自身赋值给自己
        return *this;
    }
    delete[] m_str;  // 释放已有内存
    m_str = AllocAndCopy(other.m_str);
    return *this;
}

void String::Display()
{
    cout<< "str=" << m_str << endl;
}

// String::String(char* str):m_str(str)       
// // warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
// {
//     cout<< "Initializing " << str << endl;
// }

String::String(char* str)
{
    // int len = strlen(str) + 1;
    // m_str = new char[len];
    // memset(m_str, 0, len);
    // strcpy(m_str, str);
    m_str = AllocAndCopy(str);
    cout<< "Initializing " << str << endl;
}

String::String(const String &other)
{
    // int len = strlen(other.m_str) + 1;
    // m_str = new char[len];
    // memset(m_str, 0, len);
    // strcpy(m_str, other.m_str);
    m_str = AllocAndCopy(other.m_str);
    cout<< "Deep copy " << other.m_str << endl;
}

String::~String()
{
    cout << "Destroy " << m_str << endl; 
    delete[] m_str; 
}



int main(int argc, char const *argv[])
{
    String s1("aaa");
    s1.Display();

    String s2 = s1;     // 默认拷贝构造函数，系统提供是浅拷贝，两个对象指向同一块内存，在析构函数时内存被释放两次

    String s3;
    s3 = s2;            // 等号运算符，系统提供的也是浅拷贝，需要重载等号运算符
    s3.Display();


    return 0;
}
