#include <iostream>
using namespace std;

//���ò��Ǳ���
//���ý���ֻ�Ǳ����ı���
//����û���Լ������Ŀռ�
//����Ҫ���������õı�������ռ�
//�����������ĸı�ʵ�����Ƕ��������õı����ĸı�
//�����ڶ����ʱ��Ҫ���г�ʼ����
//����һ����ʼ������������ָ����������

int main(void)
{
	int val = 100;
	//int& refval;			Error,���ñ����ʼ��
	int& refval = val;
	refval = 200;			// ��200��ֵ��refval
							// ʵ���ϸı����val�������

	cout<<"val="<<val<<endl;

	int val2 = 500;
	refval = val2;			// ������refval������val2�������
							// ����ֻ�Ǵ���val2��ֵ��refval

	cout<<"val="<<val<<endl;

	return 0;
}