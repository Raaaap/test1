#include<stdio.h>
#include<stdlib.h>


// //定义一个柔性数组成员

// struct S 
// {
//     int a;
//     int arr[];//未知大小的柔性数组成员，数组大小可以调整
// };

// int main()
// {
//     struct S* ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//     ps->a = 100;
//     int i = 0;
//     for(i=0;i<10;i++)
//     {
//         ps->arr[i] = i;

//     }
//     struct S* ptr = realloc(ps,24);
//     if(ptr != NULL)
//     {
//         ps = ptr;
//     }
//     for(int i = 0;i<5;i++)
//     {
//         printf("%d\n",ps->arr[i]);
//     }
//     free(ps);
//     ps = NULL;

//     return 0;
// }

//彼可取柔性数组而代之

struct S
{
    int a;
    int* arr;
};

int main()
{
    struct S* ps = (struct S*)malloc(5*sizeof(struct S));
    ps->arr = malloc(5*sizeof(int));
    int i = 0;
    for(i=0;i<5;i++)
    {
        ps->arr[i] = i;

    }
    for(int i =0;i<5;i++)
    {
        printf("%d\n",ps->arr[i]);
    }
    
    int* ptr = realloc(ps->arr,10*sizeof(int));
    if(ptr != NULL)
    {
        ps->arr = ptr;
    }
    for(i=5;i<10;i++)
    {
        ps->arr[i] = i;

    }
    for(int  i =0;i<10;i++)
    {
        printf("%d\n",ps->arr[i]);
    }

    return 0;
}