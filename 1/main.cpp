#include "main.h"
#include "display.h"
#include "increase.h"
#include "boss.h"
#include "examine.h"

int main()
{
    //system("color 3B");
    Display_main();//显示界面　　１注册；２登录；3退出
    system("pause");
    return 0;
}

void Returns_function(void)
{
	int y;
	cout << "返回上一界面？（Y/N）" << endl;
	cin >> y;
	if (y == 'Y')
	{
		
	}
	else
	{
		system("0");
	}
}
