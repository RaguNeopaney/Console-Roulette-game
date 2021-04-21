#ifndef WHEEL_H
#define WHEEL_H
#include <cstdlib>			// random number
#include <time.h>			// time
// Creates a wheel class
class wheel
{
public:
    wheel();		// default set the wheel max = 10 and min = 1
    wheel(int);		// overload set the wheel max = user input and min = 1
    int spinValue();
    ~wheel();

private:
    int min;
    int max;
};


#endif // PLAYER_H

