 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ڴ�
//��������еĳ������ж����ڴ��н���
//�ڴ�Ữ��һ�����ڴ浥Ԫ��ÿһ���ڴ浥Ԫ�Ĵ�С��1�ֽ�
//Ϊ����Ч�ķ��ʵ��ڴ��ÿ����Ԫ���͸�ÿ���ڴ浥Ԫ���б�ţ���Щ��ų�Ϊ���ڴ浥Ԫ�ĵ�ַ
int main()
{
	int a = 10;
	printf("%p\n", &a);//%pר�Ŵ�ӡ��ַ
	//*˵��pa��ָ�������int˵��paִ�еı�����int���͵�
	//����* ��������=&����
	int* pa = &a;
	*pa = 20;//���*���ǽ����ò�����ͨ��pa��ĵ�ַ���ҵ�a
	printf("%d\n", a);


	//����ָ��Ĵ�С
	printf("%d\n", sizeof(char*));//8
	printf("%d\n", sizeof(int*));//8
	printf("%d\n", sizeof(short*));//8
	printf("%d\n", sizeof(long*));//8
	printf("%d\n", sizeof(long long*));//8
	printf("%d\n", sizeof(float*));//8
	printf("%d\n", sizeof(double*));//8
	//���ϴ�С�ã�ָ��Ĵ�С����ͬ�ģ�ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
	//ע��x86��4�ֽڣ�x64��8�ֽ�

	return 0;
}