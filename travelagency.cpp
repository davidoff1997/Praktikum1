#include <iostream>
#include "travelagency.h"
#include <sstream>
using namespace std;

TravelAgency::TravelAgency(vector<RentalCarReservation*>rentalCarReservations,vector<HotelBooking*>hotelBookings,vector<FlightBooking*>flightBookings)
{
    this->rentalCarReservations = rentalCarReservations;
    this->flightBookings = flightBookings;
    this->hotelBookings = hotelBookings;
}

void TravelAgency::readFile(){

    ifstream datei;
    datei.open("beispiel.txt",ios::in);

    if(!datei){
        cerr <<"Datei kann nicht geoeffnet werden.\n";
        exit(-1);
    }


    while (!datei.eof()) {
        string zeile;
        getline(datei,zeile);

        stringstream zeilenstream;
        zeilenstream<<zeile;


        int i = 0;
        string wertSpalte1,wertSpalte2,wertSpalte3,wertSpalte4,wertSpalte5,wertSpalte6,wertSpalte7,wertSpalte8;
        vector<string> werteSpalte1,werteSpalte2, werteSpalte3,werteSpalte4,werteSpalte5,werteSpalte6,werteSpalte7,werteSpalte8;

        while(!zeilenstream.eof()){
            switch (i) {
            case 0:
                getline(zeilenstream,wertSpalte1,'|');
                break;
            case 1:
                getline(zeilenstream,wertSpalte2,'|');
                break;
            case 2:
                getline(zeilenstream,wertSpalte3,'|');
                break;
            case 3:
                getline(zeilenstream,wertSpalte4,'|');
                break;
            case 4:
                getline(zeilenstream,wertSpalte5,'|');
                break;
            case 5:
                getline(zeilenstream,wertSpalte6,'|');
                break;
            case 6:
                getline(zeilenstream,wertSpalte7,'|');
                break;
            case 7:
                getline(zeilenstream,wertSpalte8,'|');
                break;
            default:
                break;
            }
        }
        werteSpalte1.push_back(wertSpalte1);
        werteSpalte2.push_back(wertSpalte2);
        werteSpalte3.push_back(wertSpalte3);
        werteSpalte4.push_back(wertSpalte4);
        werteSpalte5.push_back(wertSpalte5);
        werteSpalte6.push_back(wertSpalte6);
        werteSpalte7.push_back(wertSpalte7);
        werteSpalte8.push_back(wertSpalte8);

        for (int i = 1;i<9;i++){
            int type = werteSpalte1[i][0];
            switch (type){
            case int('F'):
                FlightBooking  flight =  FlightBooking(werteSpalte2[i],werteSpalte3[i],werteSpalte4[i],werteSpalte5[i],werteSpalte6[i],werteSpalte7[i],werteSpalte8[i]);
                FlightBooking realflight = &flight;
                flightBookings.push_back(realflight);
                break;
            case int('R'):
                rentalCarReservations.push_back(RentalCarReservation(werteSpalte2[i],werteSpalte3[i],werteSpalte4[i],werteSpalte5[i],werteSpalte6[i],werteSpalte7[i],werteSpalte8[i]));
                break;
            case int('H'):
                hotelBookings.push_back(HotelBooking(werteSpalte2[i],werteSpalte3[i],werteSpalte4[i],werteSpalte5[i],werteSpalte6[i],werteSpalte7[i],werteSpalte8[i]));
                break;
            default:
                break;

            }
        }


    }







}
