#include "rentalcarreservation.h"

RentalCarReservation::RentalCarReservation(string id, string price, string fromDate, string toDate, string pickupLocation, string returnLocation, string company)
{
    this->id = stol(id);
    this->price = stod(price);
    this->fromDate = fromDate;
    this->toDate = toDate;
    this->pickupLocation = pickupLocation;
    this->returnLocation = returnLocation;
    this->company = company;
}
