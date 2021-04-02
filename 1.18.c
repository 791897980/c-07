#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);//二维数组在内存中也是连续存放的
		}
	}
	return 0;
}

//int main()
//{
//	//int arr[3][4] = {1,2,3,4,5};//3行4列 1234第一行 5第二行
//	//char ch[5][6];
//	//int arr[3][4] = { {1,2,3},{4,5} };//123第一行 45第二行
//	//int arr[] = { 1,2,3,4 };
//	//int arr[][] = { {1,2,3,4},{5,6,7,8 }};//error 行和列不能同时省略掉
//	//int arr[2][] = { 1,2,3,4,5,6,7,8 };//二维数组的列是不能省略的
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8 } };
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);//说明一维数组在内存中是连续存放的
//	}
//
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//传建一个数组 - 存放整型
//	//int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5] = {'a','b'};//后面是0
//	//char arr3[5] = "ab";//ok 放了个'\0'，不是默认给0；虽然结果一样，但是方式不一样
//	//char arr4[5] = { 'a', 98 };//ok
//	char arr5[] = "abcdef";
//	printf("%d\n", sizeof(arr5));//sizeof式计算arr5所占空间的大小 包括'\0'
//	//7个元素-char 7*1 = 7
//
//	printf("%d\n", strlen(arr5));
//	//strlen求字符串长度 - ‘\0'之前的字符个数
//	//int n = 5;
//	//char ch[n];//error 数组大小要用常量
//	return 0;
//}

//strlen 和 sizeof没有什么关联
//strlen是求字符串长度的，只能求字符串长度，只和字符串有关，没什么别的用法 - 是库函数 - 使用引头文件
//sizeof是计算对象、数组、类型的大小，单位是字节 - 是一个操作符

