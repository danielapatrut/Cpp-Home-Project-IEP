#pragma once
#include <iostream>
#include "Home.hpp"


class House : public Home
{
    private:
        const double yardArea;

    public:
        House(const std::string& owner, const double area, const double yardArea);
        double getYardArea();
};