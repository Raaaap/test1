#include<stdio.h>
#include<assert.h>


// //结构体的类型定义，变量创建初始化
// typedef struct Stu
// {
//     char name[10];
//     short age;
//     char sex[10];
//     char id[20];
// }Stu;

// void print1(Stu tmp)
// {
//     printf("%s\n",tmp.name);
//     printf("%d\n",tmp.age);
//     printf("%s\n",tmp.sex);
//     printf("%s\n",tmp.id);
// }

// //首选print2传址引用，因为这样可以减小传送结构体时参数压栈的系统开销（传参所用的时间，耗费的空间），提高运行效率
// void print2(Stu* tmp)
// {
//     printf("%s\n",tmp->name);
//     printf("%d\n",tmp->age);
//     printf("%s\n",tmp->sex);
//     printf("%s\n",tmp->id);
// }

// int main()
// {
//     Stu s1 = {"李五",20,"保密","19340627"};
//     print1(s1);//传值引用
//     print2(&s1);//传址引用
//     return 0;
// }

//模拟实现strcpy函数
// char* my_strcpy(char* dest,const char* src)
// {
//     char* ret = dest;
//     assert(dest != NULL);
//     assert(src != NULL);

//    while(*dest++ = *src++)
//    {
//         ;
//    }
//    return ret;
// }

// int main()
// {
//     char arr1[] = "#########";
//     char arr2[] = "bytedance";

    
//     printf("arr1 =%s\narr2 = %s\n",my_strcpy(arr1,arr2),arr2);
//     return 0;
// }
    

//模拟实现strlen函数
int my_strlen(const char* str)
{
    int count = 0;
    assert(str != NULL);//保证指针有效性
    while('\0' != *str++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[] = "Hello World";
    int ret = my_strlen(arr);
    printf("%d\n",ret);
    return 0;
}