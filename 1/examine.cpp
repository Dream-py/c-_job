#include "examine.h"

void examine::examine_staff(void)
{
	int x, y, flag = 2;
	fstream infile_1;
	system("CLS");
	infile_1.open("staff.dat", ios::in);

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t�������û�����";
	cin >> examine_Name_user;
	cin.ignore();

	cout << "\n\t\t\t\t\t\t������ID��";
	cin >> examine_ID_user;
	cin.ignore();

	do
	{

		infile_1 >> examine_Name;
		x = examine_Name.size();
		int m = examine_Name.compare(5, x, examine_Name_user); //�Ƚ�

		infile_1 >> examine__gende;
		infile_1 >> examine__age;
		infile_1 >> examine__post;
		//examine__salary_user_f = examine__salary_user[0]*1000 + examine__salary_user[1]*100 + examine__salary_user[2]*10 + examine__salary_user[3];
		infile_1 >> examine__salary_f;


		infile_1 >> examine_ID;

		if ((m == 0) && (examine_ID <= examine_ID_user))//��½�ɹ�
		{
			if (examine_ID_user > examine_ID)// 3  3
			{
				break;
			}
			cout << "\n\t\t\t\t\t\t������ȷ,���Ժ󡣡���" << endl;
			flag = 1;
			break;
		}
	} while (examine_ID < examine_ID_user);
	infile_1.close();
	if (flag == 1)				//��ݷ���
	{
		cout << "\n\t\t\t\t\t\t���ڲ��ң�" << endl;
		Sleep(5 * 500);
		//examine__salary += 200;
		examine_staff_display();
		int y;
		cout << "\n\t\t\t\t\t\t������һ���棿��Y/N��:" ;
		cin >> y;
		if (y == 'Y')
		{
			
		}
		else
		{
			system(0);
		}
		
	}
	else
	{
		cout << "\n\t\t\t\t\t\t���޴���" << endl;
		system(0);
	}
}

void examine::examine_staff_display()
{
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tԱ����ϢΪ��" << endl;
	cout << "\n\t\t\t\t\t\t" << examine_Name << endl;
	cout << "\n\t\t\t\t\t\t" << examine__gende << endl;
	cout << "\n\t\t\t\t\t\tage:"<< examine__age << endl;
	cout << "\n\t\t\t\t\t\t"<< examine__post << endl;
	cout << "\n\t\t\t\t\t\tsalary:"<< examine__salary_f << endl;

	cout << "\n\t\t\t\t\t\t��ʾ���" << endl;
	Sleep(5 * 100);
	exit(EXIT_FAILURE);
	{
		system(0);
	}

}

examine::examine()
{
}

examine::~examine()
{
}

