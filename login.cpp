#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
	int c;
	cout << "\t\t\t______________________________________________\n\n\n";
	cout << "\t\t\t          Welcome to the login page              \n\n\n";
	cout << "\t\t\t_________________     MENU      ___________________\n\n\n";
	cout << "                                                           \n\n\n";
	cout << "\t | Press 1 to Login                     |" << endl;
	cout << "\t | Press 2 to Register                  |" << endl;
	cout << "\t | Press 3 if you forgor your password  |" << endl;
	cout << "\t | Press 4 to Exit                      |" << endl;
	cout << "\n\t\t\t Please enter your choice: ";
	cin >> c;
	cout << endl;

	switch (c)
	{
	case 1:
		login();
		break;
	case 2:
		registration();
		break;
	case 3:
		forgot();
		break;

	case 4:
		cout << "\n\t\t\t Thank you! Exit...";
		break;

	default:
		system("cls");
		cout << "\t\t\t Please select from the options given above\n" << endl;
		main(); 

	}
} 
void login()
{
	int count;
	string userID, password, id, pass;
	system("cls");
	cout << "\t\t\t Please enter the username and password: " << endl;
	cout << "\t\t\t Username: ";
	cin >> userID;
	cout << "\t\t\t Password: ";
	cin >> password;

	ifstream input("records.txt");

	while (input >> id >> pass)
	{
		if (id == userID && pass == password)
		{
			count = 1;
			system("cls");

		}
	}
	input.close();
	if (count == 1)
	{
		cout << userID << "\n Your login has been succesful\n";
		main();
	}
	else {
		cout << "\n Login ERROR\n Please check your username and pass";
		main();

	      }
} 
void registration() {
		string ruserID, rpassword, rid, rpass;
		system("cls");
		cout << "\t\t\t Enter the username: ";
		cin >> ruserID;
		cout << "\t\t\t Enter the password: ";
		cin >> rpassword;

		ofstream f1("records.txt", ios::app);
		f1 << ruserID << ' ' << rpassword << endl;
		system("cls");
		cout << "\n\t\t\t Registration is succesful\n";
		main();
       }
void forgot() {
	int option;
	system("cls");
	cout << "\t\t\t You forgot the password? No worries\n";
	cout << "Press 1 to search your id by username: " << endl;
	cout << "Press 2 to go back to the main menu" << endl;
	cout << "\t\t\t Enter your choice: ";
	cin >> option;
	switch (option)
	{
	case 1:
	{
		int count = 0;
		string suserID, sID, spass;
		cout << "\n\t\t\t Enter the username which you remembered: ";
		cin >> suserID;

		ifstream f2("records.txt");
		while (f2 >> sID >> spass)
		{
			if (sID == suserID)
			{
				count = 1;
			}
		}
		f2.close();
		if (count == 1)
		{
			cout << "\n\n Your account is found\n";
			cout << "\n\n Your password is:" << spass;
			main();
		}
		else {
			cout << "\n\t Sorry! your account is not found!\n";
			main();
		}
	}
	case 2:
	{
		main();

	}
	default:
		cout << "\t\t\t wrong choice, please select from above" << endl;
		forgot();


	
	break;
 }

}



