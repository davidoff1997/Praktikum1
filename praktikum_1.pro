TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    travelagency.cpp \
    rwntalcarreservation.cpp \
    hotelbooking.cpp \
    flightbooking.cpp

HEADERS += \
    travelagency.h \
    hotelbooking.h \
    flightbooking.h \
    rentalcarreservation.h

DISTFILES += \
    Bookings.txt
