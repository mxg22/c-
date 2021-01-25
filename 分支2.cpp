#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/* switch（）分支语句  括号中只能输入整型表达式 
{
	语句项;
   case():
}
case（）：    括号内为整型变量表达项  若不带有break语句 则继续输出下列语句
break;        中断语句 从而实现分支 
default字句  
当语句项跟表达式值不匹配时 可使用default 语句进行输出
defaylt可以在任何一个case位置 每个switch语句只可以有一个default语句*/
//int main()
//{
//	int a = 0;
//	printf("请输入1-4的数字\n");
//	scanf("%d", &a);
//	switch (a)        
//	{
//	case 1:           
//		printf("工作日\n");
//	case 2:
//		printf("工作日\n");
//	case 3:           
//		printf("工作日\n");
//	case 4:
//		printf("工作日\n"); 
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	printf("请输入1-5的数字\n");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:                    //case 语句项能够累计使用 
	case 4:
		printf("工作日\n");
		break;
	case 5:
		printf("休息日\n");
		break;                //按道理来说程序执行到这里就已经结束 养成编程好习惯加上break
	default:
		printf("错误\n");
	}
	return 0;
}