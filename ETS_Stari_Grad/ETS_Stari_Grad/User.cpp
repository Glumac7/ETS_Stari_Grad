#include "User.h"


void User::print_log_in()
{
	if (!m_Logged_in)
	{
		std::cout << "User: ";
		std::cin >> m_Entered_user_id;//Inputs the username

		std::cout << "Password: ";
		std::cin >> m_Entered_user_password;//Inputs the password

		professor_or_student();
	}
}

void User::professor_or_student()
{

	std::ifstream myfile;

	myfile.open("Professor- Username and password.txt");//Opens the file...

	bool flag = true;
	std::string s, s1;//Local string

	
	while (!myfile.eof()) //While there is still text in the file...
	{
		myfile >> s;//Puts the username in a local string s...
		m_File_user_name.push_back(s);//Then pushes it to user_name which is a vector

		myfile >> s1;//Puts the password in a local string s1
		m_File_password.push_back(s1);//Then pushes it to password which is a vector
	}
	
	for (int i = 0; i < m_File_user_name.size(); i++)//Goes form the first element to the last so taht it can compare the input username to the professors one, and password
	{
		if (m_Entered_user_id == m_File_user_name.at(i))
			if (m_Entered_user_password == m_File_password.at(i))
			{
				std::cout << "Dear professor. Pleas wait for the file to open...\n";
				flag = false;
				system("START FILOZOFIJA.docx");
			}
	}

	if (flag)//If the username and password are not form a professor but rather form a student...
	{
		std::cout << "Dear student. Please wait for the file to open...\n";
		system("START FILOZOFIJApdf.pdf");
	}
		
	myfile.close();
}