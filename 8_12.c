#include<stdio.h>

//结构体声明

// struct Stu 
// {
//     char name[20];
//     char tele[20];
//     char sex[10];
//     int age;
// }s4,s5,s6;
// // struct结构体关键字 Stu结构体标签 name,tele,sex,age成员变量

// struct Stu s3;

// int main()
// {
//     struct Stu s1;
//     struct Stu s2;

//     return 0;
// }

// //12为结构体局部变量 3456皆为全局变量

// //结构体的自引用

// struct Node 
// {
//     int data;
//     struct Node* next;
// };

// //结构体重命名

// typedef struct Stu
// {
//     int agr;
//     char name[10];
// }Stu;

//结构体的初始化

struct T
{
    double weight;
    double height;

};

typedef struct S 
{
    int age;
    char name[10];
    char sex[10];
    struct T s1;
}Stu;

int main()
{
    Stu s = {19,"gtl","male",{55.0,175.0}};
    printf("%d %s %s %lf %lf",s.age,s.name,s.sex,s.s1.weight,s.s1.height);
    
    return 0;
}

