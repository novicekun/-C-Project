 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//do while
//		do
//			ѭ�����;
//		while(���ʽ);

//�ص㣺ѭ������ִ��һ��
     

int main()
{
	//��ӡ1~10
	int a = 1;
	do {
		printf("%d\n", a);
		a++;
	} while (a <= 10);

	//break
	int b = 1;
	do {
		if (b == 5) {
			break;
		}
		printf("%d\n", b);
		b++;
	} while (a <= 10);

	//continue
	int c = 1;
	do {
		if (c == 5) {
			//continue;
		}
		printf("%d\n", c);
		c++;
	} while (c <= 10);

	return 0;

}
