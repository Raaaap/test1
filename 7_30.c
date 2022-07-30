#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


//数组指针、指针数组、存放数组指针的数组辨析
// test(int(*arr)[5])//正确的接受方式
// {

// }

// int main()
// {
//     int a = 0;
//     int arr1[3][5] = {0};

//     int (*pa)[5] = &a;//数组指针
//     int* arr[10] ={pa};//指针数组
//     int (*parr[10])[5] = {pa};//存放数组指针的数组

//     test(arr1);


//     return 0;
// }
//秘诀：观察谁（*还是[])与变量结合

//一级二级指针作为形参🉑️接收？

// test1(char* p)//一级指针作为形参可接收变量取地址或者一级指针
// {}

// int main()
// {
//     char a ='w';
//     char* pa = &a;

//     test1(&a);//OK
//     test1(pa);//OK
//     return 0;
// }

// test2(short **p)
// {}
 
// int main()
// {
//     short *p;
//     short **pp;
//     short* arr[5];
//     test2(&p);
//     test2(pp);
//     test2(arr);//传输指针数组首元素让二级指针接收 

//     return 0;
// }

//函数指针
// void Print(char* str)
// {
//     printf("%s\n",str);
// }
// int main()
// {
//     Print("hehe");
//     // void (*p)(char*) = Print;
//     // (*p)("hehe");
//     return 0;
// }
// //函数指针的调用

// int Add(int x,int y)
// {
//     return x+y;
// }
// int Sub(int x,int y)
// {
//     return x-y;
// }
// int Mul(int x,int y)
// {
//     return x*y;
// }
// int Div(int x,int y)
// {
//     return x/y;
// }
// int Xor(int x,int y)
// {
//     return x^y;
// }

// int main()
// {
//     int (*parr[4])(int, int) = {Add,Sub,Mul,Div};
//     int i = 0;
//     for(i=0;i<4;i++)
//     {

//     printf("%d\n",parr[i](3,9)); //函数指针数组运用,实现加减乘除
    

//     }
//     return 0;
// }
// // int main()
// // {
// //     int (*p)(int, int) = Add;
// //     printf("%d\n",p(2,3)); //函数指针运用
// //     return 0;
// // }

// // //运用typedef 来简化函数指针

// // int main()
// // {
// //     void(*signal (int,void(*)(int)))(int);//代码过于复杂冗长，难以理解

// //     typedef void(* pfun_t)(int);
// //     pfun_t signal(int,pfun_t);//将函数指针类型定义为pfun_t,更直观，增强了可读性
// //     return 0;
// // }


//写一个函数指针 pf 可以指向my_strcpy,写一个函数指针数组，可以存放4个my_strcpy.

// char* my_strcpy(char* dest,const char* src)
// {
//     char* ret = dest;
//     assert(dest != NULL);
//     assert(src != NULL);
//     while(*dest++ = *src++)
//     {
//         ;
//     }
//     return ret;
// }

// int main()
// {
// char* (*pf) (char*,const char*) = my_strcpy;
// char* (*pA rr[4]) (char*,const  char*) = {my_strcpy,my_strcpy,my_strcpy,my_strcpy};
// }

//函数指针数组转移表实现计算器

// void meun()
// {
//     printf("***    welcome!    ***\n");
//     printf("*** 1.Add   2.Sub  ***\n");
//     printf("*** 3.Mul   4.Div  ***\n");
//     printf("*** 5.Xor   0.Exit ***\n");
//     printf("**********************\n");

// }
// int main()
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;

//     int (*pfArr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};

    

//     do
//     {
//         meun();
//         printf("请选择:>");
//         scanf("%d",&input);
        
//         if(input>=1 && input<=5)
//         {
//             printf("请输入两个操作数\n");
//             scanf("%d%d",&x,&y);
//             int ret = pfArr[input](x,y);
//             printf("%d\n",ret);
//         }
//         else if(input == 0)
//         {
//             printf("退出\n");
//         }
//         else
//             printf("无效的输入，请重新输入\n");
        
        

        
//     } while (input);
    
//     return 0;
// }


// //指向函数指针数组的指针

// int main()
// {
//    int(*(*p pfArr)[4])(int,int) = &pfArr; //指向函数指针数组的指针，两个参数是整形，返回是整形  
//     return 0;
// }

//利用qsort函数对整形数据进行排序

// int cmp_int(const void* e1,const void* e2)
// {
//     return *(int*)e1 - *(int*)e2;
// }
// void test1()
// {
//     int arr[] = {1,2,3,2,3,57,8,2};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     qsort(arr,sz,sizeof(arr[0]),cmp_int);
//     int i = 0;
//     for(i = 0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

// int main()
// {
//     test1();
//     return 0;
// }

//用qsort函数，比较结构体数据
struct Stu
    {
        char name[30];
        int age;
    };
    
int cmp_stu_by_age(const void* e1,const void* e2)
{
    return ((struct Stu*)e1) -> age - ((struct Stu*)e2) -> age;
}
void test2()
{
    
    struct Stu s[3] =
    {
        {"zhangtianyihaha",19},
        {"zhongnanshan",86},
        {"gumingyilalalalal",48}

    };
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
    // int i = 0;
    // for(i = 0;i<sz;i++)
    // {
    //     printf("%d ",s[i]);
    // }
}

int main()
{
    

    
    test2();
    return 0;
}




