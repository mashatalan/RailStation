#pragma once
#include <iostream>
#include <string>
using namespace std;

class Train
{
	int numberTrain;
	string departureTime;
	string destinationStation;

public:
	Train();
	Train(int, string, string);
	int getNumberTrain() const;
	string getDepartureTime() const;
	string getDestinationStation();
	void inputTrainInfo();
	void displayTrainInfo() const;

};

