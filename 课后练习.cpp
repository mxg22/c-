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
//		 z = (left + right) / 2;   //������zǰ���int ����z�ᱻ��ʼ��
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
//		printf("�ҵ��ˣ��±���%d\n", z);
//	else
//		printf("�Ҳ���\n");
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
//		Sleep(1000); //����  ����Ϊͣ��
//		system("cls"); //ִ��ϵͳ����ĺ��� cls-�����Ļ
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
		printf("����������\n");
		scanf("%s", arr);
		if (strcmp(arr,"123456")==0 )
		{
			printf("������ȷ\n");
			break;

		}
		else
		{
			printf("�����������������\n");
		}

	}
	if (i == 3)
	 printf("���λ����Ѿ�����");
	
	return 0;
}