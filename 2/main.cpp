#include <iostream>

using namespace std;

class display
{
private:
    
public:
    display();
    void messsage();
    void performance();
    void course();
};

void display::messsage()
{
    cout << "\t\t" <<"1.�����Ϣ" << endl;
    cout << "\t\t" <<"2.�޸���Ϣ" << endl;
    cout << "\t\t" <<"3.ɾ����Ϣ" << endl;
}
void display::performance()
{
    cout << "\t\t" <<"1.��ӳɼ�" << endl;
    cout << "\t\t" <<"2.�޸ĳɼ�" << endl;
    cout << "\t\t" <<"3.ɾ���ɼ�" << endl;
}
void display::course()
{
    cout << "\t\t" <<"1.��ӿγ�" << endl;
    cout << "\t\t" <<"2.�޸Ŀγ�" << endl;
    cout << "\t\t" <<"3.ɾ���γ�" << endl;
}

display::display()
{
    int num;

    cout << "��Ϣ����ϵͳ" << endl;

    cout << "1.ѧ����Ϣ����" << endl;
    cout << "2.ѧ���ɼ�����" << endl;
    cout << "3.ѧ���γ̹���" << endl;

    cout << "������ҳ�棺";
    cin >> num; 

    switch (num)
    {
        case 1:
            messsage();
            break;        
        case 2:
            performance();
            break;        
        case 3:
            course();
            break;
        default:
            cout << "�������˳���" << endl;
            break;
    }

}





int main()
{
    while (1)
    {
        display show;
    }
    
    



    system("pause");
    return 0;
}



//system("pause");