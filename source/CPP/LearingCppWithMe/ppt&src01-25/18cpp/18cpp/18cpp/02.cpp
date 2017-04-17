#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (instacne_ == NULL)
		{
			instacne_ = new Singleton;
		}
		return instacne_;
	}

	~Singleton()
	{
		cout<<"~Singleton ..."<<endl;
	}

	//static void Free()
	//{
	//	if (instacne_ != NULL)
	//	{
	//		delete instacne_;
	//	}
	//}

	class Garbo
	{
	public:
		~Garbo()
		{
			if (Singleton::instacne_ != NULL)
			{
				delete instacne_;
			}
		}
	};
private:
	Singleton(const Singleton& other);
	Singleton& operator=(const Singleton& other);
	Singleton()
	{
		cout<<"Singleton ..."<<endl;
	}
	static Singleton* instacne_;

	static Garbo garbo_;	// ���ö����ȷ��������
};

Singleton::Garbo Singleton::garbo_;
Singleton* Singleton::instacne_;

int main(void)
{
	//Singleton s1;
	//Singleton s2;

	Singleton* s1 = Singleton::GetInstance();
	Singleton* s2 = Singleton::GetInstance();

	//Singleton s3(*s1);		// ���ÿ������캯��


	return 0;
}