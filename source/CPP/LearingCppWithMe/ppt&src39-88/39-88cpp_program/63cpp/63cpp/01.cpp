#include <iostream>
#include <iomanip>

using namespace std;

// ͨ�������ӷ�ʽ���и�ʽ�����
// ��ȿ���
// �������
// ������
// ���ȿ���
// �������
int main(void)
{
	//system("chcp 936");
	int n = 64;
	double d = 123.45;
	double d2 = 0.0187;

	cout<<"=================��ȿ���====================="<<endl;
	cout<<n<<'#'<<endl;
	cout<<setw(10)<<n<<'#'<<n<<endl;		// ��ȿ��Ʋ���Ӱ����һ�����

	cout<<"=================�������====================="<<endl;
	cout<<setw(10)<<setiosflags(ios::left)<<n<<'#'<<endl;
	cout<<setw(10)<<n<<'#'<<endl;			// ������ƻ�Ӱ����һ�����
	//cout<<setw(10)<<setiosflags(ios::right)<<n<<'#'<<endl;
	cout<<setw(10)<<resetiosflags(ios::left)<<n<<'#'<<endl;

	cout<<"=================������====================="<<endl;
	cout<<setw(10)<<setfill('?')<<n<<'#'<<endl;
	cout<<setw(10)<<n<<'#'<<endl;			// �����ƻ�Ӱ����һ�����
	cout<<setw(10)<<setfill(' ')<<n<<'#'<<endl;

	cout<<"=================���ȿ���====================="<<endl;
	cout<<setprecision(4)<<d<<endl;
	cout<<setprecision(2)<<d2<<endl;

	cout<<setiosflags(ios::fixed);
	cout<<setprecision(4)<<d<<endl;
	cout<<setprecision(2)<<d2<<endl;

	cout<<"=================�������====================="<<endl;
	cout<<n<<endl;
	//cout<<resetiosflags(ios::dec);
	//cout<<setiosflags(ios::oct)<<n<<endl;
	////cout<<resetiosflags(ios::oct);
	//cout<<n<<endl;
	////cout<<setiosflags(ios::hex)<<n<<endl;
	//cout<<hex<<n<<endl;

	cout<<oct<<n<<endl;
	cout<<hex<<n<<endl;
	cout<<endl;

	cout<<setiosflags(ios::showbase);
	cout<<dec<<n<<endl;
	cout<<oct<<n<<endl;
	cout<<hex<<n<<endl;

	cout<<endl;
	cout<<setbase(10)<<n<<endl;
	cout<<setbase(8)<<n<<endl;
	cout<<setbase(16)<<n<<endl;




	return 0;
}