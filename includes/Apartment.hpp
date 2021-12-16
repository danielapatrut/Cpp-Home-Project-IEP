#pragma once
#include <iostream>
#include <memory>
#include "Home.hpp"



class Apartment : public Home
{
    private:
        unsigned int floorNr;
        std::shared_ptr<Apartment> sharedAp_;

    public:
        Apartment(std::string owner, double area, int *wallSize, unsigned int floorNr);
        int getFloorNr();
        ~Apartment();
       
};
