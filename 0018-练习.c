 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//计算n！
	int x = 0, y = 0, z = 1;
	scanf("%d", &y);
	for (x = 1; x <= y; x++)
	{
		z *= x;
	}
	printf("%d\n", z);

	//计算1！+2！+···+10！
	int a = 0, b = 1, c = 0;
	for (a = 1; a <= 10;a++) {
		b *= a;
			 c += b;
	}
	printf("%d\n", c);
	
	//模拟用户登录场景(密码为"123456"),并只能登录三次（若三次都输错，退出程序）
	int login = 0;
	char password[200];
	for (login = 0; login < 3; login++) {
		printf("请输入密码：");
		scanf("%s", password);
		//strcmp用于两个字符串比较
		if (strcmp(password,"123456")==0) {
			printf("登陆成功\n");
			break;
		}
		else {
			printf("密码错误，请重新输入\n");
		}
	}
	if (login == 3) {
		printf("三次均错误，退出程序");
	}
	return 0;
}