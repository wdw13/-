#include "Boss.h"


Boss::Boss(int id, string name, int dId)//���캯��
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Boss::showInfo()  //��ʾ������Ϣ
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ�𣺹���˾��������" << endl;
}


string Boss::getDeptName()  //��ȡ��λ����
{
	return string("�ϰ�");
}