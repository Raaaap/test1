#include<stdio.h>

//比较两数二进制位不同位个数

// int get_diff_bit(int m ,int n)
// {
//     int count = 0;
//     int tmp = m^n;
//     while(tmp)
//     {
//         tmp = tmp&(tmp-1);
//         count++;

//     }
//     return count;
// }
// int main()
// {
//     int m = 0;
//     int n = 0;
//     scanf("%d %d",&m,&n);

//     int count = get_diff_bit(m,n);
    
//     printf("count = %d\n",count);

//     return 0;
// }


//获取一个数二进制奇数位偶数位并打印
// void print(int m)
// {
//     int i =0;
//     printf("奇数位：");
//     for(i=30;i>=0;i-=2)
//     {
//         printf("%d ",(m>>i)&1);
//     }
//     printf("\n");
//     printf("偶数位：");
//     for(i=31;i>=1;i-=2)
//     {
//         printf("%d ",(m>>i)&1);
//     }
//     printf("\n");
// }
// int main()
// {
//     int m = 0;
//     scanf("%d",&m);
//     print(m);
//     return 0;
// }

// //利用指针打印数组
// void print(int *p,int sz)
// {
//     int i = 0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",*(p+i));
//     }
// }
// int main()
// {
//     int arr[] = {1,2,32,43,5};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     print(arr,sz);
//     return 0;
// }

//答应NN乘法口诀表

// void print_table(int n)
// {
//     int  i = 0;
    
//     for(i=1;i<=n;i++)
//     {
//         int j = 0;
//         for(j=1;j<=i;j++)
//         {
//             printf("%d*%d = %-5d ",i,j,i*j);
//         }
//         printf("\n");
//     }
// }
// int main()
// {

//     int n = 0;
//     scanf("%d",&n);
//     print_table(n);
//     return 0;
// }

// //递归法逆序字符串
// int my_strlen(char* p)
// {
//     int count = 0;
//     while('\0' != *p)
//     {
//         count++;
//         p++;
//     }
//     return count;
// }

// void reverse_string(char *arr)
// {
//     char tmp = arr[0];
//     int len = my_strlen(arr);
//     arr[0] = arr[len - 1];
//     arr[len  -1] = '\0';
//     if(my_strlen(arr+1) >=2 )
//     reverse_string(arr + 1);
//     arr[len  - 1] = tmp;

// }

// int main()
// {
//     char arr[] = {'1','2'};
//     reverse_string(arr);
//     printf("%s\n",arr);
//     return 0;
// }

//计算一个十进制数每位之和
// int DecimalSum(int n)
// {

//     if(n > 9)
//     return DecimalSum(n/10) + n%10;
//     else 
//     return n; 
// }
// int main()
// {
//     int num = 0;
//     scanf("%d",&num);
//     int ret = DecimalSum(num);
//     printf("%d\n",ret);
//     return 0;
// }

//计算n的k次方(n、k皆为整形)

double Pow(int n,int k)
{   if(k < 0)
        return (1.0/(Pow(n,-k)));
    else if(0 == k)
        return 1;
    else
        return n*Pow(n,k-1);
}
int main()
{
    int n = 0;
    int k = 0;
    scanf("%d%d",&n,&k);
    double ret = Pow(n,k);
    printf("%lf\n",ret);

}