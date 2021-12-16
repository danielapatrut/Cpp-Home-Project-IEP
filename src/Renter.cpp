#include "../includes/Renter.hpp"

Renter::Renter(std::string nameRenter) : nameRenter_(nameRenter){};


int Renter::getRenter()
{
    std::cout<<"\nChiriasul "<<nameRenter_<<" are "<<sharedAp_.use_count()-2<<" colegi"<<std::endl;
    return sharedAp_.use_count();
    
}

void  Renter:: setRenter(const std::shared_ptr<Apartment> &sharedAp)
{
    sharedAp_=sharedAp;
    
}
