#pragma once
#include <iostream>
#include "Home.hpp"
#include <memory>

class House : public Home
{
    private:
         double yardArea;
      

    public:
        House(std::string owner, double area, int *wallSize, double yardArea );
        double getYardArea();
        House& operator=(const House& house);
         ~House();
};