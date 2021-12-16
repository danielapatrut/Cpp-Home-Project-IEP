#include "../includes/Room.hpp"

Room::Room(int roomNumber):roomNumber_(roomNumber), isFree_(true)
{

}

void Room::setIsFree(bool isFree)
{
    isFree_ = isFree;
}

bool Room::askToBook()
{
    return isFree_;
}
