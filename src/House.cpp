#include "../includes/House.hpp"

House::House(std::string owner, double area, int *wallSize, double yardArea) :
    Home(owner, area, wallSize),
    yardArea(yardArea) {};

House& House::operator=(const House& house)
        {
            if(&house == this) 
                return *this;
            
            Home::operator=(house);
            yardArea = house.yardArea;
            
            return *this;
        }
double House::getYardArea()
{
    std::cout<<"The yardArea is: "<<yardArea<<std::endl;

    std::cout<<"Walls sizes are: " ;
    for(int i=0;i<4;i++)
        std::cout<<wallSize[i]<<" ";
    std::cout<<"\n";
    
    return yardArea;
}


