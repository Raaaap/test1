#include<stdio.h>


//数组元素的逆置并展示
// void Print(int arr[],int sz)
// {
//     int i = 0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void Reverse(int arr[],int sz)
// {
//     int left = 0;
//     int right = sz-1;
    
    
//     while(left<right)
//     {
        
//         int tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;
//         right--;
//         left++;

//     }
// }

// int main()
// {
//     int arr[] = {1,2,3,4};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     Print(arr,sz);
//     Reverse(arr,sz);
//     Print(arr,sz);
//     return 0;
// }