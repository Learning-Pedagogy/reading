#include <iostream>
using namespace std;

class Test
{
public:
	Test()
	{

	}
	~Test()
	{

	}

	static const int x_ = 100;		// ��̬��Ա��������˵��
};

//const int Test::x_;					// ��̬��Ա�Ķ�����˵��

int main(void)
{
	cout<<Test::x_<<endl;
}