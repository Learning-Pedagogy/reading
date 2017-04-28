#include <iostream>
using namespace std;

// const��Ա�ĳ�ʼ��ֻ���ڹ��캯����ʼ���б��н���
// ���ó�Ա�ĳ�ʼ��Ҳֻ���ڹ��캯����ʼ���б��н���
// �����Ա����������Ӧ����û��Ĭ�Ϲ��캯�����ĳ�ʼ����Ҳֻ���ڹ��캯����ʼ���б��н���
class Object
{
public:
	enum E_TYPE
	{
		TYPE_A = 100,
		TYPE_B = 200
	};
public:
	Object(int num=0) : num_(num), kNum_(num), refNum_(num_)
	{
		//kNum_ = 100;
		//refNum_ = num_;
		cout<<"Object "<<num_<<" ..."<<endl;
	}
	~Object()
	{
		cout<<"~Object "<<num_<<" ..."<<endl;
	}

	void DisplayKNum()
	{
		cout<<"kNum="<<kNum_<<endl;
	}
private:
	int num_;
	const int kNum_;
	int& refNum_;
};

int main(void)
{
	Object obj1(10);
	Object obj2(20);
	obj1.DisplayKNum();
	obj2.DisplayKNum();

	cout<<obj1.TYPE_A<<endl;
	cout<<obj2.TYPE_A<<endl;
	cout<<Object::TYPE_A<<endl;


	return 0;
}