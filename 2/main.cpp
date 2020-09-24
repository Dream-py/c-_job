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
    cout << "\t\t" <<"1.添加信息" << endl;
    cout << "\t\t" <<"2.修改信息" << endl;
    cout << "\t\t" <<"3.删除信息" << endl;
}
void display::performance()
{
    cout << "\t\t" <<"1.添加成绩" << endl;
    cout << "\t\t" <<"2.修改成绩" << endl;
    cout << "\t\t" <<"3.删除成绩" << endl;
}
void display::course()
{
    cout << "\t\t" <<"1.添加课程" << endl;
    cout << "\t\t" <<"2.修改课程" << endl;
    cout << "\t\t" <<"3.删除课程" << endl;
}

display::display()
{
    int num;

    cout << "信息管理系统" << endl;

    cout << "1.学生信息管理" << endl;
    cout << "2.学生成绩管理" << endl;
    cout << "3.学生课程管理" << endl;

    cout << "请输入页面：";
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
            cout << "错误！已退出！" << endl;
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