#include<stdio.h>


// //实现各种类型数据都可以用的万能冒泡排序
// void Swap(char* buf1, char* buf2,int width)
// {
//     int i = 0;
//     for(i=0;i<width;i++)
//     {
//         int tmp = *buf1;
//         *buf1 = *buf2;
//         *buf2 = tmp;
//         buf1++;
//         buf2++;
//     }
// }

// void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))
// {
//     int  i = 0;
//     for(i=0;i<sz-1;i++)//sz趟冒泡排序，把最大数、次大数...移动到右侧
//     {
//         int j = 0;
//         for(j=0;j<sz-1-i;j++)//一趟具体实现
//         {
//             if(cmp((char*)base + width*j,(char*)base + width*(j+1) ) > 0)
//             {
//                 Swap((char*)base + width*j,(char*)base + width*(j+1),width);//创建临时变量交换法
//             }
//         }
//     }
// }

// int cmp_int(const void* e1,const void* e2)
// {
//     return *(int*)e1 - *(int*)e2;
// }

// void test()
// {
//     int arr[] = {9,8,7,6,5,4,342,234,1,2,34,2,9};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//     int  i =0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }



// int main()
// {
//     test();
//     return 0;
// }

// void bubble_sort_example(void* base,int sz,int width,int (*cmp)(void* e1,void* e2))
// //第一个参数是接收数组首元素地址的指针
// //第二个参数是是数组元素个数
// //第三个参数是每个元素大小所占比特（也叫宽度）方便char*指针访问
// //第四个参数是一个函数指针，接受需要比较类型的比较规则函数。
// //void* 指针是一种没有具体类型的指针，可以接收任何类型地址，但是也因为没有确定类型，无法解引用和++操作
// {

// }

//一道需要！画图理解！的指针数组和三级指针笔试题

int main()
{
    char* c[] = {"ENTER","NEW","POINT","FIRST"};
    char** cp[] = {c+3,c+2,c+1,c};
    char*** cpp = cp;
    printf("%s\n",**++cpp);
    printf("%s\n",*--*++cpp + 3);
    printf("%s\n",*cpp[-2] + 3);
    printf("%s\n",cpp[-1][-1]+1);

    return 0;
}