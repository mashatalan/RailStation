#include "Train.h"

Train::Train() : numberTrain{0}, departureTime{ "" }, destinationStation{""}{}

Train::Train(int number, string time, string station) : numberTrain{ number }, departureTime{ time }, destinationStation{station}{}

int Train::getNumberTrain() const
{
	return this->numberTrain;
}

string Train::getDepartureTime() const
{
	return this->departureTime;
}

string Train::getDestinationStation()
{
	return this->destinationStation;
}

void Train::inputTrainInfo()
{
	cout << "Enter train number : ";
	cin >> this->numberTrain;
	cin.ignore();
	cout << "Enter departure time : ";
	getline(cin, this->departureTime);
	cout << "Enter destination station : ";
	getline(cin, this->destinationStation);
}

void Train::displayTrainInfo() const
{
	cout << "Number train : " << this->numberTrain << "departure time : " << this->destinationStation << "destination station : " << this->destinationStation << "\n";
}
