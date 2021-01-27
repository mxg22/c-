#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////int main()
////{
////	printf("请输入一个字符\n");
////	int ret = 0;
////	int c = 0;
////	char ch[20] = {0};
////	scanf("%s", &ch);
////	while ((c=getchar()) != '\n')
////	{
////		;
////	}
////	printf("是否确定？（Y\N）");
////	ret = getchar();
////	if (ret == 'Y')
////	
////		printf("确定成功\n");
////	else
////		printf("错误\n");
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
//循环 括号内部是条件 
//{

//}
//break和contiue 在while同样适用
//在适用while循环时注意顺序 否则会导致死循环
//getchar putchar 输入输出字符 *
//只能输出输入字符
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//i++;
//		if (i == 5)
//			continue;       //当i满足上面条件时 不会执行下面的程序
//		printf("%d\n", i);  //继续向上进行判断 break则会直接中断输出
//		i++;                //i++的顺序很重要 当i=5 中断语句不执行下面代码
//		                    //意味着i不会被++ i被返回5 程序被迫中断
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
//			continue;          //输入的是字符数字
//		putchar(ch);
//	}
//	return 0;
//}
int main()
{

	int a = 0;
	char i[20] = { 0 };
	int ret = 0;
	
	printf("请输入你的密码\n");
	scanf("%s", &i);                        //先创建一个数组 来存放密码 getchar每次只能读取一个字符
	while ((a = getchar()) != '\n')         //碰见连续的密码时让他进行读取 直到读取到末尾处\n
	{                                       //1234\n   将缓冲区全部读取完
		;
	}
	printf("请确定？Y/N");                 //因为输入字符时 后边还有一个结束字符\n  默认省略 
	ret = getchar();                       // y\n 直接读取y    \n 不管他 
	if (ret == 'y')
	{
		printf("输入成功\n");
	}
	else
	{
		printf("输入错误\n");
	}

	return 0;
}