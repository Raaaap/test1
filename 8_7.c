#include<stdio.h>
#include<string.h>
#include<ctype.h>


//strtok与循环配合，巧妙利用

// int main()
// {
//     char arr[] = "1767849418@qq.com";
//     char* p = "@.";
//     char buf[1023] = {0};

//     strcpy(buf,arr);  

//     char* ret = NULL;

//     for(ret = strtok(arr,p);ret != NULL;ret = strtok(NULL,p))
//     {
//         printf("%s\n",ret);
//     }
//     return 0;
// }

//获取错误码，并且翻译成错误类型
#include<errno.h>
int main()
{
    FILE* pf = fopen("test.txt","r");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        printf("open file successfully");
    }
    return 0;

}