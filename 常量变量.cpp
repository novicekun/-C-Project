 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//变量常量 
	//变量：可以变化的量
	//常量：不可以变化的量


//定义变量
	// 类型  名字 = 赋值;
	//  int    age = 18;
//全局与局部变量
	//当局部变量与全局变量名字冲突时，局部优先
	//不建议写成一样
//局部变量的作用域：变量所在的局部范围
//全局变量的作用域：整个工程（在其他文件需要用extern声明所使用的变量）


//生命周期：变量的创建与销毁之间的时间段
	//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
	//全局变量的生命周期：程序的生命周期


//常量类型：
	//字面常量
	//const 修饰的常变量
	//#define 定义的标识符常量
	//枚举常量


	

int a = 0;//全局变量----{}外定义的
#define MAX 1000//#define 定义的标识符常量
enum sex//枚举类型的变量
{
	//枚举类型的变量的可能取值，枚举常量的值默认从0开始，可以自己赋初值
	male,
	female
};
int main()
{
	int b = 0;//局部变量----{}内定义的
	3.14;//字面常量
	const int c = 0;//const 修饰的变量,将变量改为常量，本质是个变量，但具有常属性（不能改变的属性）
	int d = MAX;
	printf("%d\n", male);
	printf("%d\n", female);

	



	return 0;
}