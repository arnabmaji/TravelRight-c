//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_TRAVELDATA_H
#define TRAVELRIGHT_TRAVELDATA_H

#endif //TRAVELRIGHT_TRAVELDATA_H

static int EXTRA_CHARGE_FOR_SEASON[2] = {240, 480};

typedef struct {
    int prices[3];
} HotelPrice;

static HotelPrice hotelPrice[2] = { //O for national hotels, 1 for International Hotels.
        {400, 1000, 1500},
        {1200, 2000, 3200}
};

typedef struct {
    int prices[4];
} PackagePrice;

static PackagePrice packagePrice[2] = {
        {100, 180, 350, 240},
        {200, 280, 450, 340}
};

static int localTravelPrices[2][3] = {
        {120, 150, 250},
        {250, 450, 650}
};