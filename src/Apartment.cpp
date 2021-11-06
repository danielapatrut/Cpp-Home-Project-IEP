#include "../includes/Apartment.hpp"

Apartment::Apartment(const std::string& owner, const double area, const unsigned int floorNr) :
    Home(owner, area),
    floorNr(floorNr) {};

int Apartment::getFloorNr()
{
    std::cout<<"The floor number is: "<<floorNr<<std::endl;
    return floorNr;
}
