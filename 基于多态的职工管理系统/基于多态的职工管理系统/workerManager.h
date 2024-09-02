#pragma once //防止头文件重复
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
	WorkerManager();//构造函数

	void Show_Menu();//展示菜单

	void ExitSystem();//退出功能

	int m_EmpNum;//记录职工人数

	Worker ** m_EmpArray;//职工数组指针

	void Add_Emp();//添加职工

	void save();//保存文件

	bool m_FileIsEmpty;//判断文件是否为空

	int get_EmpNum();//统计人数

	void init_Emp();//初始化员工

	void Show_Emp();//显示员工

	void Del_Emp();//删除员工

	int IsExist(int id);//判断是否存在

	void Mod_Emp();//修改职工

	void Find_Emp();//查找员工

	void Sort_Emp();//排序员工

	void Clean_File();//清空文件

	~WorkerManager();//析构函数

};