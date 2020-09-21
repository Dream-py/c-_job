#ifndef DELE_H
#define DELE_H

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <istream>

using namespace std;

class deletion

{
public:
	deletion();
	~deletion();

	void deletion_staff(void);
	void dele_function(void);


	int staff_ID = 0;	
	string staff_name;		


private:
	int dele_ID;
	string dele_Name;
	string dele__gende;
	int dele__age;
	string dele__post;
	int dele__salary[4];
	int dele__salary_f;

	int dele_ID_user;
	int dele_ID_user_1;   //用来识别上一位
	string dele_Name_user;
	string dele__gende_user;
	int dele__age_user;
	string dele__post_user;
	int dele__salary_user[4];

	int dele_ID_z;
	int dele_Name_z;
	int dele__gende_z;
	int dele__age_z;
	int dele__post_z;
	int dele__salary_z[4];
	int dele__salary_z_f;



};


#endif // REMOVE_H_INCLUDED