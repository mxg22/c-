#define _CRT_SECURE_NO_DEPRECATE
//��ӡ3�ı���
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (c=a%b) //0Ϊ�� ֱ����� 1Ϊ�� ����ѭ��
//	{
//		//c=a%b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ����%d\n",b);
////}
//int  main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf(" %d", year);
//			count++;
//		}
//		else if (year / 400 == 0)
//		{
//			printf(" %d", year);*/
//		    //count++;
//		
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year / 400 == 0))
//	{
//
//		printf(" %d", year);
//		count++;
//	}
//}
//	printf("\n��ݹ���%d\n", count);
//	return 0;
//}

//�ж�100��200֮�������
//int  main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		for (b = 2; b < a; b++)
//		{
//			if (a%b == 0)
//			{
//				break;
//			}
//	
//		}
//		if (a == b)                         
//		{
//			count++;
//			printf(" %d", a);
//		}
//
//		
//	}
//		
//printf("\ncount=%d", count);
//	return 0;
//}
//�ж�1��100 ����9������ 
//���� ���ĸ�λ��ʮλ���ж�
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 0; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			count++;
//		}
//		if (a / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
//1��100 1/1-1/2-1/3....-1/100 ��ӡ�����
//int main()
//{
//	int a = 0;
//	double sum = 0.0;
//	int b = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		sum += b*1.0 / a;
//		b = -b;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//�ҳ�1��10�����ֵ
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//
//��ӡ�˷��ھ���
//˼· 1*1 
//     2*1 2*2
//     3*1 3*2 3*3
int main()
{
	int a = 0;
	for (a = 1; a <= 9; a++)
	{
		int b = 1;
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%d ", a, b,  a*b);
		}
		printf("\n");

	}

	return 0;
}