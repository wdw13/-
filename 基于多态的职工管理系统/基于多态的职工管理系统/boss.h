#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class Boss :public Worker
{
public:

	Boss(int id, string name, int dId);//���캯��

	virtual void showInfo();  //��ʾ������Ϣ


	virtual string getDeptName();  //��ȡ��λ����

};
