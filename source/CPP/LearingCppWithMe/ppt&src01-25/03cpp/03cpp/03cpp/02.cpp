#include <iostream>
using namespace std;

int main(void)
{
	int* p = new int(33);			//����һ�������ռ� 4�ֽ�
	cout<<*p<<endl;

	int* p2 = new int[10];		//����������10�������ռ� 40�ֽ�

	delete p;
	delete[] p2;
	return 0;
}