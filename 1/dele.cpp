#include "dele.h"


void deletion::deletion_staff(void)
{
	int x, z, flag = 2;

	system("CLS");

	fstream infile_1;

	infile_1.open("staff.dat", ios::in | ios::out);

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t请输入被删除的员工ID：";
	cin >> dele_ID_user_1;
	cin.ignore();

	dele_ID_user = (dele_ID_user_1)-1;

	do
	{

		infile_1 >> dele_Name;
		infile_1 >> dele__gende;
		infile_1 >> dele__age;
		infile_1 >> dele__post;

		//dele__salary_f = dele__salary[0] + dele__salary[1] + dele__salary[2] + dele__salary[3];

		infile_1 >> dele__salary_f;
		infile_1 >> dele_ID;

		if ((dele_ID == dele_ID_user))//登陆成功
		{
			//if (dele_ID_user > dele_ID)// 3  3
			//{
			//	break;
			//}
			cout << "\n\t\t\t\t\t\t查找到ID正确" << endl;
			infile_1 >> dele_Name;

			dele_Name_z = infile_1.tellp();
			//cout << "dele_Name_z:" << dele_Name_z << endl;

			infile_1 >> dele__gende;
			dele__gende_z = infile_1.tellg();
			//cout << "dele__gende_z:" << dele__gende_z << endl;

			infile_1 >> dele__age;
			dele__age_z = infile_1.tellg();
			//cout << "dele__age_z:" << dele__age_z << endl;

			infile_1 >> dele__post;
			dele__post_z = infile_1.tellg();
			//cout << "dele__post_z:" << dele__post_z << endl;

			infile_1 >> dele__salary_f;
			dele__salary_z_f = infile_1.tellg();
			//cout << "dele__salary_z:" << dele__salary_z << endl;

			//infile_1 >> dele_ID_z;
			//dele_ID_z = infile_1.tellg();
			//cout << "dele_ID_user:" << dele_ID_z << endl;

			cout << "\n\t\t\t\t\t\t您删除的ID用户名为：" << dele_Name << endl;
			Sleep(5 * 500);
			infile_1.close();
			
			dele_function();
			flag = 1;
			break;
		}
	} while (dele_ID < dele_ID_user);
	infile_1.close();
	if (flag != 1)
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t查无此人" << endl;
		system("0");
	}
}

void deletion::dele_function(void)
{
	int x;
	//system("CLS");

	ofstream infile_1;

	infile_1.open("staff.dat", ios::out | ios::in);

	infile_1.seekp(dele__salary_z_f +2);

	infile_1 << 0;

	infile_1.close();
}

deletion::deletion()
{
}

deletion::~deletion()
{
}