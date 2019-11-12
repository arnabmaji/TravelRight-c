//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_TRAVELDATA_H
#define TRAVELRIGHT_TRAVELDATA_H

#endif //TRAVELRIGHT_TRAVELDATA_H

static const int SPACING = 80;

typedef struct {
    int day;
    int month;
    int year;
} Date;



typedef struct {
    int prices[3];
} HotelPrice;

static HotelPrice hotelPrice[2] = { //O for national hotels, 1 for International Hotels.
        {1200, 3600, 6500},
        {4500, 7500, 12200}
};

typedef struct {
    int prices[4];
} PackagePrice;

static PackagePrice packagePrice[2] = {
        {0, 180, 350, 240},
        {0, 280, 450, 340}
};

static int localTravelPrices[2][3] = {
        {240, 350, 550},
        {750, 1250, 1800}
};

static int EXTRA_CHARGE_FOR_SEASON[2] = {1240, 41480};
