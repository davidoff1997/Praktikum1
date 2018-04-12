#include "flightbooking.h"


FlightBooking::FlightBooking(string bid,string pRice,string frOmDate,string tODate,string toDEst,string froMDest,string aIrline)
{
id=stol(bid);
price=stod(pRice);
toDest=toDEst;
toDate=tODate;
fromDate=frOmDate;
airline=aIrline;
fromDest=froMDest;
}
