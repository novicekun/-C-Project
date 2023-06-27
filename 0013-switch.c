#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//switch
//
//switch(整型表达式)
//{
//		case 1：;
//		case 2：;
//		case 3：;
//		  ...

//}
//case后要加整形常量或其表达式

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("输入错误");
		break;
	}
	return 0;
}
