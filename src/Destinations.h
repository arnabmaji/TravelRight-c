//
// Created by Arnab on 06-11-2019.
//

#ifndef TRAVELRIGHT_DESTINATIONS_H
#define TRAVELRIGHT_DESTINATIONS_H

#endif //TRAVELRIGHT_DESTINATIONS_H

static const int MAX_DESTINATIONS = 7;

typedef struct {
    char name[30];
    int locationId;
    struct CarrierType {
        char carrierName[20];
        char classOfTravel[20];
        long baseFare;
    } carriers[3];

} Destination;

static Destination INTERNATIONAL_DESTINATIONS[7] = {
        {
                "Dubai",
                1,
                {
                        {
                                "Air India",
                                "Economy",
                                32500L
                        },
                        {
                                "British Airways",
                                "Premium Economy",
                                55500L
                        },
                        {
                                "Cathay Pacific",
                                "Business Class",
                                95500L

                        }
                }
        },
        {
                "Bangkok",
                2,
                {
                        {
                                "Air India",
                                "Economy",
                                26200L
                        },
                        {
                                "British Airways",
                                "Premium Economy",
                                46200L
                        },
                        {
                                "Cathay Pacific",
                                "Business Class",
                                76200L

                        }
                }
        },
        {
                "Sydney",
                3,
                {
                        {
                                "Air India",
                                "Economy",
                                22500L
                        },
                        {
                                "British Airways",
                                "Premium Economy",
                                42500L
                        },
                        {
                                "Cathay Pacific",
                                "Business Class",
                                82500L

                        }
                }
        },
        {
                "Paris",
                4,
                {
                        {
                                "Air India",
                                "Economy",
                                45100L
                        },
                        {
                                "British Airways",
                                "Premium Economy",
                                65100L
                        },
                        {
                                "Cathay Pacific",
                                "Business Class",
                                105100L

                        }
                }
        },
        {
                "Cape Town",
                5,
                {
                        {
                                "Air India",
                                "Economy",
                                65400L
                        },
                        {
                                "British Airways",
                                "Premium Economy",
                                85400L
                        },
                        {
                                "Cathay Pacific",
                                "Business Class",
                                125400L

                        }
                }
        },
        {
                "London",
                6,
                {
                        {
                                "Air India",
                                "Economy",
                                69800L
                        },
                        {
                                "British Airways",
                                "Premium Economy",
                                99800L
                        },
                        {
                                "Cathay Pacific",
                                "Business Class",
                                139800L

                        }
                }
        },
        {
                "Beijing",
                7,
                {
                        {
                                "Air India",
                                "Economy",
                                43500L
                        },
                        {
                                "British Airways",
                                "Premium Economy",
                                63500L
                        },
                        {
                                "Cathay Pacific",
                                "Business Class",
                                103500L

                        }
                }
        }

};

static Destination NATIONAL_DESTINATIONS[7] = {

};