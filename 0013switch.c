#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//switch
//
//switch(���ͱ��ʽ)
//{
//		case 1��;
//		case 2��;
//		case 3��;
//		  ...

//}
//case��Ҫ�����γ���������ʽ

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������");
			break;
	}
	return 0;
}