cmake_minimum_required(VERSION 3.15)
project(TravelRight C)

set(CMAKE_C_STANDARD 11)

add_executable(TravelRight src/main.c src/Destinations.h src/DestinationSelection.h src/TravelData.h src/PassengerSelection.h src/DateSelection.h src/LocalTravel.h)