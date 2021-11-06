#include "../includes/House.hpp"

House::House(const std::string& owner, const double area, const double yardArea) :
    Home(owner, area),
    yardArea(yardArea) {};

double House::getYardArea()
{
    std::cout<<"The yardArea is: "<<yardArea<<std::endl;
    return yardArea;
}


