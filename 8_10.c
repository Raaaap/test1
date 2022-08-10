#include<stdio.h>

void print(char* p,size_t num)
{
    while(num--)
    {
        printf("%d\n",*p);
        p++;
    }

}

//memcpy的使用以及模拟实现

#include<assert.h>
void* my_memcpy(void* dest,const void* src,size_t num)
{
    void* ret = dest;

    assert(dest != NULL);
    assert(src != NULL);

    while(num--)
    {
        *(char*)dest = *(char*)src;
        (char*)dest++;
        (char*)src++;
    }

    return ret;

}
int main()
{
    int arr1[] = {1,2,4,6,8};
    int arr2[]= {0};
    my_memcpy(arr2,arr1,sizeof(arr1));
    print(arr2,sizeof(arr2)); 
    return 0;
}