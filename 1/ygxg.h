#pragma once
#ifndef YGXG_H
#define YGXG_H

#include<iostream>
#include <windows.h>//对话框
#include <string>
#include <fstream>
#include <istream>
#include "main.h"


using namespace std;

class YGXG
{
public:
	YGXG();
	~YGXG();

	void amend_display(void);
	void amend_function(void);


private:
	int amend_ID;
	string amend_Name;
	string amend__gende;
	int amend__age;
	string amend__post;
	int amend__salary[4];
	int amend__salary_f; //非数组

	int amend_ID_user;
	int amend_ID_user_1;   //用来识别上一位
	string amend_Name_user;
	string amend__gende_user;
	int amend__age_user;
	string amend__post_user;
	int amend__salary_user[4];
	int amend__salary_user_f;


	int amend_Name_z;
	int amend__gende_z;
	int amend__age_z;
	int amend__post_z;
	int amend__salary_z;

	int amend__salary_user_q;
	int amend__salary_user_b;
	int amend__salary_user_s;
	int amend__salary_user_g;
};


#endif // !YGXG_H
