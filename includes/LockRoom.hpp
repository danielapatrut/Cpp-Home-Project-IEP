#pragma once
#include <iostream>
#include "Room.hpp"

class LockRoom
{
    Room &lockedRoom_;

public:
    LockRoom(const LockRoom&) = delete;
    LockRoom& operator=(const LockRoom&) = delete;
    LockRoom(Room &room);
    ~ LockRoom();

};