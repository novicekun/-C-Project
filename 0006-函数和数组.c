 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数
//计算两数相加
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n",sum);
	return 0;
}


//函数的方法解决
Add(int x,int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}

//数组
// 含义：一组相同类型的元素的集合
int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
char arr2[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
