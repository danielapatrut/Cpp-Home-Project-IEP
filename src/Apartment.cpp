#include "../includes/Apartment.hpp"

Apartment::Apartment(std::string owner, double area, int *wallSize, unsigned int floorNr) :
    Home(owner, area, wallSize),
    floorNr(floorNr) {};

Apartment& Apartment::operator=(const Apartment& ap)
        {
            if(&ap == this) 
                return *this;
            
            Home::operator=(ap);
            floorNr = ap.floorNr;

            return *this;
            
        }
int Apartment::getFloorNr()
{
    std::cout<<"The floor number is: "<<floorNr<<std::endl;
    
    std::cout<<"Walls sizes are: " ;
    for(int i=0;i<4;i++)
        std::cout<<wallSize[i]<<" ";
    std::cout<<"\n";

    return floorNr;
}
