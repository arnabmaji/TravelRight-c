#include <stdio.h>
#include "TravelData.h"
#include "UserData.h"
#include "WelcomePrompt.h"
#include "Destinations.h"
#include "DestinationSelection.h"
#include "PassengerSelection.h"
#include "DateSelection.h"
#include "Accommodation.h"
#include "LocalTravel.h"
#include "Billing.h"

void holdCommandLine(){
    char c;
    fflush(stdin);
    scanf("%c",&c);
}

int main() {
    showWelcomePrompt();
    selectPackage();
    selectPassengers();
    selectDate();
    selectAccommodationPackage();
    displayLocalTravelOptions();
    prepareBill();
    holdCommandLine();
    return 0;
}