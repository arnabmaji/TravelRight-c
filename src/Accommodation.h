//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_ACCOMMODATION_H
#define TRAVELRIGHT_ACCOMMODATION_H

#endif //TRAVELRIGHT_ACCOMMODATION_H


void selectAccommodationPackage(){
    printf("\n-----------------------------Accommodation Selection-----------------------------\n");
    printf("Please select your accommodation type:\n");
    printf("\t1. Three Star Hotel\n");
    printf("\t2. Five Star Hotel\n");
    printf("\t3. Seven Star Hotel\n");
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
    printf("1. European Package\n"
           "2. Continental Package\n"
           "3. American Package\n"
           "4. Modified American Package\n");
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
    printf("Accommodation Fee: %d(Per Head, Per Day)\n"
           "Package Fee: %d(Per Head, Per Day)\n",(hotelPrice[SELECTED_TRIP_TYPE].prices[accommodationSelection] +
           (SEASON_STATUS * (EXTRA_CHARGE_FOR_SEASON[SELECTED_TRIP_TYPE]))),packagePrice[SELECTED_TRIP_TYPE].prices[packageType]);
    printf("Press 'Y' to confirm or 'N' to view another:\n");
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
