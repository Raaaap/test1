
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//动态开辟内存常见的六种错误(错误事例请勿模仿)


//1.指针p离开起始位置，使用free释放开辟内存的一部分

// int main()
// {
//     int* p = (int*)malloc(40);
//     if(p ==NULL)
//     {
//         return 0;
//     }
//     for(int i=0;i<10;i++)
//     {
//         *p++ = i;
//     }
//     free(p);
//     p = NULL;

//     return 0;
// }
//solution: 用*(p+i)的方式对内存进行访问，避免使用p++等会改变p位置的 或者使用一个start指针记录一下起始位置，free之前先把至于起始位置

//2.对同一块动态内存的多次释放

// int main()
// {
//     int* p = calloc(10,sizeof(int));
//     if(p ==NULL)
//     {
//         return 0;
//     }
//     for(int i=0;i<10;i++)
//     {
//         *p++ = i;
//     }
//     free(p);
//     free(p);//两次释放了p
//     p = NULL;

//     return 0;
// }

//解决方法 一招鲜 养成free后马上 p = NULL的好习惯，谁开辟谁释放

//3.动态开辟内存但是不回收释放(内存泄漏)

// int main()
// {
//     while(1)
//     {
//         malloc(1);
//     }
    
// }
//solution 一定记得释放

//一个错误的内存开辟案例

// void GetMemory(char* p)
// {
//     p = (char*)malloc(100);
// }
// void test(void)
// {
//     char* str = NULL;
//     GetMemory(str);//问题1:GetMemory动态开辟的内存未释放，造成内存泄漏   
//     strcpy(str,"hello world");//问题2:传值进行内存开辟未将p内地址传给str，p是形参地址丢失。调用空指针str程序奔溃
//     printf(str);
// }

// int main()
// {
//     test();
//     return 0;
// }

//改正1 改为传地址

// void GetMemory(char** p)
// {
//     *p = (char*)malloc(100);
//     // if(p != NULL);
//     // {
//     //     *ptr = p;
//     // }
// }
// void test(void)
// {
//     char* str = NULL;
//     GetMemory(&str);
//     strcpy(str,"hello world");
//     printf(str);

//     free(str);
//     str = NULL;
// }

//改正2 改为返回p地址

// char* GetMemory(char* p)
// {
//     p = (char*)malloc(100);
//     return p;
//     // if(p != NULL);
//     // {
//     //     *ptr = p;
//     // }
// }
// void test(void)
// {
//     char* str = NULL;
//     str = GetMemory(str);
//     strcpy(str,"hello world");
//     printf(str);

//     free(str);
//     str = NULL;
// }




// int main()
// {
//     test();
//     return 0;
// }

//返回栈空间地址问题

char* GetMemory(void)
{
    char p[] = "hello world";
    return 0;
}

void test(void)
{
    char* str = NULL;
    str = GetMemory();
    printf(str);

}
int main()
{
    test();
    return 0;
}




