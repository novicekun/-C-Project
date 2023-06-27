 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//内存
//计算机所有的程序运行都在内存中进行
//内存会划分一个个内存单元，每一个内存单元的大小是1字节
//为了有效的访问到内存的每个单元，就给每个内存单元进行编号，这些编号称为该内存单元的地址
int main()
{
	int a = 10;
	printf("%p\n", &a);//%p专门打印地址
	//*说明pa是指针变量，int说明pa执行的变量是int类型的
	//类型* 类型名字=&变量
	int* pa = &a;
	*pa = 20;//这个*就是解引用操作，通过pa里的地址，找到a
	printf("%d\n", a);


	//计算指针的大小
	printf("%d\n", sizeof(char*));//8
	printf("%d\n", sizeof(int*));//8
	printf("%d\n", sizeof(short*));//8
	printf("%d\n", sizeof(long*));//8
	printf("%d\n", sizeof(long long*));//8
	printf("%d\n", sizeof(float*));//8
	printf("%d\n", sizeof(double*));//8
	//由上大小得，指针的大小是相同的，指针需要多大空间，取决于地址的存储需要多大空间
	//注：x86是4字节，x64是8字节

	return 0;
}
