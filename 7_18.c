#include<stdio.h>

int count_bit_one(int n)//最优算法，有几位算几次
{
    int count = 0;
    while(n)
    {
       n = n&(n-1);
       count++;
    }
    return count;
}

//计算一个二进制数1的个数
// int count_bit_one(unsigned int n)//保证都是无符号数
// {
//     int count = 0;
//     while(n)
//     {
//         if(n%2 == 1)
//         {
//             count++;
//         }
//         n = n/2;
//     }
//     return count;
// }
//算法一R进制就模R判断是否等于1然后除R

// int count_bit_one(int n)
// {
//     int count = 0;
//     int i = 0;
//     for(i = 0;i<32;i++)
//     {
//         if(((n>>i)&1) == 1)
//         {
//             count++;
//         }
        
//     }
//     return count;
// }
int main()
{
    int a = 0;
    scanf("%d",&a);//13 00001101
    int count = count_bit_one(a);
    printf("%d\n",count);

    return 0;
}