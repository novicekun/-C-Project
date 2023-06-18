 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符串
	//字符串是一串字符用双引号括起来的一串字符
	//结束标志是一个\0的转义字符（在计算时\0不算作字符串内容）
	//字符数组——数组是一组同类型的元素
	//字符串在结尾隐藏了一个\0的字符

	
int main()
{
	"Hello World";//字符串
	char arr1[] = { "abc" };
	char arr2[] = { 'a','b','c' };
	int len = strlen("abc");//计算字符串长度
	return 0;
}