#include "management.h" 

void management::Funds_init(void)
{
	ifstream infile_1;

	infile_1.open("funds.dat", ios::in);

	infile_1 >> asset;

	infile_1.close();
	system("cls");
	int check;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t公司资产管理系统" <<endl;

	cout << "\n\t\t\t\t\t\t当前可用资金为：" << asset << endl;

	while (1)
	{
		cout << "\n\t\t\t\t\t\t(1)存储：" << endl;
		cout << "\n\t\t\t\t\t\t(2)支出：" << endl;
		cout << "\n\t\t\t\t\t\t请选择存储或支出：";
		cin >> check;

		switch (check)
		{
		case 1:
			earning_management();	//收入页面
			break;
		case 2:
			expend_management();	//支出页面
			break;
		case 9:
			Funds_management();	    //隐藏总资产页面
			break;
		default:
			break;			//退出
		}
		int y;
		cout << "\n\t\t\t\t\t\t返回上一界面？（Y/N）:";
		cin >> y;
		if (y == 'Y')
		{

		}
		else
		{
			system(0);
		}
	}

}

void management::Funds_management(void)
{
	
	int asset_user;//改变用总资产
	ofstream outfile;
	outfile.open("funds.dat",ios::out);
	system("cls");
	cout << "\n\t\t\t\t\t\t你想改变的总资产为：";
	cin >> asset_user;
	cin.ignore();
	outfile << asset_user << endl;

	outfile.close();

}

void management::salary(void)
{
	ifstream infile;
	infile.open("staff.dat", ios::in | ios::ate);
	int len = -1;
	char ch, f = 0;
	infile.seekg(0, ios::end);
	int fsize = infile.tellg();
	while (1)
	{
		infile.seekg(len, ios::end);
		if (-len == fsize)
		{
			infile >> expend_ID_user;
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
				infile >> expend_ID_user;
				break;
			}
		}
		len--;
	}
	infile.close();
	system("CLS");
	cout << expend_ID << endl;

	//expend_ID_user = expend_ID_user + 1;

	fstream infile_1;

	infile_1.open("staff.dat", ios::in);

	int m = 0;
	do
	{

		infile_1 >> expend_Name;
		infile_1 >> expend__gende;
		infile_1 >> expend__age;
		infile_1 >> expend__post;
		infile_1 >> examine__salary;
		infile_1 >> expend_ID;

		m = examine__salary + m;

	} while (expend_ID_user > expend_ID);
	infile_1.close();

	cout << "\n\t\t\t\t\t\t本月员工支出为：" << m ;
	int y;
	cout << "\n\t\t\t\t\t\t返回上一界面？（Y/N）:";
	cin >> y;
	if (y == 'Y')
	{

	}
	else
	{
		system(0);
	}
}

void management::earning_management(void)
{
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t请输入收入总数：";
	cin >> earning_user;

	asset = earning_user + asset;

	ofstream infile_1;

	infile_1.open("funds.dat", ios::out);

	infile_1 << asset;

	infile_1.close();

}

void management::expend_management(void)
{	
	
	ifstream infile_1;

	infile_1.open("funds.dat", ios::in);

	infile_1 >> asset;

	infile_1.close();

	ifstream infile;
	infile.open("staff.dat", ios::in | ios::ate);
	int len = -1;
	char ch, f = 0;
	infile.seekg(0, ios::end);
	int fsize = infile.tellg();
	while (1)
	{
		infile.seekg(len, ios::end);
		if (-len == fsize)
		{
			infile >> expend_ID_user;
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
				infile >> expend_ID_user;
				break;
			}
		}
		len--;
	}
	infile.close();
	system("CLS");
	cout << expend_ID << endl;

	//expend_ID_user = expend_ID_user + 1;

	fstream file;
	
	file.open("staff.dat", ios::in);

	int m = 0;
	do
	{

		file >> expend_Name;
		file >> expend__gende;
		file >> expend__age;
		file >> expend__post;
		file >> examine__salary;
		file >> expend_ID;

		m = examine__salary + m;

	} while (expend_ID_user > expend_ID);

	file.close();
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t1请输入其他支出总数，没有则输入0：" ;
	cin >> expend_user;

	
	asset = asset - expend_user - m;
	cout << "\n\t\t\t\t\t\t本月支出后剩余：" << asset;
	Sleep(5 * 700);
	ofstream file_2;

	file_2.open("funds.dat", ios::out);

	file_2 << asset <<endl;

	file_2.close();

}


management::management()
{

}

management::~management()
{

}