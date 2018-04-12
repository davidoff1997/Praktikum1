#include "hotelbooking.h"

HotelBooking::HotelBooking(string id,string price,string fromDate,string toDate,string hotel,string town)
{

this->id= stol(id);
this->fromDate = stod(fromDate);
this->toDate = toDate;
this->hotel = hotel;
this->town = town;
}
