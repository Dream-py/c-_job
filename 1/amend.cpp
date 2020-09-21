#include "amend.h"

void amend::amend_display(void)
{
	int x,z, flag = 2;

	system("CLS");

	fstream infile_1;

	infile_1.open("staff.dat", ios::in | ios::out);

	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t请输入ID：";
	cin >> amend_ID_user_1;//15
	cin.ignore();

	amend_ID_user = (amend_ID_user_1) -1;//15-1
	
	
	//cout << amend_ID_user << endl;


	do
	{
		infile_1 >> amend_Name;
		infile_1 >> amend__gende;
		infile_1 >> amend__age;
		infile_1 >> amend__post;

		//amend__salary_f = amend__salary[0] * 1000 + amend__salary[1] * 100 + amend__salary[2] * 10 + amend__salary[3];
		infile_1 >> amend__salary_f;

		infile_1 >> amend_ID;
		//cout << amend_ID << endl;

		if ((amend_ID == amend_ID_user))//登陆成功
		{
			//if (amend_ID_user > amend_ID)// 3  3
			//{
			//	break;
			//}
			cout << "\n\t\t\t\t\t\t查找到正确ID" << endl;
			infile_1 >> amend_Name;
			amend_Name_z = infile_1.tellp();
			//cout << "amend_Name_z:" << amend_Name_z << endl;

			//cout << amend_Name << endl;

			infile_1 >> amend__gende;
			amend__gende_z = infile_1.tellg();
			//cout << "amend__gende_z:" << amend__gende_z << endl;

			infile_1 >> amend__age;
			amend__age_z = infile_1.tellg();
			//cout << "amend__age_z:" << amend__age_z << endl;

			infile_1 >> amend__post;
			amend__post_z = infile_1.tellg();
			//cout << "amend__post_z:" << amend__post_z << endl;

			infile_1 >> amend__salary_f;
			amend__salary_z = infile_1.tellg();
			//cout << "amend__salary_z:" << amend__salary_z << endl;

			cout << "\n\t\t\t\t\t\t您修改的ID用户名为：" << amend_Name << endl;
			infile_1.close();
			Sleep(5 * 500);
			amend_function();
			flag = 1;
			break;
		}
	} while (amend_ID < amend_ID_user);//X 14
	infile_1.close();
	if(flag != 1)
	{
		cout << "\n\t\t\t\t\t\t查无此人" << endl;
		system("0");
	}
}

void amend::amend_function(void)
{
	int x;
	//system("CLS");

	ofstream infile_1;

	infile_1.open("\n\t\t\t\t\t\tstaff.dat", ios::out| ios::in);


	cout << "\n\t\t\t\t\t\t（1）性别：" << endl;
	cout << "\n\t\t\t\t\t\t（2）年龄：" << endl;
	cout << "\n\t\t\t\t\t\t（3）职位：" << endl;
	cout << "\n\t\t\t\t\t\t（4）工资：" << endl;
	cout << "\n\t\t\t\t\t\t（5）返回：" << endl;
	cout << "\n\t\t\t\t\t\t请问您要修改哪一项内容：";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "\n\t\t\t\t\t\t将性别修改为：";
		cin >> amend__gende_user;
		cin.ignore();
		infile_1.seekp(amend_Name_z+2);
		infile_1 << "gender:" << amend__gende_user << endl;
		break;
	case 2:
		cout << "\n\t\t\t\t\t\t将年龄修改为：" << endl;
		cin >> amend__age_user;
		cin.ignore();
		infile_1.seekp(amend__gende_z);
		infile_1.seekp(2, ios::cur);
		infile_1 << amend__age_user << endl;
		break;
	case 3:
		cout << "\n\t\t\t\t\t\t将职位修改为：" << endl;
		cin >> amend__post_user;
		cin.ignore();
		infile_1.seekp(amend__age_z);
		infile_1.seekp(2, ios::cur);
		infile_1 << "post:" << amend__post_user << endl;
		break;
	case 4:
		cout << "\n\t\t\t\t\t\t将工资修改为：";
		//cin >> amend__salary_user[0] >> amend__salary_user[1] >> amend__salary_user[2] >> amend__salary_user[3];
		cin.ignore();
		amend__salary_user[0] = getchar() - 48;
		amend__salary_user[1] = getchar() - 48;
		amend__salary_user[2] = getchar() - 48;
		amend__salary_user[3] = getchar() - 48;
		//if (getchar() == 10)
		//{
		//	amend__salary_user[0] = NULL;
		//}
		//else
		//{
		//	amend__salary_user[0] = getchar() - 48;
		//}
		//if (getchar() == 10)
		//{
		//	amend__salary_user[1] = NULL;
		//}
		//else
		//{
		//	amend__salary_user[1] = getchar() - 48;
		//}
		//if (getchar() == 10)
		//{
		//	amend__salary_user[2] = NULL;
		//}
		//else
		//{
		//	amend__salary_user[2] = getchar() - 48;
		//}

		//if (getchar() == 10)
		//{
		//	amend__salary_user[3] = NULL;
		//}
		//else
		//{
		//	amend__salary_user[3] = getchar() - 48;
		amend__salary_user_f = amend__salary_user[0] * 1000 + amend__salary_user[1] * 100 + amend__salary_user[2] * 10 + amend__salary_user[3];

		infile_1.seekp(amend__post_z + 2);
		

		if (amend__salary_user_f > 999 && amend__salary_user_f < 10000)
			{
				amend__salary_user_q = amend__salary_user_f / 1000;
				amend__salary_user_b = amend__salary_user_f % 1000 / 100;
				amend__salary_user_s = amend__salary_user_f % 1000 % 100 / 10;
				amend__salary_user_g = amend__salary_user_f % 1000 % 100 % 10;

				infile_1 << amend__salary_user_q << amend__salary_user_b << amend__salary_user_s << amend__salary_user_g;

			}
			else if (amend__salary_user_f > 99 && amend__salary_user_f < 1000)
			{	
				amend__salary_user_q = '0';
				amend__salary_user_b = amend__salary_user_f / 100;
				amend__salary_user_s = amend__salary_user_f % 100 / 10;
				amend__salary_user_g = amend__salary_user_f % 10;
				cout << amend__salary_user_b << amend__salary_user_s << amend__salary_user_g <<endl;
				infile_1 << amend__salary_user_b << amend__salary_user_s << amend__salary_user_g;
			}
			else if (amend__salary_user_f > 9 && amend__salary_user_f < 100)
			{
				amend__salary_user_q = '0';
				amend__salary_user_b = '0';
				amend__salary_user_s = amend__salary_user_f / 10;
				amend__salary_user_g = amend__salary_user_f % 10;
				infile_1 << amend__salary_user_s << amend__salary_user_g;
			}
			else if (amend__salary_user_f >= 0 && amend__salary_user_f < 10)
		{
			amend__salary_user_q = '0';
			amend__salary_user_b = '0';
			amend__salary_user_s = '0';
			amend__salary_user_g = amend__salary_user_f % 10;
			infile_1 << amend__salary_user_g;
		}
			
		break;
	default:
		break;
	}
	infile_1.close();
}

amend::amend()
{}
amend::~amend()
{}

