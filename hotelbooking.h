#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H
using namespace std;
#include <iostream>

class HotelBooking
{
private:
    long id;
    double price;
    string fromDate;
    string toDate;
    string hotel;
    string town;
public:
    HotelBooking(string id,string price,string fromDate,string toDate,string hotel,string town);
};

#endif // HOTELBOOKING_H
