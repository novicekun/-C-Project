 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数
//定义：函数也叫子程序，负责完成某一项特定的任务，相较于其他代码，其具有相对的独立性
//类型：库函数，自定义函数


//库函数
//		参考MSDN


//自定义函数
//组成：
//		返回类型  函数名称(参数){
//			语句;
//}
//函数返回类型写void,表示这个函数不返回任何值，也不需要返回


//实参：真实传给函数的参数
//形参：函数名后面括号中的变量，当函数调用完后就自动销毁了，因此形参只在函数中有效


//写一个函数，让其找出两个整数的最大值
int getmax(int x,int y) {
	int z;
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}
	return z;
}


int main()
{
	int a =0;
	int b =0;
	//函数的调用
	scanf("%d %d", &a,& b);
	int max = getmax(a, b);
	printf("max=%d\n", max);
	return 0;
}