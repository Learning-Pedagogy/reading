#include <iostream>
using namespace std;

class Test
{
public:
	int num_;
};

//num_ = 20;		Error,num_�������������ڲ�
int num_ = 20;		// num_�����������ļ������������е�num_�ǲ�ͬ��������

int add(int a, int b);	// a, b������ʶ����������Ϊ����ԭ��������

int main(void)
{
	int num_ = 30;		// num_Ϊ������
	{
		int num_ = 100;	// num_Ϊ������
	}

	cout<<num_<<endl;
	cout<<::num_<<endl;
	return 0;
}

int add(int a, int b)	// �β�a��bҲ���ǿ�������
{
	return a + b;
}

int test()
{
LABEL1:
	cout<<"label1"<<endl;
	goto LABEL3;
LABEL2:
	cout<<"label2"<<endl;
	goto LABEL1;
LABEL3:
	cout<<"label3"<<endl;
	goto LABEL2;
}