#ifndef INCREASE_H
#define INCREASE_H

#include <iostream>
#include <windows.h>//�Ի���
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


	int staff_ID = 0;		//���
	string staff_name;		//����
	string staff_gender;	//�Ա�
	int	staff_age;			//����
	string staff_post;		//ְλ
	int	staff_salary[4];		//����
	int	staff_salary_f;    // ��

private:

};


#endif // !INCREASE_H
#pragma once
