#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

class Teacher :public Identity
{
public:

	//Ĭ�Ϲ���
	Teacher();

	//�вι��죨ְ����ţ����������룩
	Teacher(int empId, string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

	int m_EmpId;
};