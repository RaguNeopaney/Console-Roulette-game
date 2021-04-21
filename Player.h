#ifndef PLAYER_H
#define PLAYER_H

// Brings in the Wheel header file to use
#include "Wheel.h"

class user_player
{
public:
    wheel player;       // instance of the wheel for player class to use
    int GetPlayerNum();
    user_player();      // Default constructor
    user_player(int);   // overloaded constructor
    ~user_player();

private:
    int user_money;
};

class house
{
public:
    wheel House1;       // instance of the wheel for house class to use
    int GetHouseSpin();     // Gets the random number
    house();        // default constructor
    ~house();

private:
    int house_num;
};


#endif // PLAYER_H
