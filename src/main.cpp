#include "../includes/House.hpp"
#include "../includes/Apartment.hpp"

int main()
{
    int size1[]= {1,2,3,4};
    int size2[] = {5,6,7,8};
    House hs1("Daniela", 204, size1, 52.8);
    Apartment a1("Deiana", 52.5,size2, 1);
    hs1=hs1;
    std::cout<<"House hs1 details:"<<std::endl;
    hs1.getPrice(1180);
    hs1.getYardArea();

    std::cout<<std::endl<<"Apartment a1 details:"<<std::endl;
    a1.getPrice(1200);
    a1.getFloorNr();

    //House hs2(hs1);  
    Apartment a2=a1;
    a2=a2;
    std::cout<<std::endl<<"Apartment a2 details:"<<std::endl;
    a2.getFloorNr();
    a2.getPrice(1100);
    return 0;
}