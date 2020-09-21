#include "boss.h"

void boss::boss_display()
{
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t*(1)��¼\n\t\t\t\t\t\t*(2)ע��\n";
	cout << "\n\t\t\t\t\t\t��ѡ��1��2:";
	int choice;//ѡ�����
	cin >> choice;
	switch (choice)
	{
	case 1:
		boss_enter();
		break;
	case 2:
		boss_register();
		break;
	case 9://�˳�
		exit(EXIT_FAILURE);
		{
			system(0);
		}
	}
}

void boss::boss_register()//ע��
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
			if (!(ch == ' ' || ch == '\n')) //��һ������������β�����ܴ��ڵ���Ч�ո�ͻ���
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

	
	
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t�����������û�����";
	cin >> Name;
	cin.ignore();
	outfile << "Name:" << Name << endl;

	cout << "\n\t\t\t\t\t\t��������������(������6λ)��";
	cin >> Password;
	cin.ignore();
	outfile << "Password:" << Password << endl;

	outfile << ID << endl;
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t������ɣ�����ID�ǣ�" << ID << endl;
	outfile.close();

}

void boss::boss_enter()//��¼
{
	int x,y,flag = 2;
	ifstream infile;
	system("CLS");
	infile.open("message.dat", ios::in);

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t�������û�����";
	cin >> Name_user;
	cin.ignore();

	cout << "\n\t\t\t\t\t\t���������룺";
	cin >> Password_user;
	cin.ignore();

	cout << "\n\t\t\t\t\t\t������ID��";
	cin >> ID_user;//3
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
	
		if ((m == 0) && (n == 0)&&(ID <= ID_user))//��½�ɹ�
		{
			if (ID_user > ID)// 3  3
			{
				break;
			}
			cout << "\n\n\t\t\t\t\t\t������ȷ,���Ժ󡣡���" << endl;
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
		cout << "\n\t\t\t\t\t\t�������" << endl;
		system(0);
	}

}

void boss::boss_display_select()
{
		system("CLS");
		//system("color 3B");
		cout << "\t\t\t\t      O(��_��)O~~ ��ӭ����boss����ϵͳ\n\n";
		cout << "\t\t\t\t�X*��***��***��***��*** �˵� ***��***��***��***��*�[\n";
		cout << "\t\t\t\t|��|\t\t               \t\t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 1.����Ա����Ϣ\t\t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 2.�鿴Ա����Ϣ\t\t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 3.�޸�Ա����Ϣ\t\t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 4.Ա����Ϣɾ��\t\t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 5.Ա��н�����\t\t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 6.�ʽ����          \t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 7.���Ź���          \t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t 8.����\t\t\t\t|��|\n";
		cout << "\t\t\t\t|��|\t\t               \t\t\t|��|\n";
		cout << "\t\t\t\t�^*��***��***��****��****��****��****��***��***��*�a\n\n";
		cout << "\t\t\t\t��ѡ����Ҫʵ�ֵĹ���ѡ�� (1-8):";

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
			Funds_init(); //�ʽ����
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

