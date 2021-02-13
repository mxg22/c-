#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int z = 0;
//	int k = 19;
//	while (left <= right)
//	{
//		 z = (left + right) / 2;   //不可在z前面加int 否则z会被初始化
//		if (arr[z] > k)
//		{
//			right = z - 1;
//
//		}
//		else if (arr[z] < k)
//		{
//			left = z + 1;
//
//		}
//		else
//			break;
//
//	}
//	if (left <= right)
//		printf("找到了，下标是%d\n", z);
//	else
//		printf("找不到\n");
//	
//
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welecome to bi te!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //毫秒  函数为停顿
//		system("cls"); //执行系统命令的函数 cls-清空屏幕
//		left++;
//		right--;
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
int main()
{
	char arr[20] = { 0 };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", arr);
		if (strcmp(arr,"123456")==0 )
		{
			printf("输入正确\n");
			break;

		}
		else
		{
			printf("密码错误请重新输入\n");
		}

	}
	if (i == 3)
	 printf("三次机会已经上限");
	
	return 0;
}