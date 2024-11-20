#include <iostream>
#include "Station.h"

using namespace std;


int main()
{
	Station station;
	int choice;

	do
	{
		
		cout << "\n\n Menu \n\n";
		cout << "1. Add train.\n";
		cout << "2. Display all trains \n";
		cout << "3. Search train by number.\n";
		cout << "4. Search train by departure time.\n";
		cout << "5. Search train by destination station\n";
		cout << "0. Exit. \n\n\n";
		cout << "Enter your choice : ";
		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 1:
		{
			station.addTrain();
			break;
		}
		case 2:
		{
			cout << "All trains : " << station.getCountTrain() << "\n\n";
			station.displayAllTrains();
			break;
		}
		case 3: {
			int numberTrain;
			cout << "Enter train number to search : ";
			cin >> numberTrain;
			cin.ignore();
			station.searchByNumberTrain(numberTrain);
			break;
		}
		case 4:
		{
			string time;
			cout << "Enter time for search train : ";
			getline(cin, time);
			station.searchByDepartureTime(time);
			break;
		}
		case 5:
		{
			string destanationStation;
			cout << "Enter destination station to search: ";
			getline(cin, destanationStation);
			station.searchByDestinationStation(destanationStation);
			break;
		}
		}
	} while (choice != 0);
}

