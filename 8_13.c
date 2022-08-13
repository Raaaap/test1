#include<stdio.h>
#include<stddef.h>

// //结构体的内存对齐

// #pragma pack(1)//设置默认内存大小



// struct S1
// {
//     int age;
//     char name;
//     char sex;
// };

// struct S2
// {
//     char name;
//     int age;
//     char sex;
// };

// #pragma pack()
// //取消设置，恢复默认内存大小

// struct S3
// {
//     int age;
//     char name;
//     char sex;
// };

// struct S4
// {
//     char name;
//     int age;
//     char sex;
// };


// int main()
// {
//     struct S1 s1;
//     struct S2 s2;
//     struct S3 s3;
//     struct S4 s4;

//     printf("%d\n",sizeof(s1));
//     printf("%d\n",sizeof(s2));
//     printf("%d\n",sizeof(s3));
//     printf("%d\n",sizeof(s4));


//     return 0;
// }

//s1 s2 大小竟然不一样？怎么回事？
//这就涉及到计算结构体内存的一个重要问题：结构体的内存对齐
//rule 1：第一个成员变量从偏移变量为0的地址处存放。
//rule 2: 其他变量要对齐到对齐数整数倍的地址处
//ps：VS编译器中对齐数等于一个默认对齐数（8）与该成员大小较小值，也有些编译器（如gcc）不存在默认对齐数，仅根据变量大小确定对齐数。
//rule 3:结构体总大小是最大对齐数整数倍
//rule 4：嵌套结构体成员对齐数为自己最大对齐数。

//为什么要设计内存对齐？
//reason 1平台（移植原因）：增强代码可移植性，适用于只能访问特定地址的硬件平台，规避硬件异常
//reason 2性能原因:数据结构应该尽可能在自然边界上对齐，对于未对齐的数据，读取需要两次访问 对齐的数据一次就够了，可以大大提高性能

//总的来说 结构体的内存对齐是一种用 空间 换 时间的策略

//尽量节约空间的原则：将占用空间小的成员放在一起，减少内存“空穴”的产生

//结构体传参

// struct Stu 
// {
//     int age;
//     char name;
//     double weight;
// };

// void Init(struct Stu* tmp)
// {
//     tmp->age = 20;
//     tmp->name = 'p';
//     tmp->weight = 58.0;
// }

// void Print1(struct Stu tmp)//传值调用
// {
//     printf("%d %c %lf\n",tmp.age,tmp.name,tmp.weight);

// }

// void Print2(const struct Stu* tmp)//传值调用，为了保护数据别忘const修饰
// {
//     printf("%d %c %lf",tmp->age,tmp->name,tmp->weight);


// }


// //推荐结构体传值调用 因为传给函数参数时会压栈，有时间空间的开销。
// //而当结构体比较大时 传一整个结构体对象会导致系统开销过大，从而性能下降

// //所以结论是采用用传址调用，const修饰保安全




// int main()
// {
//     struct Stu s1 = {0};
    
//     Init(&s1);//对结构体初始化

//     Print1(s1);
//     Print2(&s1);

//     return 0;
// }


//用结构体实现位段

// struct S
// {
//     int a : 2;
//     int b : 21;
//     int c : 1;
//     int d: 9;

// };

// int main()
// {
//     struct S s;
//     printf("%d \n",sizeof(s));

//     return 0;

// }

//枚举的使用

// enum Sex
// {
//     Male = 3,
//     Female,
//     Secret 

// };

// int main()
// {
//     enum Sex me = Female;
//     me = 59;
//     printf("%d\n",me);//可以但没意义

// }

//枚举要多用 和#define 命名常量相比，枚举优势显著
//1它易于阅读维护 2有自己类型，多一层检查更加严谨 3并且不会污染代码（命名冲突，作用域不出大括号） 4还便于调试


//不用联合体的查看方式

int check_sys1()
{
    int a =1;
    return *(char*)&a;
}

//运用联合体查看当前机器大端还是小端存储 妙啊！
int check_sys2()
{
    union Un
    {
        char c;
        int i;
    }u;

    u.i = 1;
    return u.c;
}

int main()
{
    int ret = check_sys2();

    if(1 == ret)
    {
        printf("小端");

    }
    else
    {
        printf("大端");
    }
    return 0;
}


