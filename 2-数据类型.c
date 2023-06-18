 #define  _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
//单位
//byte=8bit
//kb=1024byte
//mb=1024kb
//...
//数据类型
int main()
{
	int a;//整形= 4 byte
	short b;//短整形(也可以写成 short int）= 2 byte
	long c;//长整形（同上 long int)= 4 byte
	long long d;//更长的整形= 8 byte
	char e;//字符数据类型= 1 byte
	//char e = 'a';
	float f;//单精度浮点数= 4 byte
	double g;//双精度浮点数= 8 byte
	printf("%d\n",sizeof(int));//计算类型或者变量所占空间的大小
	return 0;
}
