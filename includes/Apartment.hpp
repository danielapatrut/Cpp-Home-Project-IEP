#pragma once
#include <iostream>
#include "Home.hpp"


class Apartment : public Home
{
    private:
        unsigned int floorNr;

    public:
        Apartment(std::string owner, double area, int *wallSize, unsigned int floorNr);
        int getFloorNr();
        Apartment& operator=(const Apartment& ap);
};