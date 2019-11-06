//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_DATESELECTION_H
#define TRAVELRIGHT_DATESELECTION_H

#endif //TRAVELRIGHT_DATESELECTION_H

#include <stdio.h>
#include "TravelData.h"
void selectDate(){
    printf("Please enter date of journey:(dd:mm:yyyy):\n");
    scanf("%d%*c%d%*c%d",&JOURNEY_START_DAY,&JOURNEY_START_MONTH,&JOURNEY_START_YEAR);
    printf("Please enter date of return:(dd:mm:yyyy):\n");
    scanf("%d%*c%d%*c%d",&JOURNEY_END_DAY,&JOURNEY_END_MONTH,&JOURNEY_END_YEAR);
    printf("Please verify your dates:\n");
    printf("\tDate of Journey:%02d:%02d:%d\n",JOURNEY_START_DAY,JOURNEY_START_MONTH,JOURNEY_START_YEAR);
    printf("\tDate of Return:%02d:%02d:%d\n",JOURNEY_END_DAY,JOURNEY_END_MONTH,JOURNEY_END_YEAR);
    printf("Enter 0 to confirm or 1 to enter again:\n");
    int confirmation;
    scanf("%d",&confirmation);
    while(confirmation < 0 || confirmation > 1){
        printf("not a valid selection.");
        printf("please try again!");
        scanf("%d",&confirmation);
    }

    if(confirmation == 0){
        //Save dates
    } else{
        selectDate();
    }
}

int getTripLength(){
    //TODO: Implement the moethod and find nunmber of days
}