//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_PASSENGERSELECTION_H
#define TRAVELRIGHT_PASSENGERSELECTION_H

#endif //TRAVELRIGHT_PASSENGERSELECTION_H

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
        //Save passengers list
        ADULT_COUNT = adults;
        CHILDREN_COUNT = children;
        printf("Passengers successfully added!\n");
    } else{
        selectPassengers();
    }
}