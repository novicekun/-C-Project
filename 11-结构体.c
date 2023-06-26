 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体让c语言创建一个新的类型


//创建一个学生
struct student {
	char name[20];
	int age;
	double credit;
};
int main()
{
	struct student zs = { "张三",19,90.5 };//结构体的创建与初始化
	struct student* pzs = &zs;
	//结构体变量.成员变量
	printf("%s %d %lf\n", zs.name, zs.age, zs.credit);//方法一
	printf("%s %d %lf\n",(*pzs).name,(*pzs).age,(*pzs).credit);//方法二
	printf("%s %d %lf\n", pzs->name, pzs->age, pzs->credit);//方法三
}