#include "Wheel.h"
#include "Player.h"
// Included both header files to be safe
#include <cstdlib>			// random number
#include <time.h>			// time
#include <ctime>

#include <iostream>
using namespace std;

wheel::wheel()
{
    min = 1;
    max = 10;

}
wheel::wheel(int values) {			// overloaded constructer accepts the max range value and sets to max veriable
    max = values;
    min = 1;
}
// comment
int wheel::spinValue() {
    return (rand() % max) + 1;
}

wheel::~wheel()
{
}