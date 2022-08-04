#include<string.h>
#include<stdio.h>

// char arr1[] = {'a','p','e'};
// char arr2[] = "ape";

// int main()
// {
//     printf("%d\n",sizeof(arr2));
//     printf("%d\n",sizeof(arr1));
//     printf("%d\n",strlen(arr2));
//     printf("%d\n",strlen(arr1));// “/0”位置不确定输出随机值
// }

//sizeof和strlen区别

// int main()
// {
//     int arr[4][8] = {{238,23,213,324,2313,43,3},{23,321,432,432,43,4,1,3}};
//     int i =0;
//     for(i=0;i<4;i++)
//     {
//         int j = 0;
//         for(j=0;j<8;j++)
//         {
//         printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
    

    
//     return 0;
// }

//定义二维数组并且遍历打印二维数组元素

void bubble_sort(int arr[],int sz)
{
    int tmp = 0;
    int i = 0;
    for(i =0;i<sz;i++)//冒泡排序轮数，最大次数为元素个数减1
    {
        int flag =1;//默认已经有序
        int j =0;
        for(j=0;j<sz-1-i;j++)//每一轮冒泡排序
        {
            if(arr[j+1]<arr[j])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 0;//不完全有序
            }

            
        }
        if(1 == flag)
        {
            break;//若已经有序，终止后续轮数
        }
    }
}

//冒泡排序升序算法

int main()
{
    int i = 0;
    int arr[8] = {-1,32,45,6,76,32,6,21};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}