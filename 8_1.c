#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//用指针实现字符串的逆序
// void Reverse_f(char* str)
// {
//     assert(str);
//     int len = strlen(str);
//     char* left = str;
//     char* right = str + len - 1;
//     while(left<right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }


// }

// int main()
// {
//     char arr[256] = {0};
//     printf("%s\n",arr);
//     gets(arr);//unsafe?
    
//     //scanf("%s",&arr);
//     Reverse_f(arr);
//     printf("逆序后的字符串是：%s\n",arr);

//     return 0;
// }

//计算a+aa+aaa+aaaa... n项之和

// int main()
// { 
//     int n = 0;
//     int a = 0;

//     int sum = 0;
//     int ret = 0;
    
//     scanf("%d%d",&a,&n);
//     for(int i=0;i<n;i++)
//     {
//         ret = ret*10 + a;
//         sum += ret;

//     }
//     printf("%d\n",sum);
//     return 0;
// }

//寻找小于100000的自幂数

// int main()
// {
//     printf("1到100000的自幂数有:");
//     //1.判断i的位数n

//     for(int i=1;i<100000;i++)
//     {
//         int n =1;
//         int sum = 0;
//         int tmp = i;
//     while(tmp /= 10) 
//     {
//         n++;
//     }
//     //2.求自幂和sum
//     tmp = i;
//     while(tmp) 
//     {
//         int ret = (int)pow(tmp%10,n);//pow返回的类型是double
//         sum += ret;
//         tmp/=10;
//     }
//     //比较sum和i是否相等
//     if(sum == i)
//     {
//         printf("%d ",i);
//     }
//     }
//     return 0;
// }

//打印形如下图的菱形
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


// int main()
// {
//     //1.初始化打印的行数(上半部分连同中部)
//     int line = 0;
//     scanf("%d",&line);
//     //2.打印上半部分，空格逐渐减少，*增加
//     for(int i = 0;i<line;i++)
//     {
//     for(int j = 0;j<line-1-i;j++)
//     {
//         printf(" ");
//     }
//     for(int j = 0;j<2*i+1;j++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     }
//     //3.打印下半部分，空格逐渐增加，*减少
//     for(int i=0;i<line-1;i++)
//     {
//         for(int j =0;j<i+1;j++)
//         {
//         printf(" ");
//         }
//         for(int j =0;j<2*(line-1-i)-1;j++)
//         {
//         printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//喝汽水问题(每瓶汽水1元，两个空瓶可以换回一瓶汽水，手中有n元，问最多可以喝多少瓶水)

// int main()
// {
//     int money = 0;
//     scanf("%d",&money);
//     int total_count = 0;
//     int empty = 0;
//     //1.买回了多少瓶汽水
//     total_count = money; 
//     //2.换回了多少瓶汽水
//     empty = total_count;
//     while(empty>=2)
//     {
//         total_count+= empty/2;
//         empty = empty/2 + empty%2;
//     }
//     printf("%d\n",total_count);
// }

//写一个奇偶数放置程序，使整形数组中奇数全在左边，偶数全在右边

// void queue(int* p,int sz)
// {
//     int* left = p;
//     int* right = p+sz-1;
//     while(left<right)
//     {
//     while((left<right)&& *left%2 != 0)
//     {
//         left++;
//     }
//      while((left<right)&& *right%2 != 1)
//     {
//         right--;
//     }
//     while(*left%2 == 0 && *right%2 == 1)
//     {
//         int tmp = *right;
//         *right = *left;
//         *left = tmp;
//     }

//     }
    
// }
// void print(int* p,int sz)
// {
    
//     for(int i=0;i<sz;i++)
//     {
//         printf("%d ",*(p+i));
//     }

// }
// int main()
// {
//     int arr[] = {1,2,34,53,2,5,7,3,4};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     queue(arr,sz);
//     print(arr,sz);
//     return 0;
// }

//指针实现字符串n位左旋

//方法一单个字符移动
// void left_move(char* parr,int k,int len)
// {
//     assert( parr !=NULL);
    
//     //1.取出第一个元素存入临时变量
//     for(int i=0;i<k;i++)
//     {
//         char tmp = *parr;
//         //2.将数组中后一位向前挪动
//         for(int j=0;j<len-1;j++)
//         {
//             *(parr+j) = *(parr+j+1);
//         }
        
//         //3.将临时变量赋值给最后一位
//         *(parr+len-1) = tmp;
//     }
    
   
// }

// int main()
// {
//     char arr[] = "little_gtl";
//     int len = strlen(arr);
//     printf("%s\n",arr);

//     left_move(arr,2,len); 

//     printf("%s\n",arr);
// }

//方法二三步逆序后法

void reverse(char* left,char* right)
{
    assert(left != NULL);
    assert(right != NULL);

    while(left<right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void left_move(char* parr,int k,int len)
{
    assert(k<=len);
    assert( parr !=NULL);
    //1.逆序前k位字符
    reverse(parr,parr+k-1);

    //2.逆序后len-k位字符
    reverse(parr+k,parr+len-1);

    //3.整体逆序
    reverse(parr,parr+len-1);
    
    
    
}

// int main()
// {
//     char arr[] = "little_gtl";
//     int len = strlen(arr);
    
//     printf("%s\n",arr);

//     left_move(arr,6,len); 

//     printf("%s\n",arr);
// }

//判断是否由旋转得来
int is_left_move(char* s1,char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if(len1 != len2)
    {
        printf("The two lengths are unequal and ");
    }
    else
    for(int i =0;i<len1;i++)
    {
        left_move(s1,1,len1);
        int ret = strcmp(s1,s2);//库函数，如果两字符串相等返回0
        if(ret == 0)
        return 1;
    }
    return 0;//穷举法没有，则返回0
}

int main()
{
    char arr1[] = "little_gtl";
    char arr2[] = "g_tllittle";
    int ret = is_left_move(arr1,arr2);

    if(1 == ret)
        printf("Yes");
    else
        printf("No");

    return 0;
}


