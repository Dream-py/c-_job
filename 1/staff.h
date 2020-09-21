#ifndef STAFF_H
#define STAFF_H

#include<iostream>
#include <windows.h>//¶Ô»°¿ò
#include <string>
#include <fstream>
#include <istream>
#include "amend.h"
#include "ygxg.h"
#include "examine.h"


using namespace std;

class staff:public YGXG , public examine
{
public:
	char xz;
	staff();
	~staff();
	void staff_display();
	void staff_enter();
	void staff_display_select();
	void staff_check();
private:
	int ID = 0;
	int ID_user;
	int select = 0;
	string Name;
	string Email;
	string Password;
	string Name_user;
	string Password_user;
	class user
	{
	private:
		string Shenfen;
		string Name;
		string Email;
		string Password;
	public:
		user()
		{
		};
	};
	struct career {
		char id[10];
		char name[10];
		char sex[2];
		int age;
		char position[20];
	};
};




#endif // !STAFF_H
