#include "manager.h"


Manager::Manager(int id, string name, int dId)//���캯��
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Manager::showInfo()  //��ʾ������Ϣ
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ������ϰ彻�������񣬲����·��������ͨԱ��" << endl;
}


string Manager::getDeptName()  //��ȡ��λ����
{
	return string("����");
}