#pragma once
#include <iostream>
#include <windows.h>//�Ի���
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
	int examine_ID_user = 0;		//���
	string examine_Name_user;		//����
	string examine__gender_user;	//�Ա�
	int	examine__age_user;			//����
	string examine__post_user;		//ְλ
	int	examine__salary_user[4];		//����


	int examine_ID = 0;		//���
	string examine_Name;		//����
	string examine__gende;	//�Ա�
	int	examine__age ;			//����
	string examine__post;		//ְλ
	int	examine__salary[4];		//����
	int	examine__salary_f;

};

#pragma once