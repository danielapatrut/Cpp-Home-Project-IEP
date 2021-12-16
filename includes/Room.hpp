#pragma once
#include <iostream>

class Room
{
    int roomNumber_;
    bool isFree_;

public:
    Room(int roomNumber);
    void setIsFree(bool isFree);
    bool askToBook();
};