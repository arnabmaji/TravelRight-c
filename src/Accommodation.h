//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_ACCOMMODATION_H
#define TRAVELRIGHT_ACCOMMODATION_H

#endif //TRAVELRIGHT_ACCOMMODATION_H


void selectAccommodationPackage(){
    printf("\n------------------------------------Accommodation Selection------------------------------------\n");
    printf("Please select your accommodation type:\n");

    for(int i=0;i<3;i++){
        printf("\t%d. %s Hotel(Price %d per head, per day)\n", (i+1),
               HOTELS[SELECTED_TRIP_TYPE][i].rating, HOTELS[SELECTED_TRIP_TYPE][i].price
               + SEASON_STATUS * EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE]);
    }
    int accommodationSelection;
    printf("%*s", SPACING, "Response:");
    scanf("%d",&accommodationSelection);
    while(accommodationSelection < 1 || accommodationSelection > 4){
        printf("not a valid selection.\n");
        printf("please try again!\n");
        printf("%*s", SPACING, "Response:");
        scanf("%d",&accommodationSelection);
    }
    accommodationSelection--;
    printf("Please select your Package Type:\n");
    for(int i=0;i<4;i++){
        printf("\t%d. %s(%d per head, per day)\n", (i+1),
                PACKAGES[SELECTED_TRIP_TYPE][i].name, PACKAGES[SELECTED_TRIP_TYPE][i].price);
    }
    int packageType;
    printf("%*s", SPACING, "Response:");
    scanf("%d",&packageType);
    while(packageType < 1 || packageType > 4){
        printf("Invalid selection.\n Please try again.\n");
        printf("%*s", SPACING, "Response:");
        scanf("%d",&packageType);
    }
    packageType--;
    printf("Please verify your selection:\n");
    printf("\t%s Hotel(Price %d per head, per day)\n",
           HOTELS[SELECTED_TRIP_TYPE][accommodationSelection].rating,
           HOTELS[SELECTED_TRIP_TYPE][accommodationSelection].price
           + SEASON_STATUS * EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE]);
    printf("\t%s(%d per head, per day)\n",
           PACKAGES[SELECTED_TRIP_TYPE][packageType].name, PACKAGES[SELECTED_TRIP_TYPE][packageType].price);
    printf("Press 'Y' to confirm or 'N' to try another:\n");
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
    if(confirmation == 'Y' || confirmation == 'y'){
        //Save user's selection.
        SELECTED_ACCOMMODATION_TYPE = accommodationSelection;
        SELECTED_PACKAGE_TYPE = packageType;
        printf("Your selection has been saved!\n");
    } else {
        selectAccommodationPackage();
    }

}
