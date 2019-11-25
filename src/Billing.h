//
// Created by Arnab on 07-11-2019.
//

#ifndef TRAVELRIGHT_BILLING_H
#define TRAVELRIGHT_BILLING_H

#endif //TRAVELRIGHT_BILLING_H


void prepareBill(){
    printf("\n--------------------------------------------Invoice--------------------------------------------\n");

    Date currentDate = getCurrentDate();
    Time currentTime = getCurrentTime();
    printf("\nBooking Details:\n");
    printf("\tDate of Booking: %d:%d:%d\n", currentDate.day, currentDate.month, currentDate.year);
    printf("\tTime of Booking: %d:%d:%d\n", currentTime.hours, currentTime.mins, currentTime.secs);
    printf("\tBooking Platform: TravelRight CLI\n");
    //Getting total passengers
    int totalPassengers = ADULT_COUNT + CHILDREN_COUNT;

    Destination *destination[] = {NATIONAL_DESTINATIONS , INTERNATIONAL_DESTINATIONS};
    Destination *selectedDestination = &destination[SELECTED_TRIP_TYPE][SELECTED_DESTINATION];

    //Journey Details
    printf("\nJourney Details:\n");
    printf("\tDestination: %s\n", selectedDestination->name);
    printf("\tDate of Journey: %d:%d:%d\n",DATE_OF_JOURNEY.day
                    , DATE_OF_JOURNEY.month, DATE_OF_JOURNEY.year);
    printf("\tDate of Return: %d:%d:%d\n",DATE_OF_RETURN.day
            , DATE_OF_RETURN.month, DATE_OF_RETURN.year);
    printf("\tAdult(s): %d\n", ADULT_COUNT);
    printf("\tChildren: %d\n", CHILDREN_COUNT);

    //Determining Transportation cost
    printf("\nTransportation Details:\n");
    printf("\tDestination: %s\n", selectedDestination->name);
    printf("\tCarrier: %s\n", selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].carrierName);
    printf("\tClass of Travel: %s\n",selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].classOfTravel);
    printf("\tPrice: %ld(Per Head)\n", selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].baseFare);

    long transportationCost = totalPassengers * selectedDestination
            ->carriers[SELECTED_CLASS_OF_TRAVEL].baseFare;
    printf("\tTotal (For %d Passengers): %ld\n",totalPassengers, transportationCost );

    //Determining Accommodation Cost
    printf("\nAccommodation Details:\n");
    printf("\t%s Hotel(Price %d per head, per day)\n",
           HOTELS[SELECTED_TRIP_TYPE][SELECTED_ACCOMMODATION_TYPE].rating,
           HOTELS[SELECTED_TRIP_TYPE][SELECTED_ACCOMMODATION_TYPE].price
           + SEASON_STATUS * EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE]);
    printf("\t%s(%d per head, per day)\n",
           PACKAGES[SELECTED_TRIP_TYPE][SELECTED_PACKAGE_TYPE].name,
           PACKAGES[SELECTED_TRIP_TYPE][SELECTED_PACKAGE_TYPE].price);

    long accommodationCostPerDay = ((HOTELS[SELECTED_TRIP_TYPE][SELECTED_ACCOMMODATION_TYPE].price
            + (SEASON_STATUS * EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE]))
            + PACKAGES[SELECTED_TRIP_TYPE][SELECTED_PACKAGE_TYPE].price) * totalPassengers;

    long totalAccommodationCost = accommodationCostPerDay * TRIP_LENGTH;
    printf("\tCost Per Day: %ld\n", accommodationCostPerDay);
    printf("\tTotal (For %d days): %ld\n", TRIP_LENGTH, totalAccommodationCost);

    //Determining Local Travel cost if opted.
    printf("\nLocal Travel Details:\n");
    long localTravelCost = 0;
    if(SELECTED_LOCAL_TRAVEL_OPTION != -1){
        localTravelCost = LOCAL_TRAVEL[SELECTED_TRIP_TYPE][SELECTED_LOCAL_TRAVEL_OPTION].price
                * totalPassengers;
       printf("\t%s(%d per Head)\n", LOCAL_TRAVEL[SELECTED_TRIP_TYPE][SELECTED_LOCAL_TRAVEL_OPTION].name,
           LOCAL_TRAVEL[SELECTED_TRIP_TYPE][SELECTED_LOCAL_TRAVEL_OPTION].price);
    }
    printf("\tCost: %ld\n",localTravelCost);

    //Calculating total cost
    float totalBasePrice = (float) (transportationCost+totalAccommodationCost+localTravelCost);
    float gst = totalBasePrice * 0.18f;
    printf("Base Price: %.2f\n", totalBasePrice);
    printf("GST(of 18%%): %.2f\n", gst);
    printf("TOTAL Price: %.2f\n", totalBasePrice + gst);
    printf("\n--------------------------------------------Invoice--------------------------------------------\n");

    printf(".__________ ___     ___________ __     _____.___.             \n");
    printf("\\__    ___/|  |__ _____    ____ |  | __ \\__  |   | ____  __ __ \n");
    printf("  |    |   |  |  \\\\__  \\  /    \\|  |/ /  /   |   |/  _ \\|  |  \\\n");
    printf("  |    |   |   Y  \\/ __ \\|   |  \\    <   \\____   (  <_> )  |  /\n");
    printf("  |____|   |___|  (____  /___|  /__|_ \\  / ______|\\____/|____/ \n");
    printf("                \\/     \\/     \\/     \\/  \\/                    \n");
    printf("---------------------------2019 TravelRight Inc, All Rights Reserved--------------------------");

    //Confirmation Dialog
    MessageBox(0, "Your booking has been confirmed!", "Booking Status", MB_OK);
    MessageBox(0, "Your ticket has been saved!", "Ticket", MB_OK);
}

void saveBill(){
    FILE *ticket = fopen("ticket.txt", "w");

    fprintf(ticket,
            "\n--------------------------------------------Invoice--------------------------------------------\n");

    Date currentDate = getCurrentDate();
    Time currentTime = getCurrentTime();
    fprintf(ticket, "\nBooking Details:\n");
    fprintf(ticket, "\tDate of Booking: %d:%d:%d\n", currentDate.day, currentDate.month, currentDate.year);
    fprintf(ticket, "\tTime of Booking: %d:%d:%d\n", currentTime.hours, currentTime.mins, currentTime.secs);
    fprintf(ticket, "\tBooking Platform: TravelRight CLI\n");
    //Getting total passengers
    int totalPassengers = ADULT_COUNT + CHILDREN_COUNT;

    Destination *destination[] = {NATIONAL_DESTINATIONS , INTERNATIONAL_DESTINATIONS};
    Destination *selectedDestination = &destination[SELECTED_TRIP_TYPE][SELECTED_DESTINATION];

    //Journey Details
    fprintf(ticket, "\nJourney Details:\n");
    fprintf(ticket, "\tDestination: %s\n", selectedDestination->name);
    fprintf(ticket, "\tDate of Journey: %d:%d:%d\n", DATE_OF_JOURNEY.day
            , DATE_OF_JOURNEY.month, DATE_OF_JOURNEY.year);
    fprintf(ticket, "\tDate of Return: %d:%d:%d\n", DATE_OF_RETURN.day
            , DATE_OF_RETURN.month, DATE_OF_RETURN.year);
    fprintf(ticket, "\tAdult(s): %d\n", ADULT_COUNT);
    fprintf(ticket, "\tChildren: %d\n", CHILDREN_COUNT);

    //Determining Transportation cost
    fprintf(ticket, "\nTransportation Details:\n");
    fprintf(ticket, "\tDestination: %s\n", selectedDestination->name);
    fprintf(ticket, "\tCarrier: %s\n", selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].carrierName);
    fprintf(ticket, "\tClass of Travel: %s\n", selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].classOfTravel);
    fprintf(ticket, "\tPrice: %ld(Per Head)\n", selectedDestination->carriers[SELECTED_CLASS_OF_TRAVEL].baseFare);

    long transportationCost = totalPassengers * selectedDestination
            ->carriers[SELECTED_CLASS_OF_TRAVEL].baseFare;
    fprintf(ticket, "\tTotal (For %d Passengers): %ld\n", totalPassengers, transportationCost);

    //Determining Accommodation Cost
    fprintf(ticket, "\nAccommodation Details:\n");
    fprintf(ticket, "\t%s Hotel(Price %d per head, per day)\n",
            HOTELS[SELECTED_TRIP_TYPE][SELECTED_ACCOMMODATION_TYPE].rating,
           HOTELS[SELECTED_TRIP_TYPE][SELECTED_ACCOMMODATION_TYPE].price
           + SEASON_STATUS * EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE]);
    fprintf(ticket, "\t%s(%d per head, per day)\n",
            PACKAGES[SELECTED_TRIP_TYPE][SELECTED_PACKAGE_TYPE].name,
            PACKAGES[SELECTED_TRIP_TYPE][SELECTED_PACKAGE_TYPE].price);

    long accommodationCostPerDay = ((HOTELS[SELECTED_TRIP_TYPE][SELECTED_ACCOMMODATION_TYPE].price
                                     + (SEASON_STATUS * EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE]))
                                    + PACKAGES[SELECTED_TRIP_TYPE][SELECTED_PACKAGE_TYPE].price) * totalPassengers;

    long totalAccommodationCost = accommodationCostPerDay * TRIP_LENGTH;
    fprintf(ticket, "\tCost Per Day: %ld\n", accommodationCostPerDay);
    fprintf(ticket, "\tTotal (For %d days): %ld\n", TRIP_LENGTH, totalAccommodationCost);

    //Determining Local Travel cost if opted.
    fprintf(ticket, "\nLocal Travel Details:\n");
    long localTravelCost = 0;
    if(SELECTED_LOCAL_TRAVEL_OPTION != -1){
        localTravelCost = LOCAL_TRAVEL[SELECTED_TRIP_TYPE][SELECTED_LOCAL_TRAVEL_OPTION].price
                          * totalPassengers;
        fprintf(ticket, "\t%s(%d per Head)\n", LOCAL_TRAVEL[SELECTED_TRIP_TYPE][SELECTED_LOCAL_TRAVEL_OPTION].name,
                LOCAL_TRAVEL[SELECTED_TRIP_TYPE][SELECTED_LOCAL_TRAVEL_OPTION].price);
    }
    fprintf(ticket, "\tCost: %ld\n", localTravelCost);

    //Calculating total cost
    float totalBasePrice = (float) (transportationCost+totalAccommodationCost+localTravelCost);
    float gst = totalBasePrice * 0.18f;
    fprintf(ticket, "Base Price: %.2f\n", totalBasePrice);
    fprintf(ticket, "GST(of 18%%): %.2f\n", gst);
    fprintf(ticket, "TOTAL Price: %.2f\n", totalBasePrice + gst);
    fprintf(ticket,
            "\n--------------------------------------------Invoice--------------------------------------------\n");

    fclose(ticket);
}
