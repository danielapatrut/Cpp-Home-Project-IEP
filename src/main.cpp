#include "../includes/House.hpp"
#include "../includes/Apartment.hpp"

int main()
{
    House hs1("Daniela", 204, 52.8);
    Apartment a1("Deiana", 52.5, 1);

    std::cout<<"House hs1 details:"<<std::endl;
    hs1.getPrice(1180);
    hs1.getYardArea();

    std::cout<<std::endl<<"Apartment a1 details:"<<std::endl;
    a1.getPrice(1200);
    a1.getFloorNr();

    //House hs2(hs1);  
    //Apartment a2=a1;
    return 0;
}