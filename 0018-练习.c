 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//����n��
	int x = 0, y = 0, z = 1;
	scanf("%d", &y);
	for (x = 1; x <= y; x++)
	{
		z *= x;
	}
	printf("%d\n", z);

	//����1��+2��+������+10��
	int a = 0, b = 1, c = 0;
	for (a = 1; a <= 10;a++) {
		b *= a;
			 c += b;
	}
	printf("%d\n", c);
	
	//ģ���û���¼����(����Ϊ"123456"),��ֻ�ܵ�¼���Σ������ζ�����˳�����
	int login = 0;
	char password[200];
	for (login = 0; login < 3; login++) {
		printf("���������룺");
		scanf("%s", password);
		//strcmp���������ַ����Ƚ�
		if (strcmp(password,"123456")==0) {
			printf("��½�ɹ�\n");
			break;
		}
		else {
			printf("�����������������\n");
		}
	}
	if (login == 3) {
		printf("���ξ������˳�����");
	}
	return 0;
}