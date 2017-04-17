#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	Employee(const string& name, const int age, const int deptno) : name_(name),
		age_(age), deptno_(deptno)
	{

	}
private:
	string name_;
	int age_;
	int deptno_;
};

class Manager : public Employee
{
public:
	Manager(const string& name, const int age, const int deptno, int level)
		: Employee(name, age, deptno), level_(level)
	{

	}
private:
	int level_;
};

class Manager2 : private Employee
{
public:
	Manager2(const string& name, const int age, const int deptno, int level)
		: Employee(name, age, deptno), level_(level)
	{

	}
private:
	int level_;
};

int main(void)
{
	Employee e1("zhangsan", 25, 20);
	Manager m1("lisi", 38, 20, 10);
	Manager2 m2("wangwu", 40, 15, 8);
	Employee* pe;
	Manager* pm;
	Manager2* pm2;

	pe = &e1;
	pm = &m1;
	pm2 = &m2;

	pe = &m1;	// ���������ָ�����ת��Ϊ�������ָ�롣����������󿴳ɻ������
	//pm = &e1;	// �������ָ���޷�ת��Ϊ���������ָ�롣�޷���������󿴳������������

	e1 = m1;	// ������������ת��Ϊ������󡣽���������󿴳ɻ������
				// ����������и���������г�Ա��ʧ����object slicing

	//pe = pm2;	//˽�л򱣻��̳е�ʱ�����������ָ�벻�����Զ�ת��Ϊ�������ָ��
	pe = reinterpret_cast<Employee*>(pm2);

	//e1 = m2;	// ˽�л򱣻��̳е�ʱ������������޷�ת��Ϊ�������
	//e1 = reinterpret_cast<Employee>(m2); // ˽�л򱣻��̳е�ʱ������������޷�ǿ��ת��Ϊ�������


	pm = static_cast<Manager*>(pe);	// ����ָ�����ǿ��ת��Ϊ������ָ�룬���ǲ���ȫ

	//m1 = reinterpret_cast<Manager>e1;	// ��������޷�ǿ��ת��Ϊ���������

	return 0;
}