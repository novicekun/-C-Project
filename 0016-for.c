 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//for
//			 ��ʼ��     �ж�        ����
//		for(���ʽ1;���ʽ2;���ʽ3){
//				ѭ�����;
//		}


//���Ƽ�forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//�жϲ���ʡ�Ծ����жϲ��ֺ�Ϊ�棨��ѭ����




int main()
{
	//���1~10
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