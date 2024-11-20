#pragma once
#include <vector>
#include <algorithm>
#include "Train.h"

class Station
{
	vector<Train> trains;
public:
	void addTrain();
	bool areTrainsEmpty() const;
	void displayAllTrains()const;
	void searchByNumberTrain(int) const;
	void searchByDepartureTime(const string&) const;
	void searchByDestinationStation(const string&) const;
	int getCounTrain() const;	
};

