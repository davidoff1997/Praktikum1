#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H
using namespace std;
#include <iostream>


class RentalCarReservation
{
private:
    long id;
    double price;
    string fromDate;
    string toDate;
    string pickupLocation;
    string returnLocation;
    string company;
public:
    RentalCarReservation(string id, string price, string fromDate, string toDate, string pickupLocation, string returnLocation, string company);
};

#endif // RENTALCARRESERVATION_H
