//
// Created by Arnab on 07-11-2019.
//

#ifndef TRAVELRIGHT_USERDATA_H
#define TRAVELRIGHT_USERDATA_H

#endif //TRAVELRIGHT_USERDATA_H

typedef struct {
    int day;
    int month;
    int year;
} Date;


//Passenger Data
static int ADULT_COUNT;
static int CHILDREN_COUNT;

//Local Travel Data
static int SELECTED_LOCAL_TRAVEL_OPTION = -1; //-1 for not opted, 0 for transportation only, 1 for sight seeing only, 2 for both

//Accommodation data
static int SELECTED_ACCOMMODATION_TYPE;
static int SELECTED_PACKAGE_TYPE;

//Package Data
static int SELECTED_TRIP_TYPE; //0 for National, 1 for International
static int SELECTED_DESTINATION; // from 0 to 6
static int SELECTED_CLASS_OF_TRAVEL;
static Date DATE_OF_JOURNEY;
static Date DATE_OF_RETURN;
static int TRIP_LENGTH;
static int SEASON_STATUS; //0 for non-season, 1 for season
