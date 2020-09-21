#pragma once
#ifndef BOSS_H
#define BOSS_H

#include<iostream>
#include <windows.h>//�Ի���
#include <string>
#include <fstream>
#include <istream>
#include "increase.h"
#include "examine.h"
#include "management.h" 
#include "main.h"
#include "amend.h"
#include "dele.h"

using namespace std;


class boss: public increase, public examine,public management, public amend,public deletion
{
public:
	boss();
	~boss();

	void boss_display();		//��¼����
	void boss_display_select();	//ѡ���ܽ���
	void boss_register();		//ע��
	void boss_enter();			//��¼

private:
	int ID = 0;
	int ID_user;
	int select = 0;
	string Name;
	string Email;
	string Password;
	string Name_user;
	string Password_user;

};





#endif // BOSS_H
