#include "User.h"


void User::print_log_in()
{
	if (!m_Logged_in)
	{
		std::cout << "User: ";
		std::cin >> m_Entered_user_id;

		std::cout << "Password: ";
		std::cin >> m_Entered_user_password;

		professor_or_student();
	}
}

void User::professor_or_student()
{
	std::ifstream myfile;

	myfile.open("Professor- Username and password.txt");//Opens the file...

	std::string s, s1;

	
	while (!myfile.eof()) //While there is still text in the file...
	{
		myfile >> s;//Puts the username in a local string s...
		m_File_user_name.push_back(s);//Then pushes it to user_name which is a vector

		myfile >> s1;//Puts the password in a local string s1
		m_File_password.push_back(s1);//Then pushes it to password which is a vector
	}
	
	for (int i = 0; i <= m_Entered_user_id.size(); i++)
	{
		if (m_Entered_user_id == m_File_user_name.at(i))
			if (m_Entered_user_password == m_File_password.at(i))
			{
				std::cout << "Pleas wait for the file to open...\n";
				system("START FILOZOFIJA.docx");
			}
	}
		
	
	myfile.close();
}