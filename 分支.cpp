#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/* switch������֧���  ������ֻ���������ͱ��ʽ 
{
	�����;
   case():
}
case������    ������Ϊ���ͱ��������  ��������break��� ���������������
break;        �ж���� �Ӷ�ʵ�ַ�֧ 
default�־�  
�����������ʽֵ��ƥ��ʱ ��ʹ��default ���������
defaylt�������κ�һ��caseλ�� ÿ��switch���ֻ������һ��default���*/
//int main()
//{
//	int a = 0;
//	printf("������1-4������\n");
//	scanf("%d", &a);
//	switch (a)        
//	{
//	case 1:           
//		printf("������\n");
//	case 2:
//		printf("������\n");
//	case 3:           
//		printf("������\n");
//	case 4:
//		printf("������\n"); 
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	printf("������1-5������\n");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:                    //case ������ܹ��ۼ�ʹ�� 
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("��Ϣ��\n");
		break;                //��������˵����ִ�е�������Ѿ����� ���ɱ�̺�ϰ�߼���break
	default:
		printf("����\n");
	}
	return 0;
}