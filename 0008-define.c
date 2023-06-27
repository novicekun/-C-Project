 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUM 1000//define定义常量
#define ADD(x,y) x+y//define定义宏
int main()
{
	printf("%d\n", NUM);
	printf("%d\n", ADD(1,2));//结果为3
	printf("%d\n", 2*ADD(1,2));//结果为4，因为定义的宏是替换，表达式可以表示成2*1+2

	return 0;
} 
