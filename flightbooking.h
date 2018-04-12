#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H
#include <iostream>


using namespace std;

class FlightBooking
{

private:
    long id;
    double price;
    string fromDate;
    string toDate;
    string toDest;
    string fromDest;
    string airline;

public:
    FlightBooking(string bid,string pRice,string frOmDate,string tODate,string toDEst,string froMDest,string aIrline);
};

#endif // FLIGHTBOOKING_H
