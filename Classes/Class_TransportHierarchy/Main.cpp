#include <iostream>
#include "TransportVehicle.h"

using namespace std;

void main()
{
	TransportVehicle t1;
	cout << t1.getVehicle() << endl;
	TransportVehicle t2("Defined vehicle");
	cout << t2.getVehicle() << endl;
	t2.setVehicleType("New defined vehicle");
	cout << t2.getVehicle() << endl;
	cout << t2.move() << endl;

	t1 = t2;
	cout << t2.getVehicle() << endl;

	LandVehicle l1;
	cout << l1.getVehicle() << endl;
	l1.setLandVehicleType("New land vehicle");
	cout << l1.getLandVehicleType() << endl;
	cout << l1.passengersCarried(30, 20) << endl;

	LandVehicle l2 = l1;
	cout << l2.getLandVehicleType() << endl;


	WaterVehicle w1("New water vehicle");
	cout << w1.getVehicle() << endl;
	cout << w1.getWaterVehicleType() << endl;
}