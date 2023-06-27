 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 //c语言表示真假：
//                           非0就是真，0就是假


//if语句
//结构：
//		1.if(表达式)
//			语句1；
//
//     2.if(表达式)
//			语句1;
//			else 语句2;
//
//		3if(表达式1)
//			语句1;
//			else if(表达式2)
//				语句2;
//				else   语句3；


int main()
{
	int age;
	scanf("%d", &age);
	if (age < 18) {
		printf("少年\n");
	}
	else if (age >= 18 && age < 26) {
		printf("青年\n");
	}
	else if (age >= 26 && age < 40) {
		printf("壮年\n");
	}
	else if (age >= 40 && age < 60) {
		printf("中年\n");
	}
	else if (age >= 60 && age < 100) {
		printf("老年\n");
	}
	else {
		printf("稀有物种");
	}
	return 0;
}
