#include "String.h"

int main(void)
{
	String s1("AAA");
	s1.Display();
	String s2 = s1;		// ���ÿ������캯��
						// ϵͳ�ṩ��Ĭ�Ͽ������캯��ʵʩ����ǳ���� s2.str_ = s1.str_

	String s3;
	s3.Display();
	s3 = s2;			// ���õȺ������
						// ϵͳ�ṩ��Ĭ�ϵȺ������ʵʩ����ǳ���� s3.str_ = s2.str_;
						// s3.operator=(s2);

	// Ҫ�ö����Ƕ�һ�޶��ģ�����Ҫ��ֹ����
	// �����ǽ��������캯����=���������Ϊ˽�У����Ҳ��ṩ���ǵ�ʵ��
	return 0;
}