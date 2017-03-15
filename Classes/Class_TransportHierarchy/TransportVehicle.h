#ifndef __TRANSPORTVEHICLE_H__
#define __TRANSPORTVEHICLE_H__
#include <iostream>
#include <string>

using namespace std;

class TransportVehicle
{
protected:
	string vehicle;

public:
	TransportVehicle();
	TransportVehicle(string);
	TransportVehicle(TransportVehicle&);

	virtual int move();
	template <typename E>
	void validateData(E data)
	{
		if (data < 0)
		{
			throw runtime_error("IncorrectInputException");
		}
	}

	void setVehicleType(string);
	string getVehicle();
};

class LandVehicle : public TransportVehicle
{
private:
	string type;
public:
	LandVehicle();
	LandVehicle(string);
	LandVehicle(LandVehicle&);

	int move();
	int move(int, int);
	int passengersCarried(int, int);
	int cargoCarried(int, int);

	void setLandVehicleType(string);
	string getLandVehicleType();
};

class WaterVehicle : public TransportVehicle
{
private:
	string type;
public:
	WaterVehicle();
	WaterVehicle(string);
	WaterVehicle(WaterVehicle&);

	int move();
	int move(int, int);
	int passengersCarried(int, int);
	int cargoCarried(int, int);

	void setWaterVehicleType(string);
	string getWaterVehicleType();
};


class AirVehicle : public TransportVehicle
{
private:
	string type;
public:
	AirVehicle();
	AirVehicle(string);
	AirVehicle(AirVehicle&);

	int move();
	int move(int, int);
	int passengersCarried(int, int);
	int cargoCarried(int, int);

	void setAirVehicleType(string);
	string getAirVehicleType();
};
#endif // !__TRANSPORTVEHICLE_H__

/*
1. Base class - Transport vehicle
void move(); // for redefinition

2. Derived class
		Ground
		Water
		Air
*/