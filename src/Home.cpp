#include "../includes/Home.hpp"
#include "../includes/proiect1_config.hpp"

Home::Home(const std::string& owner, const double area) : owner(owner), area(area) {};

double Home::getPrice(double pricePerMP)
{
    double price = pricePerMP*area;
    std::cout<<"The price is: "<<price<<std::endl;
    return price;
}