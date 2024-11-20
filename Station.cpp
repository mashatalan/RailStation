#include "Station.h"

void Station::addTrain()
{
	Train newTrain;
	newTrain.inputTrainInfo();
	trains.push_back(newTrain);
}

bool Station::areTrainsEmpty() const
{
		return trains.empty();
}

void Station::displayAllTrains() const
{
	if (areTrainsEmpty())
	{
		cout << "No trains. \n";
		return;
	}

	for (const auto& train:trains)
	{
		train.displayTrainInfo();
	}
}

void Station::searchByNumberTrain(int number) const
{
	
	auto it = find_if(trains.begin(), trains.end(), [number](const Train& train)
		{ return train.getNumberTrain() == number;
		});

	if (it != trains.end())
	{
		it->displayTrainInfo();
	}
	else
	{
		cout << "Train with number " << number << " not found.\n";
	}
}

void Station::searchByDepartureTime(const string& time) const
{
	auto it = find_if(trains.begin(), trains.end(), [&time](const Train& train) { 
		return train.getDepartureTime() == time;
		});
	if (it != trains.end())
	{
		it->displayTrainInfo();
	}
	else
	{
		cout << "No trains found for time : " << time;
	}
}

void Station::searchByDestinationStation(const string& station) const
{
	auto it = find_if(trains.begin(), trains.end(), [&station](const Train& train) {
		return train.getDestinationStation() == station;
		});

	if (it != trains.end())
	{
		it->displayTrainInfo();
	}
	else
	{
		cout << "No trains found for destination station. \n";
	}
}

int Station::getCountTrain() const
{
	return trains.size();
}
