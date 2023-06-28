 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//for
//			 初始化     判断        调整
//		for(表达式1;表达式2;表达式3){
//				循环语句;
//		}


//不推荐for循环体内修改循环变量，防止for循环失去控制
//判断部分省略就是判断部分恒为真（死循环）




int main()
{
	//输出1~10
	int a = 0;
	for (a = 1; a <= 10; a++) {
		printf("%d\n", a);
	}

	//break
	int b = 0;
	for (b = 1; b <= 10; b++) {
		if (b == 5) {
			break;
		}
		printf("%d\n", b);
	}

	//continue
	int c = 0;
	for (c = 1; c <= 10; c++) {
		if (c == 5) {
			continue;
		}
		printf("%d\n", c);
	}


	return 0;
}