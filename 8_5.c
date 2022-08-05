#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strstr(const char* p1,const char* p2)
{
    assert(p1 != NULL);
    assert(p2 != NULL);
    char* s1 = p1;
    char* s2 = p2;
    char* cur = p1;

    if(*s2 == '\0')
    {
        return p1;
    }

while(*cur)
{
    s2 = p2;
    s1 = cur;
    
    while((*s1 == *s2)&&(*s1 != '\0')&& (*s2 != '\0'))
    {
        s1++;
        s2++;
    } 

    if(*s2 == '\0')
    {
        return cur;
    }
    cur++;

}

return NULL;

}

int main()
{
    char* str1 = "abbbcderpg";
    char* str2 = "bbc";

    char* ret = my_strstr(str1,str2);

    
    if(NULL == ret)
    {
        printf("找不到子串");
    }
    else
    {
        printf("%s\n",ret);
    }

}