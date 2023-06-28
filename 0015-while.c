 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//while

//		while(表达式){
//			循环语句;
//		}


int main()
{
	//打印数字1~10
	int a = 1;
	while (a <= 10) {
		printf("%d\n", a);
		a++;
	}

	//在while语句中，break用于永久的终止循环
	int b = 1;
	while (b <= 10) {
		if (b == 5) {
			break;
		}
		printf("%d\n", b);
		b++;
	}

	//在while语句中，continue作用是跳过本次循环continue后面的语句，直接去判断部分，看是否能进行下一次循环
	int c = 1;
	while (c <= 10) {
		if (c == 5) {
			continue;
		}
		printf("%d\n", c);
	}

	//getchar
	int ch = 0;
	while ((ch = getchar() )!= EOF) {
		putchar(ch);
	}
	return 0;
}