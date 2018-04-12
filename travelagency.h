#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include "rentalcarreservation.h"
#include "hotelbooking.h"
#include "flightbooking.h"
#include <iostream>
#include<vector>
using namespace std;


class TravelAgency
{
private:
  vector<RentalCarReservation*>rentalCarReservations;
  vector<HotelBooking*>hotelBookings;
  vector<FlightBooking*>flightBookings;



public:
  void readFile();
    TravelAgency(vector<RentalCarReservation*>rentalCarReservations,vector<HotelBooking*>hotelBookings,vector<FlightBooking*>flightBookings);


};

#endif // TRAVELAGENCY_H
