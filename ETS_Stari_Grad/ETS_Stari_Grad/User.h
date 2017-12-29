#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include <conio.h>
#include <windows.h>
#include<string>


class User
{
private:
	bool m_Logged_in = false;
	std::string m_Entered_user_id;
	std::string m_Entered_user_password;
	std::vector<std::string> m_File_user_name, m_File_password;

public:
	void print_log_in();
	void professor_or_student();
};

