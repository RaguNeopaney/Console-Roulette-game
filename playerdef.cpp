#include "Player.h"
#include "Wheel.h"
// include both header file just to be safe
#include <cstdlib>			// random number
#include <time.h>			// time
//Player Definition
#include <ctime>
#include <iostream>
using namespace std;

// user player
user_player::user_player()
{
    user_money = 0;
}
int user_player::GetPlayerNum() {
    return player.spinValue();
}
user_player::user_player(int a)
{
    user_money = a;
}
user_player::~user_player()
{
}


house::house()
{
    house_num = House1.spinValue();
}
int house::GetHouseSpin() {

    return House1.spinValue();
}
house::~house()
{
}


