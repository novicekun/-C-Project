 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//while

//		while(���ʽ){
//			ѭ�����;
//		}


int main()
{
	//��ӡ����1~10
	int a = 1;
	while (a <= 10) {
		printf("%d\n", a);
		a++;
	}

	//��while����У�break�������õ���ֹѭ��
	int b = 1;
	while (b <= 10) {
		if (b == 5) {
			break;
		}
		printf("%d\n", b);
		b++;
	}

	//��while����У�continue��������������ѭ��continue�������䣬ֱ��ȥ�жϲ��֣����Ƿ��ܽ�����һ��ѭ��
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