#define _CRT_SECURE_NO_WARNINGS 1

#include<assert.h>
#include<stdio.h>

//void print(int* p,size_t count)
//{
//	for (int i = count; i > 0; i--)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	
//}
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	int i = count;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	
//	print(arr2,sizeof(arr2));
//	return 0;
//}


//memmove Ä£ÄâÊµÏÖ
void* my_memmove(void* dest, const void* src, size_t count)
{
	char* ret = dest;

	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while(count--)
		{
			*((char*)dest + count) = *((char*)src + count);
			
		}
	}
	
	
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memmove(arr1 + 2, arr1, 5*sizeof( arr1[0]));
	return 0;
}

