#include "staff.h"


void staff::staff_display()
{
	system("CLS");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "" << endl;
	}

	cout << "                                              *欢迎来到职工之家*                                              " << endl;
	cout << "" << endl;
	cout << "                  *********************************************************************" << endl;
	cout << "                  *                               1.)登录                             * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *                               2.)退出:                            * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *********************************************************************" << endl;
	cout << "                   请选择登录或退出:";

	int choice;//选择界面
	cin >> choice;
	switch (choice)
	{
	case 1:
		staff_enter();//登录()
		break;
	default://退出
		exit(EXIT_FAILURE);
		{
			system(0);
		}
	}
}

void staff::staff_enter()
{


	int x, y, flag = 2;
	ifstream infile;
	system("CLS");
	infile.open("message.dat", ios::in);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "" << endl;
	}

	cout << "                                              *欢迎来到职工之家*                                              " << endl;
	cout << "" << endl;
	cout << "                  *********************************************************************" << endl;
	cout << "                 *                                                                     *                              " << endl;

	cout << "                 *                             1. 请输入用户名:                        *                              " << endl;
	cout << "" << endl;

	cout << "                 *                             2. 请输入密码：                         *                              " << endl;

	cout << "" << endl;
	cout << "                 *                             3. 请输入ID：                           *                              " << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "                 *                                                                     *" << endl;
		cout << "                  *********************************************************************" << endl;
		cout << "                   用户名：";
		cin >> Name_user;
		cout << "                   密码：  ";
		cin.ignore();
		cin >> Password_user;
		cout << "                   ID:";
		cin.ignore();
		cin >> ID_user;//
		cin.ignore();

		do
		{

			infile >> Name;
			x = Name.size();
			int m = Name.compare(5, x, Name_user); //比较

			infile >> Password;
			y = Password.size();
			int n = Password.compare(9, y, Password_user); //比较

			infile >> ID;

			//cout << "M：" << m << endl;
			//cout << "N：" << n << endl;
			//cout << "i：" << ID << endl;


			if ((m == 0) && (n == 0) && (ID <= ID_user))//登陆成功
			{
				if (ID_user > ID)// 3  3
				{
					break;
				}
				cout << "\n\n\t\t\t\t\t\t密码正确" << endl;
				flag = 1;
				break;
			}
		} while (ID < ID_user);
		infile.close();
		if (flag == 1)
		{
			Sleep(5 * 500);
			system("CLS");
			staff_display_select();
		}
		else
		{
			cout << "密码错误" << endl;
			system(0);
		}
	}
}

void staff::staff_display_select()
{


	{
		int i = 0;
		for (i = 0; i < 3; i++)
		{
			cout << "" << endl;
		}

		cout << "                                               *欢迎来到职工之家*" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "                  *******************************************************************************";


		for (i = 0; i < 5; i++)
		{
			cout << "                 *                                                                             *" << endl;

		}
		cout << "                 *                              请选择您的操作：                               *" << endl;
		cout << "                 *                              修改信息请按【1】                              *" << endl;
		cout << "                 *                              查看信息请按【2】                              *" << endl;
		cout << "                 *                              退出系统请按【3】                              *" << endl;

		for (i = 0; i < 5; i++)
		{
			cout << "                 *                                                                             *" << endl;

		}
		cout << "                 *******************************欢迎来到员工界面*********************************" << endl;
		cout << "\n\n";
		cout << "\n                                                请选择操作:";


		cin >> select;
		system("cls");
		switch (select)
		{
		case 1:
			amend_display();
			break;
		case 2:
			examine_staff();
			break;
		case 3:
			cout << "退出：" << endl;
			system("0");
		}
		system("cls");
	}

	Sleep(5 * 500);

}



staff::staff()
{
}
staff::~staff()
{
}
