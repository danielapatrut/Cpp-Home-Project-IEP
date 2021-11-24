#include "../includes/Home.hpp"
#include "../includes/proiect1_config.hpp"

Home::Home( std::string owner, double area, int *wallSize) : owner(owner), area(area), wallSize(wallSize) {};

Home& Home::operator=(const Home& home)
        {
            if(&home == this) return *this;
            
            owner = home.owner;
            area = home.area;
            int *originalWallSize = wallSize;
            wallSize = new int[4];

            for(int i=0;i<4;i++)
            {
                wallSize[i] = home.wallSize[i];
            }
            delete originalWallSize;

            return *this;
        }
double Home::getPrice(double pricePerMP)
{
    double price = pricePerMP*area;
    std::cout<<"The price is: "<<price<<std::endl;
    return price;
}