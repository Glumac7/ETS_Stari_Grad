#include "User.h"


void User::print_log_in()
{
	if (!m_Logged_in)
	{
		std::cout << "User: ";
		std::cin >> m_User_id;

		std::cout << "Password: ";
		std::cin >> m_User_password;
	}
}

void User::professor_or_student()
{
	std::ifstream myfile;

	myfile.open("Professor- Username and password.txt");

	std::string s, s1;

	std::vector<std::string> myfiles, myfiles2;
	while (!myfile.eof())
	{
		myfile >> s;
		myfiles.push_back(s);
		myfile >> s1;
		myfiles2.push_back(s1);
	}
			

	std::cout << myfiles.at(0) << "." << myfiles2.at(0) << "_" << myfiles.at(1);
		
	
	myfile.close();
	char first;
}