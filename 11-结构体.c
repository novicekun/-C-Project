 #define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ṹ����c���Դ���һ���µ�����


//����һ��ѧ��
struct student {
	char name[20];
	int age;
	double credit;
};
int main()
{
	struct student zs = { "����",19,90.5 };//�ṹ��Ĵ������ʼ��
	struct student* pzs = &zs;
	//�ṹ�����.��Ա����
	printf("%s %d %lf\n", zs.name, zs.age, zs.credit);//����һ
	printf("%s %d %lf\n",(*pzs).name,(*pzs).age,(*pzs).credit);//������
	printf("%s %d %lf\n", pzs->name, pzs->age, pzs->credit);//������
}