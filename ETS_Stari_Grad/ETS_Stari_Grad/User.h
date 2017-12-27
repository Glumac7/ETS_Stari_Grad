#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include<time.h>
#include<fstream>

class User
{
private:
	bool m_Logged_in = false;
	std::string m_Entered_user_id = "fsgsg";
	std::string m_Entered_user_password = "dfsf";
	std::vector<std::string> m_File_user_name, m_File_password;

public:
	void print_log_in();
	void professor_or_student();
};

