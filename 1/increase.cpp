#include "increase.h"


void increase::increase_staff(void)
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
			infile >> staff_ID;
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
				infile >> staff_ID;
				break;
			}
		}
		len--;
	}
	infile.close();

	staff_ID++;

	system("CLS");
	ofstream outfile;

	outfile.open("staff.dat", ios::app | ios::out);

	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t请输入要注册的员工用户名：";
	cin >> staff_name;
	cin.ignore();
	outfile << "Name:" << staff_name << endl;

	cout << "\n\t\t\t\t\t请输入要注册的员工性别：";
	cin >> staff_gender;
	cin.ignore();
	outfile << "gender:" << staff_gender << endl;

	cout << "\n\t\t\t\t\t请输入要注册的员工年龄：";
	cin >> staff_age;
	cin.ignore();
	outfile << staff_age << endl;

	cout << "\n\t\t\t\t\t请输入要注册的员工职位：";
	cin >> staff_post;
	cin.ignore();
	outfile << "post:" << staff_post << endl;

	cout << "\n\t\t\t\t\t请输入要注册的员工工资：";
	//cin >> staff_salary[0] >> staff_salary[1] >> staff_salary[2] >> staff_salary[3];
	//cin.ignore();

	staff_salary[0] = getchar() - 48;
	staff_salary[1] = getchar() - 48;
	staff_salary[2] = getchar() - 48;
	staff_salary[3] = getchar() - 48;
	//cin >> staff_salary[0] >> endl;
	
	staff_salary_f = staff_salary[0] * 1000 + staff_salary[1] * 100 + staff_salary[2] * 10 + staff_salary[3];
	//cout << staff_salary[0] <<endl;
	//cout << staff_salary[1] << endl;
	//cout << staff_salary[2] << endl;
	//cout << staff_salary[3] << endl;
	
	//outfile << "salary:" << staff_salary << endl;
	outfile << staff_salary_f << endl;
	//cout << staff_salary_f << endl;
	outfile << staff_ID << endl;
	cout << "\n\t\t\t\t\t设置完成，您的ID是：" << staff_ID << endl;

	outfile.close();
}

increase::increase()
{
}

increase::~increase()
{
}

