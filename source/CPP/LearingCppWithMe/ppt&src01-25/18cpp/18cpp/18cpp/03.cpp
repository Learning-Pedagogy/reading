#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton& GetInstance()
	{
		static Singleton instance;		// �ֲ���̬����
		return instance;
	}

	~Singleton()
	{
		cout<<"~Singleton ..."<<endl;
	}

private:
	Singleton(const Singleton& other);
	Singleton& operator=(const Singleton& other);
	Singleton()
	{
		cout<<"Singleton ..."<<endl;
	}
};

int main(void)
{
	Singleton& s1 = Singleton::GetInstance();
	Singleton& s2 = Singleton::GetInstance();



	return 0;
}