 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����
//�����������
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n",sum);
	return 0;
}


//�����ķ������
Add(int x,int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}

//����
// ���壺һ����ͬ���͵�Ԫ�صļ���
int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
char arr2[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0