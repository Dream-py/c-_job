#include "management.h" 

void management::Funds_init(void)
{
	ifstream infile_1;

	infile_1.open("funds.dat", ios::in);

	infile_1 >> asset;

	infile_1.close();
	system("cls");
	int check;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t��˾�ʲ�����ϵͳ" <<endl;

	cout << "\n\t\t\t\t\t\t��ǰ�����ʽ�Ϊ��" << asset << endl;

	while (1)
	{
		cout << "\n\t\t\t\t\t\t(1)�洢��" << endl;
		cout << "\n\t\t\t\t\t\t(2)֧����" << endl;
		cout << "\n\t\t\t\t\t\t��ѡ��洢��֧����";
		cin >> check;

		switch (check)
		{
		case 1:
			earning_management();	//����ҳ��
			break;
		case 2:
			expend_management();	//֧��ҳ��
			break;
		case 9:
			Funds_management();	    //�������ʲ�ҳ��
			break;
		default:
			break;			//�˳�
		}
		int y;
		cout << "\n\t\t\t\t\t\t������һ���棿��Y/N��:";
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
	
	int asset_user;//�ı������ʲ�
	ofstream outfile;
	outfile.open("funds.dat",ios::out);
	system("cls");
	cout << "\n\t\t\t\t\t\t����ı�����ʲ�Ϊ��";
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
			if (!(ch == ' ' || ch == '\n')) //��һ������������β�����ܴ��ڵ���Ч�ո�ͻ���
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

	cout << "\n\t\t\t\t\t\t����Ա��֧��Ϊ��" << m ;
	int y;
	cout << "\n\t\t\t\t\t\t������һ���棿��Y/N��:";
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
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t����������������";
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
			if (!(ch == ' ' || ch == '\n')) //��һ������������β�����ܴ��ڵ���Ч�ո�ͻ���
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
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t1����������֧��������û��������0��" ;
	cin >> expend_user;

	
	asset = asset - expend_user - m;
	cout << "\n\t\t\t\t\t\t����֧����ʣ�ࣺ" << asset;
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