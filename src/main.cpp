#include "../includes/House.hpp"
#include "../includes/Apartment.hpp"
#include "../includes/Renter.hpp"
#include "../includes/LockRoom.hpp"
#include <thread>

void waitForRoom(Room *room)
{
    LockRoom *roomLock = new LockRoom(*room);
    std::cout<<"Room is free: "<<room->askToBook()<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    delete roomLock;
}


int main()
{
    int size1[]= {1,2,3,4};
    int size2[] = {5,6,7,8};
    //House hs1("Daniela", 204, size1, 52.8);
   /* Apartment a1("Deiana", 52.5,size2, 1);
    hs1=hs1;
    std::cout<<"House hs1 details:"<<std::endl;
    hs1.getPrice(1180);
    hs1.getYardArea();

    std::cout<<std::endl<<"Apartment a1 details:"<<std::endl;
    a1.getPrice(1200);
    a1.getFloorNr();
*/
    //House hs2(hs1);  
   // Apartment a2=a1;
    //a2=a2;
    //std::cout<<std::endl<<"Apartment a2 details:"<<std::endl;
    //a2.getFloorNr();
    //a2.getPrice(1100);
  
    std::shared_ptr<Apartment> a3 = std::make_shared<Apartment>("Andreea", 52.5,size2, 1);
    std::cout<<std::endl<<"Apartment a3 details:"<<std::endl;
    a3->getPrice(1200);
    a3->getFloorNr();
    
    Renter renter1("Chirias") ;
    renter1.setRenter(a3);

    Renter renter2("Chirias1") ;
    renter2.setRenter(a3);
    renter2.getRenter();

    Renter renter3("Chirias2") ;
    renter3.setRenter(a3);
    renter3.getRenter();
    
    renter2.getRenter();
     
    std::shared_ptr<Apartment> a4 = std::make_shared<Apartment>("Armand", 50.5,size1, 1);
    std::cout<<std::endl<<"Apartment a4 details:"<<std::endl;
    a4->getPrice(1200);
    a4->getFloorNr();
    
    Renter renter4("Chirias4") ;
    renter4.setRenter(a4);


  /*  std::unique_ptr<House> house1 = std::make_unique<House>("Cristian", 204, size1, 52.8);
    std::cout<<std::endl<<"House house1 details:"<<std::endl;
    house1->getPrice(1180);
    house1->getYardArea();

    OwnerHouse oh1("Proprietar1");*/

    std::unique_ptr<House> ownerhouse = std::make_unique<House>("Cristian", 204, size1, 52.8);

    
    if(ownerhouse){
        std::cout<<"\n";
        ownerhouse->getYardArea();
    }
    else
        std::cout<<"\nProprietarul nu are nicio casa"<<std::endl;

    std::unique_ptr<House> ownerhouse1 = move(ownerhouse);
    
    
    if(ownerhouse)
        ownerhouse->getYardArea();
    else
        std::cout<<"\nProprietarul nu are nicio casa"<<std::endl;


    std::cout<<"\n";
    Room *occupiedRoom = new Room(115);
    waitForRoom(occupiedRoom); 
    std::cout<<"Room is free: "<<occupiedRoom->askToBook()<<std::endl;

    return 0;
}