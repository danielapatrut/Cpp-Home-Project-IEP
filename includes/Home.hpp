#pragma once
#include <iostream>

class Uncopyable
{
    protected:  // allow construction and destruction
        Uncopyable() {}
        ~Uncopyable() {}

    private:
        //prevent copying
        Uncopyable(const Uncopyable&);    //copy constructor
        Uncopyable& operator=(const Uncopyable);   //assigment operator
};

class Home : private Uncopyable
{
    protected:
        const std::string& owner;
        const double area;

    public:
        Home(const std::string& owner, const double area);
        double getPrice(double pricePerMP);
};