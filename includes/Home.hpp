#pragma once
#include <iostream>
#include<vector>
/*class Uncopyable
{
    protected:  // allow construction and destruction
        Uncopyable() {}
        ~Uncopyable() {}

    private:
        //prevent copying
        Uncopyable(const Uncopyable&);    //copy constructor
        Uncopyable& operator=(const Uncopyable);   //assigment operator
};*/

class Home //: private Uncopyable
{
    protected:
         std::string owner;
         double area;
         int *wallSize;

    public:
        Home( std::string owner, double area,  int *wallSize);
        double getPrice(double pricePerMP);
        Home& operator=(const Home& home);
};