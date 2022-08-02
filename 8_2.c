#include<stdio.h>
#include<string.h>
#include<assert.h>

//运用追加和找字串的方法判断是否由旋转得来

// int is_left_move(char* p1,char* p2)
// {
//     int len1 = strlen(p1);
//     int len2 = strlen(p2);

//     //1.判断两字符串长度是否相等
//     if(len1 != len2)
//     return 0;

//     //2.给第字符串1后追加一个自己的拷贝
//     strncat(p1, p1,len1);
//     //3.再追加后的字符串1中看看能不能找到字符串2
//     char* ret = strstr(p1,p2);
//     if(ret == NULL)
//     {
//     return 0;
//     }
//     else
//     {
//     return 1;
//     }
// }


// int main()
// {
//     char arr1[30] = "abcdef";
//     char arr2[30] = "abcdef";
//     int ret = is_left_move(arr1,arr2);

//     if(1 == ret)
//     printf("Yes\n");
//     else
//     printf("No\n");
    
//     return 0;
// }

//查找杨氏矩阵(每行每列从左到右都是递增)中是否存在某个数。
// int locationx(x)
// {
//     return x;
// }
// int locationy(y)
// {
//     return y;
// }

// int FindYoungMatrix(int arr[3][3],int k,int* row,int* col)
// {
//     int x = 0;
//     int y = *row-1;
//     while(x<= *row-1 & &y>=0)
//     {
//     if(arr[x][y] < k)
//     {
//         x++;
//     }
//     else if(arr[x][y] > k)
//     {
//         y--;
//     }
//     else
//     {
//         *row = x;
//         *col = y;
//         return 1;
//     }
    
    
//     }
//     return 0;
    
    

// }
// int main()
// {

//     int arr[3][3] = {{1,2,3},{2,3,6},{39,45,46}};
//     int k = 45;
//     int x1 = 3;
//     int y1 = 3;

//     int ret = FindYoungMatrix(arr,k,&x1,&y1);
   

    
//     if(1 == ret)
//     printf("%d找到了,下标是[%d][%d]",k,x1,y1);
//     else
//     printf("没找到");
//     return 0;
// }

//字符串初始化的两种方法
// int main()
// {
//     char arr[] = {'d','d'};
//     printf("%s\n",arr); 
//     printf("%lu\n",strlen(arr));

//     return 0;
// }

//strcat，strcpy，strlen模拟实现

// int my_strlen(char* pa)
// {
//     if('\0' != *pa++)
//     return 1+my_strlen(pa);
//     else
//     return 0;
// }

// void my_strcpy(char* dest,const char* src)
// {
//     assert(dest&&src);
//     while(*dest++ = *src++)
//     {
//         ;
//     }

// }

// char* my_strcat(char* dest,const char* src)
// {
//     char* ret = dest;
    
//     while(*dest != '\0')
//     {
//         dest++;
//     }
//     while(*dest++ = *src++)
//     {
//         ;
//     }
//     return ret;
// }

// int main()
// {
//     char arr1[30] = "abcdef";
//     char arr2[] = "bit";
//     char* p = my_strcat(arr1,arr2);

//     printf("%s\n",arr1);
//     printf("%s\n",arr2);

//     // my_strcpy(arr1,arr2);

//     // printf("%s\n",arr1);
//     // printf("%s\n",arr2);


//     //int len = my_strlen(arr1);
//     //printf("%d\n",len);

    
//     return 0;
// }

int my_strcmp(char*str1,char* str2)
{
    while(*str1 == *str2)
    {
        if('\0' == *str1)
        {
            return 0;//相等
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

char* my_strncpy(char* dest,char* src,int count)
{
    char* start = dest;
    while(*dest++ = *src++)
    {
        count--;
    }
    if(count)
    while(--count)
    *dest++ = '\0'; 
}
int main()
{
    char arr1[30] = "little";
    char* arr2 = "gtl";
    strlen(arr1);
    my_strncpy(arr1,arr2,3);
    int ret = my_strcmp(arr1,arr2);
    printf("%d\n",ret);
}