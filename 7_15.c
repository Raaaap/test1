#include<stdio.h>

int my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while('\0' != *end)
    {
        end++;
    }
    return end - start;
}
int main()
{
    char arr[] = "bit";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
}