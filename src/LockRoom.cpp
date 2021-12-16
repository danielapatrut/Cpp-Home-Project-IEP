#include "../includes/LockRoom.hpp"
#include <mutex>

void lock(Room &room)
{
    room.setIsFree(false);
    std::cout<<"Room is locked. Someone has booked it..."<<std::endl;
}

void unlock(Room &room)
{
    room.setIsFree(true);
    std::cout<<"The room is now free, go book it!"<<std::endl;
}

LockRoom::LockRoom(Room &room) : lockedRoom_(room)
{
    lock(lockedRoom_);
}

LockRoom::~LockRoom()
{
    unlock(lockedRoom_);
}