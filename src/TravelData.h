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
    char rating[10];
    int price;
} Hotel;

Hotel HOTELS[2][3] = {
        {
                {
                        "Three Star",
                        1200
                },
                {
                        "Five Star",
                        3600
                },
                {
                        "Seven Star",
                        6500
                }
        },
        {
                {
                        "Three Star",
                        4500
                },
                {
                        "Five Star",
                        7500
                },
                {
                        "Seven Star",
                        12200
                }
        }
};

typedef struct {
    char name[30];
    int price;
} Package;

Package PACKAGES[2][4] = {
        {
                {
                    "European Package",
                    0
                },
                {
                        "Continental Package",
                        180
                },
                {
                        "American Package",
                        350
                },
                {
                        "Modified American Package",
                        240
                }
        },
        {
                {
                        "European Package",
                        0
                },
                {
                        "Continental Package",
                        280
                },
                {
                        "American Package",
                        450
                },
                {
                        "Modified American Package",
                        340
                }
        }
};

typedef struct {
    char name[30];
    int price;
} LocalTravel;

LocalTravel LOCAL_TRAVEL[2][3] = {
        {
                {
                    "Transportation Only",
                    440
                },
                {
                        "Sight-Seeing Only",
                        650
                },
                {
                        "Both",
                        1000
                }
        },
        {
                {
                        "Transportation Only",
                        1250
                },
                {
                        "Sight-Seeing Only",
                        1650
                },
                {
                        "Both",
                        2600
                }
        }
};

static int EXTRA_CHARGE_FOR_SEASON[2] = {1240, 4480};
