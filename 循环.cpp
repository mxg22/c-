#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////int main()
////{
////	printf("������һ���ַ�\n");
////	int ret = 0;
////	int c = 0;
////	char ch[20] = {0};
////	scanf("%s", &ch);
////	while ((c=getchar()) != '\n')
////	{
////		;
////	}
////	printf("�Ƿ�ȷ������Y\N��");
////	ret = getchar();
////	if (ret == 'Y')
////	
////		printf("ȷ���ɹ�\n");
////	else
////		printf("����\n");
////
////	
////
////
////	return 0;
////}
////int main()
////{
////
////	int a = 9;
////	while ((a = getchar()) != EOF)
////	{
////		if (a<'0' || a>'9')
////			continue;
////		putchar(a);
////	}
////	return 0;
////}
//int  main()
//{
//	int aa = 0;
//	while (aa <= 10)
//	{
//		aa++;
//		if (aa == 5)
//			continue;
//		printf("%d\n", aa);
//		
//	}
//
//	return 0;
//}
//while ()
//ѭ�� �����ڲ������� 
//{

//}
//break��contiue ��whileͬ������
//������whileѭ��ʱע��˳�� ����ᵼ����ѭ��
//getchar putchar ��������ַ� *
//ֻ����������ַ�
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//i++;
//		if (i == 5)
//			continue;       //��i������������ʱ ����ִ������ĳ���
//		printf("%d\n", i);  //�������Ͻ����ж� break���ֱ���ж����
//		i++;                //i++��˳�����Ҫ ��i=5 �ж���䲻ִ���������
//		                    //��ζ��i���ᱻ++ i������5 �������ж�
//
//	}
//	return 0;
//}
//int main()
//{
//
//	int a = 0;
//	while ((a = getchar()) != EOF)   
//		putchar(a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//
//		if (ch<'0' || ch>'9')
//			continue;          //��������ַ�����
//		putchar(ch);
//	}
//	return 0;
//}
int main()
{

	int a = 0;
	char i[20] = { 0 };
	int ret = 0;
	
	printf("�������������\n");
	scanf("%s", &i);                        //�ȴ���һ������ ��������� getcharÿ��ֻ�ܶ�ȡһ���ַ�
	while ((a = getchar()) != '\n')         //��������������ʱ�������ж�ȡ ֱ����ȡ��ĩβ��\n
	{                                       //1234\n   ��������ȫ����ȡ��
		;
	}
	printf("��ȷ����Y/N");                 //��Ϊ�����ַ�ʱ ��߻���һ�������ַ�\n  Ĭ��ʡ�� 
	ret = getchar();                       // y\n ֱ�Ӷ�ȡy    \n ������ 
	if (ret == 'y')
	{
		printf("����ɹ�\n");
	}
	else
	{
		printf("�������\n");
	}

	return 0;
}