#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<fstream>

class User
{
private:
	bool m_Logged_in = false;
	std::string m_User_id;
	std::string m_User_password;

public:
	void print_log_in();
	void professor_or_student();
};

