#include <iostream>
using namespace std;
#include <stdio.h>

#pragma pack(2)
struct Test
{
	char a;
	double b;
	char c;
};
#pragma pack()


//��һ����Ա��ṹ�������ƫ����Ϊ0
//������ԱҪ���뵽ĳ�����֣������������������ĵ�ַ
//������ȡ������Ԥ���һ������������ó�Ա��С�Ľ�Сֵ
//�ṹ���ܴ�СΪ����������������


int main(void)
{
	Test test;
	//&test = &test.a;
	char *p= (char*)&test;
	//cout<<p<<endl;
	printf("p=%p\n", p);
	p = &test.a;
	printf("p=%p\n", p);

	cout<<sizeof(Test)<<endl;
	return 0;
}