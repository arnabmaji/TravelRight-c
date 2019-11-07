#include <stdio.h>
#include "TravelData.h"
#include "UserData.h"
#include "Destinations.h"
#include "DestinationSelection.h"
#include "PassengerSelection.h"
#include "DateSelection.h"
#include "Accommodation.h"
#include "LocalTravel.h"
#include "Billing.h"


int main() {
    selectPackage();
    selectPassengers();
    selectDate();
    selectAccommodationPackage();
    displayLocalTravelOptions();
    prepareBill();
    return 0;
}