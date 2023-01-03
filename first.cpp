#include <iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	// Quantity 
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchiken = 0;
	// food items sold
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schiken = 0;
	// Total price of items
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chiken = 0;

	cout << "\n\t Quantity of items we have";
	cout << "\n Rooms available: ";
	cin >> Qrooms;
	cout << "\n Quantity of pasta: ";
	cin >> Qpasta;
	cout << "\n Quantity of burgers: ";
	cin >> Qburger;
	cout << "\n Quantity of noodles: ";
	cin >> Qnoodles;
	cout << "\n Quantity of shakes: ";
	cin >> Qshake;
	cout << "\n Quantity of chicken: ";
	cin >> Qchiken;

	m:

	cout << "\n\t\t\t Please select from the given menu options";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) Burgers";
	cout << "\n4) Noodles";
	cout << "\n5) Shake";
	cout << "\n6) Chicken";
	cout << "\n7) Information regarding sales and collection";
	cout << "\n8) Exit";

	cout << "\n\n Please enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1: 
		cout << "\n\n Enter the number of rooms you want: ";
		cin >> quant;
		if (Qrooms - Srooms >= quant)
		{
			Srooms = Srooms + quant;
			Total_rooms = Total_rooms + quant * 1200;
			cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you";
		}
		else
		
			cout << "\n\t only " << Qrooms - Srooms << " rooms remaining in hotel";
			break;
	
	case 2:
		cout << "\n\n Enter the quantity of pasta you want: ";
		cin >> quant;
		if (Qpasta - Spasta >= quant)
		{
			Spasta = Spasta + quant;
			Total_pasta = Total_pasta + quant * 250;
			cout << "\n\n\t\t processing " << quant << " pasta for your order";
		}
		else

			cout << "\n\t only " << Qpasta - Spasta << " pasta remaining in hotel";
		break;

	case 3:
		cout << "\n\n Enter the quantity of burgers you want: ";
		cin >> quant;
		if (Qburger - Sburger >= quant)
		{
			Sburger = Sburger + quant;
			Total_burger = Total_burger + quant * 120;
			cout << "\n\n\t\t processing " << quant << " burgers for your order";
		}
		else

			cout << "\n\t only " << Qburger - Sburger << " burgers remaining in hotel";
		break;

	case 4:
		cout << "\n\n Enter the quantity of noodles you want: ";
		cin >> quant;
		if (Qnoodles - Snoodles >= quant)
		{
			Snoodles = Snoodles + quant;
			Total_noodles = Total_noodles + quant * 140;
			cout << "\n\n\t\t processing " << quant << " noodles for your order";
		}
		else

			cout << "\n\t only " << Qburger - Sburger << " noodles remaining in hotel";
		break;

	case 5:
		cout << "\n\n Enter the quantity of shakes you want: ";
		cin >> quant;
		if (Qshake - Sshake >= quant)
		{
			Sshake = Sshake + quant;
			Total_shake = Total_shake + quant * 120;
			cout << "\n\n\t\t processing " << quant << " shakes for your order";
		}
		else

			cout << "\n\t only " << Qshake - Sshake << " shakes remaining in hotel";
		break;

	case 6:
		cout << "\n\n Enter the quantity of chicken you want: ";
		cin >> quant;
		if (Qchiken - Schiken >= quant)
		{
			Schiken = Schiken + quant;
			Total_chiken = Total_chiken + quant * 150;
			cout << "\n\n\t\t processing " << quant << " chicken for your order";
		}
		else

			cout << "\n\t only " << Qchiken - Schiken << " chicken remaining in hotel";
		break;

	case 7:
		cout << "\n\t\tDetails of sale and collection";
		cout << "\n\n Number of rooms we had: " << Qrooms;
		cout << "\n\n Number of rooms we gave to customers " << Srooms;
		cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
		cout << "\n\n Total rooms $ for the day: " << Total_rooms;

		cout << "\n\n Number of pasta we had: " << Qpasta;
		cout << "\n\n Number of pasta we gave to customers " << Spasta;
		cout << "\n\n Remaining pasta: " << Qpasta - Spasta;
		cout << "\n\n Total pasta $ for the day: " << Total_pasta;

		cout << "\n\n Number of burgers we had: " << Qburger;
		cout << "\n\n Number of burgers we gave to customers " << Sburger;
		cout << "\n\n Remaining burgers: " << Qburger - Sburger;
		cout << "\n\n Total burgers $ for the day: " << Total_burger;

		cout << "\n\n Number of noodles we had: " << Qnoodles;
		cout << "\n\n Number of noodles we gave to customers " << Snoodles;
		cout << "\n\n Remaining noodles: " << Qnoodles - Snoodles;
		cout << "\n\n Total noodles $ for the day: " << Total_noodles;
		
		cout << "\n\n Number of shakes we had: " << Qshake;
		cout << "\n\n Number of shakes we gave to customers " << Sshake;
		cout << "\n\n Remaining shakes: " << Qshake - Sshake;
		cout << "\n\n Total shakes $ for the day: " << Total_shake;

		cout << "\n\n Number of chicken we had: " << Qchiken;
		cout << "\n\n Number of chicken we gave to customers " << Schiken;
		cout << "\n\n Remaining chicken: " << Qchiken - Schiken;
		cout << "\n\n Total chicken $ for the day: " << Total_chiken;

		cout << "\n\n\n Total collection for the day: " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chiken;
		break;
	case 8:
		exit(0);

	default:
		cout << "\n Please select only from the numbers showed above";

	} 

goto m;
}   