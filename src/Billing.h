//
// Created by Arnab on 07-11-2019.
//

#ifndef TRAVELRIGHT_BILLING_H
#define TRAVELRIGHT_BILLING_H

#endif //TRAVELRIGHT_BILLING_H


void prepareBill(){
    printf("----------------------------------Invoice----------------------------------\n");
    //Getting total passengers
    int totalPassengers = ADULT_COUNT + CHILDREN_COUNT;

    //Determining Transportation cost
    Destination *destination[] = {NATIONAL_DESTINATIONS , INTERNATIONAL_DESTINATIONS};
    Destination *selectedDestination = &destination[SELECTED_TRIP_TYPE][SELECTED_DESTINATION];
    printf("Transportation Cost:\n");
    printf("\tDestination: %s\n", selectedDestination->name);
    printf("\tCarrier: %s\n", selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].carrierName);
    printf("\tClass of Travel: %s\n",selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].classOfTravel);
    printf("\tPrice: %ld(Per Head)\n", selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].baseFare);

    long transportationCost = totalPassengers * selectedDestination
            ->carriers[SELECTED_CLASS_OF_TRAVEL].baseFare;
    printf("\tTotal (For %d Passengers): %ld\n",totalPassengers, transportationCost );

    //Determining Accommodation Cost
    printf("Accommodation Cost:\n");
    long accommodationCostPerDay = ( hotelPrice[SELECTED_TRIP_TYPE].prices[SELECTED_ACCOMMODATION_TYPE]
            + (SEASON_STATUS * EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE])
            + (packagePrice[SELECTED_TRIP_TYPE].prices[SELECTED_PACKAGE_TYPE] * SELECTED_ACCOMMODATION_TYPE) )
                    * totalPassengers;

    long totalAccommodationCost = accommodationCostPerDay * TRIP_LENGTH;
    printf("\tCost Per Day: %ld\n", accommodationCostPerDay);
    printf("\tTotal (For %d days): %ld\n", TRIP_LENGTH, totalAccommodationCost);

    //Determining Local Travel cost if opted.
    printf("Local Travel Cost:\n");
    long localTravelCost = 0;
    if(SELECTED_LOCAL_TRAVEL_OPTION != -1){
        localTravelCost = localTravelPrices[SELECTED_TRIP_TYPE][SELECTED_LOCAL_TRAVEL_OPTION] * totalPassengers;
    }
    printf("\tCost: %ld\n",localTravelCost);
    printf("TOTAL COST: %ld\n",transportationCost+totalAccommodationCost+localTravelCost);
    printf("----------------------------------Invoice----------------------------------\n");

    printf(".__________ ___     ___________ __     _____.___.             \n");
    printf("\\__    ___/|  |__ _____    ____ |  | __ \\__  |   | ____  __ __ \n");
    printf("  |    |   |  |  \\\\__  \\  /    \\|  |/ /  /   |   |/  _ \\|  |  \\\n");
    printf("  |    |   |   Y  \\/ __ \\|   |  \\    <   \\____   (  <_> )  |  /\n");
    printf("  |____|   |___|  (____  /___|  /__|_ \\  / ______|\\____/|____/ \n");
    printf("                \\/     \\/     \\/     \\/  \\/                    \n");
}