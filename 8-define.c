 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUM 1000//define���峣��
#define ADD(x,y) x+y
int main()
{
	printf("%d\n", NUM);
	printf("%d\n", ADD(1,2));//���Ϊ3
	printf("%d\n", 2*ADD(1,2));//���Ϊ4����Ϊ����ĺ����滻�����ʽ���Ա�ʾ��2*1+2

	return 0;
} 