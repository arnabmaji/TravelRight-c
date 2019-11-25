//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_LOCALTRAVEL_H
#define TRAVELRIGHT_LOCALTRAVEL_H

#endif //TRAVELRIGHT_LOCALTRAVEL_H

void displayLocalTravelOptions(){
    printf("\n-----------------------------------------Local Travel-----------------------------------------\n\n");
    printf("Do you want to opt for Local Travel for transportation or sight seeing?\n");
    printf("Press 'Y' to proceed or 'N' to cancel:\n");
    char confirmation;
    fflush(stdin);
    printf("%*s", SPACING, "Response:");
    scanf("%c",&confirmation);
    while((confirmation != 'y' && confirmation != 'Y')  && (confirmation != 'n' && confirmation != 'N')){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        fflush(stdin);
        printf("%*s", SPACING, "Response:");
        scanf("%c",&confirmation);
    }
    if(confirmation == 'n' || confirmation == 'N'){
        printf("Thank you for your choice!\n");
        SELECTED_LOCAL_TRAVEL_OPTION = -1;
        return;
    }
    printf("Please select your local travel options:\n");
    for(int i=0;i<3;i++){
        printf("\t%d. %s(%d per Head)\n",(i+1), LOCAL_TRAVEL[SELECTED_TRIP_TYPE][i].name,
               LOCAL_TRAVEL[SELECTED_TRIP_TYPE][i].price);
    }
    int localTravelOption;
    printf("%*s", SPACING, "Response:");
    scanf("%d",&localTravelOption);
    while(localTravelOption < 1 || localTravelOption > 3){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        printf("%*s", SPACING, "Response:");
        scanf("%d",&localTravelOption);
    }
    localTravelOption--;
    printf("\nPress 'Y' to confirm or 'N' to try again:\n");
    fflush(stdin);
    printf("%*s", SPACING, "Response:");
    scanf("%c",&confirmation);
    while((confirmation != 'y' && confirmation != 'Y')  && (confirmation != 'n' && confirmation != 'N')){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        fflush(stdin);
        printf("%*s", SPACING, "Response:");
        scanf("%c",&confirmation);
    }
    if(confirmation == 'Y' || confirmation == 'y'){
        //Save Local Travel Options
        SELECTED_LOCAL_TRAVEL_OPTION = localTravelOption;
    } else {
        displayLocalTravelOptions();
    }
    printf("\n");
}