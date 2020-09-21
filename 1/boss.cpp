#include "boss.h"

void boss::boss_display()
{
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t*(1)登录\n\t\t\t\t\t\t*(2)注册\n";
	cout << "\n\t\t\t\t\t\t请选择1或2:";
	int choice;//选择界面
	cin >> choice;
	switch (choice)
	{
	case 1:
		boss_enter();
		break;
	case 2:
		boss_register();
		break;
	case 9://退出
		exit(EXIT_FAILURE);
		{
			system(0);
		}
	}
}

void boss::boss_register()//注册
{	

	ifstream infile;
	infile.open("message.dat", ios::in | ios::ate);
	int len = -1;
	char ch, f = 0;
	infile.seekg(0, ios::end);
	int fsize = infile.tellg();
	while (1)
	{
		infile.seekg(len, ios::end);
		if (-len == fsize)
		{
			infile >> ID;
			break;
		}
		infile.get(ch);
		if (f == 0)
		{
			if (!(ch == ' ' || ch == '\n')) //这一段用来跳过结尾可属能存在的无效空格和换行
				f = 1;
		}
		else
		{
			if ((ch == ' ' || ch == '\n'))
			{
				infile >> ID;
				break;
			}
		}
		len--;
	}
	infile.close();

	ID++;
	system("CLS");
	ofstream outfile;
	
	outfile.open("message.dat", ios::app);

	
	
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t请设置您的用户名：";
	cin >> Name;
	cin.ignore();
	outfile << "Name:" << Name << endl;

	cout << "\n\t\t\t\t\t\t请设置您的密码(不少于6位)：";
	cin >> Password;
	cin.ignore();
	outfile << "Password:" << Password << endl;

	outfile << ID << endl;
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t设置完成，您的ID是：" << ID << endl;
	outfile.close();

}

void boss::boss_enter()//登录
{
	int x,y,flag = 2;
	ifstream infile;
	system("CLS");
	infile.open("message.dat", ios::in);

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t请输入用户名：";
	cin >> Name_user;
	cin.ignore();

	cout << "\n\t\t\t\t\t\t请输入密码：";
	cin >> Password_user;
	cin.ignore();

	cout << "\n\t\t\t\t\t\t请输入ID：";
	cin >> ID_user;//3
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
	
		if ((m == 0) && (n == 0)&&(ID <= ID_user))//登陆成功
		{
			if (ID_user > ID)// 3  3
			{
				break;
			}
			cout << "\n\n\t\t\t\t\t\t密码正确,请稍后。。。" << endl;
			flag = 1;
			break;
		}
	}while (ID < ID_user);
	infile.close();
	if (flag == 1)
	{
		Sleep(5 * 500);
		while (1)
		{
			boss_display_select();
			//Returns_function();
		}
	}
	else
	{
		cout << "\n\t\t\t\t\t\t密码错误" << endl;
		system(0);
	}

}

void boss::boss_display_select()
{
		system("CLS");
		//system("color 3B");
		cout << "\t\t\t\t      O(∩_∩)O~~ 欢迎进入boss管理系统\n\n";
		cout << "\t\t\t\t╔*☆***◎***◇***☆*** 菜单 ***☆***◇***◎***☆*╗\n";
		cout << "\t\t\t\t|★|\t\t               \t\t\t|★|\n";
		cout << "\t\t\t\t|☆|\t\t 1.增加员工信息\t\t\t|☆|\n";
		cout << "\t\t\t\t|★|\t\t 2.查看员工信息\t\t\t|★|\n";
		cout << "\t\t\t\t|☆|\t\t 3.修改员工信息\t\t\t|☆|\n";
		cout << "\t\t\t\t|★|\t\t 4.员工信息删除\t\t\t|★|\n";
		cout << "\t\t\t\t|☆|\t\t 5.员工薪酬管理\t\t\t|☆|\n";
		cout << "\t\t\t\t|★|\t\t 6.资金管理          \t\t|★|\n";
		cout << "\t\t\t\t|★|\t\t 7.发放工资          \t\t|★|\n";
		cout << "\t\t\t\t|★|\t\t 8.返回\t\t\t\t|★|\n";
		cout << "\t\t\t\t|☆|\t\t               \t\t\t|☆|\n";
		cout << "\t\t\t\t╚*☆***◎***◇****☆****★****☆****◇***◎***☆*╝\n\n";
		cout << "\t\t\t\t请选择您要实现的功能选项 (1-8):";

		cin >> select;
		cin.ignore();

		switch (select)
		{
		case 1:
			increase_staff();
			select = 0;
			break;
		case 2:
			examine_staff();
			select = 0;
			break;
		case 3:
			amend_display();
			select = 0;
			break;
		case 4:
			deletion_staff();
			select = 0;
			break;
		case 5:
			salary();
			select = 0;
			break;
		case 6:
			select = 0;
			Funds_init(); //资金管理
			break;
		case 7:
			expend_management();
			select = 0;
			break;
		case 8:
			exit(EXIT_FAILURE);
			{
				system(0);
			}
		default:
			break;
		}
}

boss::boss()
{

}

boss::~boss()
{

}

