//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_DESTINATIONSELECTION_H
#define TRAVELRIGHT_DESTINATIONSELECTION_H

#endif //TRAVELRIGHT_DESTINATIONSELECTION_H

void selectPackage(){
    printf("Select your Package:\n");
    printf("\t1. National Package");
    printf("\t2. International Package");
    printf("\n");
    int packageType;
    scanf("%d",&packageType);
    while(packageType < 1 || packageType > 2){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        scanf("%d",&packageType);
    }
    packageType--;
    Destination *destination[] = {NATIONAL_DESTINATIONS , INTERNATIONAL_DESTINATIONS};
    printf("Select a beautiful place for you:\n");
    for(int i=0;i<MAX_DESTINATIONS;i++){
        printf("%d. %s\n", (i+1), destination[packageType][i].name);
    }
    int selectedPlace;
    scanf("%d",&selectedPlace);
    while(selectedPlace < 1 || selectedPlace > MAX_DESTINATIONS){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        scanf("%d",&selectedPlace);
    }
    selectedPlace--;
    printf("Select your class of Travel:\n");
    for(int i=0;i<3;i++){
        printf("\t%d-->\n",(i+1));
        printf("\tCarrier Name: %s\n", destination[packageType][selectedPlace].carriers[i].carrierName);
        printf("\tClass of Travel: %s\n", destination[packageType][selectedPlace].carriers[i].classOfTravel);
        printf("\tBase Fare: %ld\n\n", destination[packageType][selectedPlace].carriers[i].baseFare);
    }
    int selectedCarrier;
    scanf("%d",&selectedCarrier);
    while(selectedCarrier < 1 || selectedCarrier > 3){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        scanf("%d",&selectedCarrier);
    }
    selectedCarrier--;
    printf("Please verify your package:\n");
    printf("\tDestination: %s\n", destination[packageType][selectedPlace].name);
    printf("\tCarrier Name: %s\n", destination[packageType][selectedPlace].carriers[selectedCarrier].carrierName);
    printf("\tClass of Travel: %s\n", destination[packageType][selectedPlace].carriers[selectedCarrier].classOfTravel);
    printf("\tBase Fare: %ld\n\n", destination[packageType][selectedPlace].carriers[selectedCarrier].baseFare);
    printf("Press 'Y' to confirm or 'N' to view another:\n");
    char confirmation;
    fflush(stdin);
    scanf("%c",&confirmation);
    while((confirmation != 'y' && confirmation != 'Y')  && (confirmation != 'n' && confirmation != 'N')){
        printf("Oops! not a valid selection.\n");
        printf("try again!\n");
        fflush(stdin);
        scanf("%c",&confirmation);
    }
    if(confirmation == 'Y' || confirmation == 'y'){
        //Save user's package
        SELECTED_TRIP_TYPE = packageType;
        SELECTED_DESTINATION = selectedPlace;
        SELECTED_CLASS_OF_TRAVEL = selectedCarrier;
        printf("Your selection has been recorded!\n");
    } else {
        //Show Another One
        selectPackage();
    }
}
