#pragma once //��ֹͷ�ļ��ظ�
#include <iostream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
using namespace std;

#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	WorkerManager();//���캯��

	void Show_Menu();//չʾ�˵�

	void ExitSystem();//�˳�����

	int m_EmpNum;//��¼ְ������

	Worker ** m_EmpArray;//ְ������ָ��

	void Add_Emp();//���ְ��

	void save();//�����ļ�

	bool m_FileIsEmpty;//�ж��ļ��Ƿ�Ϊ��

	int get_EmpNum();//ͳ������

	void init_Emp();//��ʼ��Ա��

	void Show_Emp();//��ʾԱ��

	void Del_Emp();//ɾ��Ա��

	int IsExist(int id);//�ж��Ƿ����

	void Mod_Emp();//�޸�ְ��

	void Find_Emp();//����Ա��

	void Sort_Emp();//����Ա��

	void Clean_File();//����ļ�

	~WorkerManager();//��������

};