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
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);//��ά�������ڴ���Ҳ��������ŵ�
		}
	}
	return 0;
}

//int main()
//{
//	//int arr[3][4] = {1,2,3,4,5};//3��4�� 1234��һ�� 5�ڶ���
//	//char ch[5][6];
//	//int arr[3][4] = { {1,2,3},{4,5} };//123��һ�� 45�ڶ���
//	//int arr[] = { 1,2,3,4 };
//	//int arr[][] = { {1,2,3,4},{5,6,7,8 }};//error �к��в���ͬʱʡ�Ե�
//	//int arr[2][] = { 1,2,3,4,5,6,7,8 };//��ά��������ǲ���ʡ�Ե�
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
//		printf("&arr[%d] = %p\n", i,&arr[i]);//˵��һά�������ڴ�����������ŵ�
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
//	//����һ������ - �������
//	//int arr[10] = {1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = {'a','b'};//������0
//	//char arr3[5] = "ab";//ok ���˸�'\0'������Ĭ�ϸ�0����Ȼ���һ�������Ƿ�ʽ��һ��
//	//char arr4[5] = { 'a', 98 };//ok
//	char arr5[] = "abcdef";
//	printf("%d\n", sizeof(arr5));//sizeofʽ����arr5��ռ�ռ�Ĵ�С ����'\0'
//	//7��Ԫ��-char 7*1 = 7
//
//	printf("%d\n", strlen(arr5));
//	//strlen���ַ������� - ��\0'֮ǰ���ַ�����
//	//int n = 5;
//	//char ch[n];//error �����СҪ�ó���
//	return 0;
//}

//strlen �� sizeofû��ʲô����
//strlen�����ַ������ȵģ�ֻ�����ַ������ȣ�ֻ���ַ����йأ�ûʲô����÷� - �ǿ⺯�� - ʹ����ͷ�ļ�
//sizeof�Ǽ���������顢���͵Ĵ�С����λ���ֽ� - ��һ��������

