#include <iostream>
using namespace std;

int main(void)
{
	//const int a;			Error,���������ʼ��
	const int a = 100;		
	//a = 200;				Error,�����������±���ֵ

	int b = 22;
	const int * p;			//const��*��ߣ���ʾ*pΪ����������*p���ܸ���ָ����ָ�������
	p = &b;
	//*p = 200;				Error,�����������±���ֵ
	//int * const p2;		Error,p2Ϊ���������������ʼ��
	int * const p2 = &b;	//const��*�ұߣ���ʾp2Ϊ����
	//int c =100;
	//p2 = &c;				Error,�����������±���ֵ
	*p2 = 200;

	cout<<b<<endl;

	return 0;
}