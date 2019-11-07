//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_LOCALTRAVEL_H
#define TRAVELRIGHT_LOCALTRAVEL_H

#endif //TRAVELRIGHT_LOCALTRAVEL_H

void displayLocalTravelOptions(){
    printf("Do you want to opt for Local Travel for transportation or sight seeing?\n");
    printf("Enter 0 to allow or 1 to deny.\n");
    int confirmation;
    scanf("%d",&confirmation);
    if(confirmation == 1){
        printf("Thank you for your choice!\n");
        SELECTED_LOCAL_TRAVEL_OPTION = 0;
        return;
    }
    printf("Please select your local travel options:\n");
    printf("\t1. For Transportation only(%d Per Head)\n",localTravelPrices[SELECTED_TRIP_TYPE][0]);
    printf("\t2. For Sight Seeing only(%d Per Head)\n",localTravelPrices[SELECTED_TRIP_TYPE][1]);
    printf("\t3. Both(%d Per Head)\n",localTravelPrices[SELECTED_TRIP_TYPE][2]);
    int localTravelOption;
    scanf("%d",&localTravelOption);
    while(localTravelOption < 1 || localTravelOption > 3){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        scanf("%d",&localTravelOption);
    }
    localTravelOption--;
    printf("Enter 0 to confirm or 1 to try again!\n");
    scanf("%d",&confirmation);
    if(confirmation == 0){
        //Save Local Travel Options
        SELECTED_LOCAL_TRAVEL_OPTION = localTravelOption;
    } else {
        displayLocalTravelOptions();
    }

}