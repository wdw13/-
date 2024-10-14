#include <iostream>
using namespace std;
#include "speechManager.h"

int main()
{
	//创建管理类对象
	SpeechManager sm;

	cout << "请输入您的选择：" << endl;
	int choice = 0;//用于存储用户输入

	while (true)
	{
		sm.show_Menu();

		cin >> choice;

		switch (choice)
		{
		case 1://开始比赛
			break;
		case 2://查看往届比赛记录
			break;
		case 3://清空比赛记录
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");//清屏
			break;
		}
	}
	

	system("pause");
	return 0;
}