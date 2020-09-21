#pragma once
#include <iostream>
#include <windows.h>//对话框
#include <string>
#include <fstream>
#include <istream>
#include "main.h"

using namespace std;

class management
{
public:
	management();
	~management();

	void Funds_init(void);			//资金管理文件初始化
	void Funds_management(void);
	void earning_management(void);  //收入管理
	void expend_management(void);	//支出管理
	void salary(void);

private:

	int asset = 0;//总资产
	
	int earning;//总收入
	int expend = 0;//总支出

	int earning_user;
	int expend_user;

	int expend_ID_user;

	int examine__salary;   //总资金

	int  expend_ID = 0;		//编号
	string  expend_Name;		//姓名
	string  expend__gende;	//性别
	int	 expend__age;			//年龄
	string  expend__post;		//职位
	int	 expend__salary[4];		//工资
	int	 expend__salary_f;


};



#pragma once