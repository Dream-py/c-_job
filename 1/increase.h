#ifndef INCREASE_H
#define INCREASE_H

#include <iostream>
#include <windows.h>//对话框
#include <string>
#include <fstream>
#include <istream>
#include "main.h"

using namespace std;

class increase
{
public:
	increase();
	~increase();

	void increase_staff(void);


	int staff_ID = 0;		//编号
	string staff_name;		//姓名
	string staff_gender;	//性别
	int	staff_age;			//年龄
	string staff_post;		//职位
	int	staff_salary[4];		//工资
	int	staff_salary_f;    // 非

private:

};


#endif // !INCREASE_H
#pragma once
