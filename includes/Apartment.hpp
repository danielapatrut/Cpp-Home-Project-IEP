#pragma once
#include <iostream>
#include "Home.hpp"


class Apartment : public Home
{
    private:
        const unsigned int floorNr;

    public:
        Apartment(const std::string& owner, const double area, const unsigned int floorNr);
        int getFloorNr();
};