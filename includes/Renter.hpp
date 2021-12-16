#pragma once
#include <iostream>
#include <memory>
#include "Apartment.hpp"

class Renter 
{
    private:
        std::string nameRenter_;

    public:   
    std::shared_ptr<Apartment> sharedAp_;

    public:
        Renter(std::string nameRenter);
        int getRenter();
        void setRenter(const std::shared_ptr<Apartment> &sharedAp);
        
};