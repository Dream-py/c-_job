#include "main.h"
#include "display.h"
#include "increase.h"
#include "boss.h"
#include "examine.h"

int main()
{
    //system("color 3B");
    Display_main();//��ʾ���桡����ע�᣻����¼��3�˳�
    system("pause");
    return 0;
}

void Returns_function(void)
{
	int y;
	cout << "������һ���棿��Y/N��" << endl;
	cin >> y;
	if (y == 'Y')
	{
		
	}
	else
	{
		system("0");
	}
}
