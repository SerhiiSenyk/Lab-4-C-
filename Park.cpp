#include "Park.h"

void Park::setAddress(string address)
{
	address_ = address;
}

string Park::getAddress() const
{
	return address_;
}

void Park::setLengthCycleTracks(float lenght)
{
	lengthCycleTracks_ = lenght;
}

float Park::getLengthCycleTracks() const
{
	return lengthCycleTracks_;
}

void Park::setPriceTicket(float price)
{
	priceTikcet_ = price;
}

float Park::getPriceTicket() const
{
	return priceTikcet_;
}

void Park::setType(string type)
{
	this->type = type;
}

string Park::getType() const
{
	return type;
}

void Park::setYearFoundation(uint year)
{
	yearFoundation = year;
}

uint Park::getYearFoundation() const
{
	return yearFoundation;
}

void Park:: show(Park park)
{
	cout << "Address : " << park.getAddress() << endl;
	cout << "LengthCycleTracks : " << park.getLengthCycleTracks() << " m" << endl;
	cout << "PriceTicket : " << park.getPriceTicket() << " UAH" << endl;
	cout << "Year fundation : " << park.getYearFoundation() << endl;
	cout << "Type : " << park.getType() << endl;
	cout << "Name : " << park.name << endl;
	cout << "Area : " << park.area << " Ha" << endl;
}

Park::Park()
{
	address_  = "No address";
	lengthCycleTracks_ = 0.0;
	priceTikcet_ = 0.0;
	name = "No name";
	area = 0.0;
	type = "No type";
	yearFoundation = 1900;
}

Park::Park(string adress, uint lenghtCycleTracks, float price, string type, uint yearFoundation)
{
	address_ = adress;
	lengthCycleTracks_ = lenghtCycleTracks;
	priceTikcet_ = price;
	this->type = type;
	this->yearFoundation = yearFoundation;
}

Park::~Park()
{
	cout << "DESTRUCTOR\n";
}
