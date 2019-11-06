//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_PASSENGERSELECTION_H
#define TRAVELRIGHT_PASSENGERSELECTION_H

#endif //TRAVELRIGHT_PASSENGERSELECTION_H

#include <stdio.h>
#include "TravelData.h"

void selectPassengers(){
    int adults;
    int children;
    printf("Please select your co-passengers carefully...\n");
    printf("\tEnter total numbers of adult:\n");
    scanf("%d",&adults);
    printf("\tEnter total numbers of children:(note: child below 4 years are not to be considered.)\n");
    scanf("%d",&children);
    printf("Please verify your co-passengers:\n");
    printf("\tAdults: %d\n",adults);
    printf("\tChildren: %d\n",children);
    printf("Enter 0 to confirm or 1 to try again:\n");
    int confirmation;
    scanf("%d",&confirmation);
    while(confirmation < 0 || confirmation > 1){
        printf("not a valid selection.\n");
        printf("try again!");
        scanf("%d",&confirmation);
    }
    if(confirmation == 0){
        //Save passengers list
        ADULT_COUNT = adults;
        CHILDREN_COUNT = children;
        printf("Passengers successfully added!\n");
    } else{
        selectPassengers();
    }
}