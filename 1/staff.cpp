#include "staff.h"


void staff::staff_display()
{
	system("CLS");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "" << endl;
	}

	cout << "                                              *��ӭ����ְ��֮��*                                              " << endl;
	cout << "" << endl;
	cout << "                  *********************************************************************" << endl;
	cout << "                  *                               1.)��¼                             * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *                               2.)�˳�:                            * " << endl;
	cout << "                  *                                                                   * " << endl;
	cout << "                  *********************************************************************" << endl;
	cout << "                   ��ѡ���¼���˳�:";

	int choice;//ѡ�����
	cin >> choice;
	switch (choice)
	{
	case 1:
		staff_enter();//��¼()
		break;
	default://�˳�
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

	cout << "                                              *��ӭ����ְ��֮��*                                              " << endl;
	cout << "" << endl;
	cout << "                  *********************************************************************" << endl;
	cout << "                 *                                                                     *                              " << endl;

	cout << "                 *                             1. �������û���:                        *                              " << endl;
	cout << "" << endl;

	cout << "                 *                             2. ���������룺                         *                              " << endl;

	cout << "" << endl;
	cout << "                 *                             3. ������ID��                           *                              " << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "                 *                                                                     *" << endl;
		cout << "                  *********************************************************************" << endl;
		cout << "                   �û�����";
		cin >> Name_user;
		cout << "                   ���룺  ";
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
			int m = Name.compare(5, x, Name_user); //�Ƚ�

			infile >> Password;
			y = Password.size();
			int n = Password.compare(9, y, Password_user); //�Ƚ�

			infile >> ID;

			//cout << "M��" << m << endl;
			//cout << "N��" << n << endl;
			//cout << "i��" << ID << endl;


			if ((m == 0) && (n == 0) && (ID <= ID_user))//��½�ɹ�
			{
				if (ID_user > ID)// 3  3
				{
					break;
				}
				cout << "\n\n\t\t\t\t\t\t������ȷ" << endl;
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
			cout << "�������" << endl;
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

		cout << "                                               *��ӭ����ְ��֮��*" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "                  *******************************************************************************";


		for (i = 0; i < 5; i++)
		{
			cout << "                 *                                                                             *" << endl;

		}
		cout << "                 *                              ��ѡ�����Ĳ�����                               *" << endl;
		cout << "                 *                              �޸���Ϣ�밴��1��                              *" << endl;
		cout << "                 *                              �鿴��Ϣ�밴��2��                              *" << endl;
		cout << "                 *                              �˳�ϵͳ�밴��3��                              *" << endl;

		for (i = 0; i < 5; i++)
		{
			cout << "                 *                                                                             *" << endl;

		}
		cout << "                 *******************************��ӭ����Ա������*********************************" << endl;
		cout << "\n\n";
		cout << "\n                                                ��ѡ�����:";


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
			cout << "�˳���" << endl;
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
