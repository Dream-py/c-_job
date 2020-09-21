#pragma once
#include <iostream>
#include <windows.h>//对话框
#include <string>
#include <fstream>
#include <istream>
#include "increase.h"
#include "main.h"

using namespace std;


class examine
{
public:
	examine();
	~examine();

	void examine_staff(void);
	void examine_staff_display(void);

private:
	int examine_ID_user = 0;		//编号
	string examine_Name_user;		//姓名
	string examine__gender_user;	//性别
	int	examine__age_user;			//年龄
	string examine__post_user;		//职位
	int	examine__salary_user[4];		//工资


	int examine_ID = 0;		//编号
	string examine_Name;		//姓名
	string examine__gende;	//性别
	int	examine__age ;			//年龄
	string examine__post;		//职位
	int	examine__salary[4];		//工资
	int	examine__salary_f;

};

#pragma once