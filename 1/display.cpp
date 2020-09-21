#include "display.h"
#include "boss.h"
#include "staff.h"


void Display_main()//界面
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "" << endl;
	}

	cout << "                                           职工信息管理系统" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                *****************************************************************************" << endl;


	for (i = 0; i < 5; i++)
	{
		cout << "                *                                                                           *" << endl;

	}
	cout << "                *                              请选择您的身份(1或2)：                       *" << endl;
	cout << "                *                              (1)boss                                      *" << endl;
	cout << "                *                              (2)staff                                     *" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "                *                                                                           *" << endl;

	}
	cout << "                ************************欢迎使用职工信息管理系统*****************************" << endl;
	cout << "\n\n";
	cout << "\n                请选择操作(按其他键退出):" ;
	int choice;
	boss boss_user;
	staff staff_user;
	cin >> choice;
	switch (choice)
	{
		case 1://boss
			boss_user.boss_display();
			break;
		case 2://staff
			staff_user.staff_display();
			break;
		default://退出
		{
			system(0);
		}

	}

}
