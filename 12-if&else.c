 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 //c���Ա�ʾ��٣�
//                           ��0�����棬0���Ǽ�


//if���
//�ṹ��
//		1.if(���ʽ)
//			���1��
//
//     2.if(���ʽ)
//			���1;
//			else ���2;
//
//		3if(���ʽ1)
//			���1;
//			else if(���ʽ2)
//				���2;
//				else   ���3��


int main()
{
	int age;
	scanf("%d", &age);
	if (age < 18) {
		printf("����\n");
	}
	else if (age >= 18 && age < 26) {
		printf("����\n");
	}
	else if (age >= 26 && age < 40) {
		printf("׳��\n");
	}
	else if (age >= 40 && age < 60) {
		printf("����\n");
	}
	else if (age >= 60 && age < 100) {
		printf("����\n");
	}
	else {
		printf("ϡ������");
	}
	return 0;
}