//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_LOCALTRAVEL_H
#define TRAVELRIGHT_LOCALTRAVEL_H

#endif //TRAVELRIGHT_LOCALTRAVEL_H

#include <stdio.h>
#include "TravelData.h"
void displayLocalTravelOptions(){
    printf("Do you want to opt for Local Travel for transportation or sight seeing?\n");
    printf("Enter 0 to allow or 1 to deny.\n");
    int confirmation;
    scanf("%d",&confirmation);
    if(confirmation == 1){
        printf("Thank you for your choice!\n");
        LOCAL_TRAVEL_OPTION = 0;
        return;
    }
    printf("Please select your local travel options:\n");
    printf("\t1. For Transportation only\n");
    printf("\t2. For Sight Seeing only\n");
    printf("\t3. Both\n");
    int localTravelOption;
    scanf("%d",&localTravelOption);
    while(localTravelOption < 1 || localTravelOption > 3){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        scanf("%d",&localTravelOption);
    }
    printf("Enter 0 to confirm or 1 to try again!\n");
    scanf("%d",&confirmation);
    if(confirmation == 0){
        //Save Local Travel Options
        LOCAL_TRAVEL_OPTION = localTravelOption;
    } else {
        displayLocalTravelOptions();
    }

}