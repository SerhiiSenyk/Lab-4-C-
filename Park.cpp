#include "Park.h"

void Park::setAddress(string address)
{
	address_ = address;
}

string Park::getAddress() const
{
	return address_;
}

void Park::setLengthCycleTracks(float lengthCycleTracks)
{
	lengthCycleTracks_ = lengthCycleTracks;
}

float Park::getLengthCycleTracks() const
{
	return lengthCycleTracks_;
}

void Park::setPriceTicket(float priceTicket)
{
	priceOfEntranceTicket_ = priceTicket;
}

float Park::getPriceTicket() const
{
	return priceOfEntranceTicket_;
}

void Park::setType(string type)
{
	this->type = type;
}

string Park::getType() const
{
	return type;
}

void Park::setYearFoundation(uint yearFoundation)
{
	yearFoundation = yearFoundation;
}

uint Park::getYearFoundation() const
{
	return yearFoundation;
}

void Park:: outputOnDisplayInformation()
{
	cout << "Address : " << getAddress() << endl;
	cout << "LengthCycleTracks : " << getLengthCycleTracks() << " m" << endl;
	cout << "PriceTicket : " << getPriceTicket() << " UAH" << endl;
	cout << "Year fundation : " << getYearFoundation() << endl;
	cout << "Type : " << getType() << endl;
	cout << "Name : " << name << endl;
	cout << "Area : " << area << " Ha" << endl;
}

Park::Park()
{
	address_  = "No address";
	lengthCycleTracks_ = 0.0;
	priceOfEntranceTicket_ = 0.0;
	name = "No name";
	area = 0.0;
	type = "No type";
	yearFoundation = 1900;
}

Park::Park(string adress, float lenghtCycleTracks, float priceOfEntranceTicket, string type, uint yearFoundation)
{
	address_ = adress;
	lengthCycleTracks_ = lenghtCycleTracks;
	priceOfEntranceTicket_ = priceOfEntranceTicket;
	this->type = type;
	this->yearFoundation = yearFoundation;
}

Park::~Park()
{
	cout << "Destructor\n";
}
