#include<stdio.h>
#include<stdlib.h>

//不能返回栈空间
// char* GetMemory(void)
// {
//     char p[] = "hello world";
//     return 0;
// }

// void test(void)
// {
//     char* str = NULL;
//     str = GetMemory();
//     printf("%s\n",str);

// }
// int main()
// {
//     test();
//     return 0;
// }

//改

char* GetMemory(void)
{
    char static p[] = "hello world";
    return p;
}

void test(void)
{
    char* str = NULL;
    str = GetMemory();
    printf("%s\n",str);

}
int main()
{
    test();
    return 0;
}

//忘记释放动态内存指针


