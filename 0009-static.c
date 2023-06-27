 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//内存分为栈区，堆区，静态区
//栈区：局部变量，函数的参数
//堆区：动态内存分配
//静态区：全局变量，static修饰的静态变量

// static：
// static修饰局部变量
// 改变了局部变量的生命周期（本质上是改变了变量的存储类型）

//static修饰全局变量
//使得这个全局变量只能在自己的源文件（.c）内部使用，其他源文件不能使用
//全局变量在其他文件内使用是因为全局变量具有外部链接属性，
//但被static修饰后变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了

//static修饰函数
//同全局变量
void num1()
{
	 int b = 1;
	b++;
	printf("num1：%d\n", b);
}
void num2()
{
	 static int c = 1;
	c++;
	printf("num2：%d\n", c);
}
int main()
{
	int a = 1;
	while (a < 10)
	{
		num1();
		a++;
	}
	int d = 0;
	while (d < 10)
	{
		num2();
		d++;
	}
	return 0;
}
