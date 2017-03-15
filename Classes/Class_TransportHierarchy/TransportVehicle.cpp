#include <iostream>
#include "TransportVehicle.h"

using namespace std;

// ----------------------- BASE CLASS -----------------------

TransportVehicle::TransportVehicle()
{
	vehicle = "Undefined vehicle";
}

TransportVehicle::TransportVehicle(string input)
{
	vehicle = input;
}

TransportVehicle::TransportVehicle(TransportVehicle& transportVehicle)
{
	vehicle = transportVehicle.vehicle;
}

int TransportVehicle::move()
{
	return 0;
}

void TransportVehicle::setVehicleType(string vType)
{
	vehicle = vType;
}

string TransportVehicle::getVehicle()
{
	return vehicle;
}

//--------------- DERIVED FROM BASE CLASS -----------------
//--------------------- LAND VEHICLE ----------------------

LandVehicle::LandVehicle()
{
	type = "Land vehicle";
}

LandVehicle::LandVehicle(string vType)
{
	type = vType;
}

LandVehicle::LandVehicle(LandVehicle& landVehicle)
{
	type = landVehicle.type;
}

int LandVehicle::move()
{
	return TransportVehicle::move();
}

int LandVehicle::move(int distance, int time)
{
	validateData(distance);
	validateData(time);
	return (distance / time);
}

int LandVehicle::passengersCarried(int totalPlaces, int freeplaces)
{
	validateData(totalPlaces);
	validateData(freeplaces);
	return (totalPlaces - freeplaces);
}

int LandVehicle::cargoCarried(int maxLoad, int freeLoad)
{
	validateData(maxLoad);
	validateData(freeLoad);
	return (maxLoad - freeLoad);
}

void LandVehicle::setLandVehicleType(string vType)
{
	type = vType;
}

string LandVehicle::getLandVehicleType()
{
	return type;
}

//--------------------- WATER VEHICLE ----------------------

WaterVehicle::WaterVehicle()
{
	type = "Water vehicle";
}

WaterVehicle::WaterVehicle(string vType)
{
	type = vType;
}

WaterVehicle::WaterVehicle(WaterVehicle& waterVehicle)
{
	type = waterVehicle.type;
}

int WaterVehicle::move()
{
	return TransportVehicle::move();
}

int WaterVehicle::move(int distance, int time)
{
	validateData(distance);
	validateData(time);
	return (distance / time);
}

int WaterVehicle::passengersCarried(int totalPlaces, int freeplaces)
{
	validateData(totalPlaces);
	validateData(freeplaces);
	return (totalPlaces - freeplaces);
}

int WaterVehicle::cargoCarried(int maxLoad, int freeLoad)
{
	validateData(maxLoad);
	validateData(freeLoad);
	return (maxLoad - freeLoad);
}

void WaterVehicle::setWaterVehicleType(string vType)
{
	type = vType;
}

string WaterVehicle::getWaterVehicleType()
{
	return type;
}

//--------------------- AIR VEHICLE ----------------------

AirVehicle::AirVehicle()
{
	type = "Air vehicle";
}

AirVehicle::AirVehicle(string vType)
{
	type = vType;
}

AirVehicle::AirVehicle(AirVehicle& airVehicle)
{
	type = airVehicle.type;
}

int AirVehicle::move()
{
	return TransportVehicle::move();
}

int AirVehicle::move(int distance, int time)
{
	validateData(distance);
	validateData(time);
	return (distance / time);
}

int AirVehicle::passengersCarried(int totalPlaces, int freeplaces)
{
	validateData(totalPlaces);
	validateData(freeplaces);
	return (totalPlaces - freeplaces);
}

int AirVehicle::cargoCarried(int maxLoad, int freeLoad)
{
	validateData(maxLoad);
	validateData(freeLoad);
	return (maxLoad - freeLoad);
}

void AirVehicle::setAirVehicleType(string vType)
{
	type = vType;
}

string AirVehicle::getAirVehicleType()
{
	return type;
}