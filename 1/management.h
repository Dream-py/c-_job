#pragma once
#include <iostream>
#include <windows.h>//�Ի���
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

	void Funds_init(void);			//�ʽ�����ļ���ʼ��
	void Funds_management(void);
	void earning_management(void);  //�������
	void expend_management(void);	//֧������
	void salary(void);

private:

	int asset = 0;//���ʲ�
	
	int earning;//������
	int expend = 0;//��֧��

	int earning_user;
	int expend_user;

	int expend_ID_user;

	int examine__salary;   //���ʽ�

	int  expend_ID = 0;		//���
	string  expend_Name;		//����
	string  expend__gende;	//�Ա�
	int	 expend__age;			//����
	string  expend__post;		//ְλ
	int	 expend__salary[4];		//����
	int	 expend__salary_f;


};



#pragma once