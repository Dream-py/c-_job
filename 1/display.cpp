#include "display.h"
#include "boss.h"
#include "staff.h"


void Display_main()//����
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "" << endl;
	}

	cout << "                                           ְ����Ϣ����ϵͳ" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                *****************************************************************************" << endl;


	for (i = 0; i < 5; i++)
	{
		cout << "                *                                                                           *" << endl;

	}
	cout << "                *                              ��ѡ���������(1��2)��                       *" << endl;
	cout << "                *                              (1)boss                                      *" << endl;
	cout << "                *                              (2)staff                                     *" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "                *                                                                           *" << endl;

	}
	cout << "                ************************��ӭʹ��ְ����Ϣ����ϵͳ*****************************" << endl;
	cout << "\n\n";
	cout << "\n                ��ѡ�����(���������˳�):" ;
	int choice;
	boss boss_user;
	staff staff_user;
	cin >> choice;
	switch (choice)
	{
		case 1://boss
			boss_user.boss_display();
			break;
		case 2://staff
			staff_user.staff_display();
			break;
		default://�˳�
		{
			system(0);
		}

	}

}
