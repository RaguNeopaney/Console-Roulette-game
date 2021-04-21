#include "Player.h"
#include "Wheel.h"
#include <cstdlib>			// random number
#include <time.h>			// time
#include <iostream>
#include <string>

using namespace std;

int main() {
    srand(time(NULL));
    int wheel_num;	int money = 0;
    cout << "How many number of values do you want on the wheel? (min: 6, Max: 20)" << endl;
    cin >> wheel_num;
    cout << "Enter 0 for bet to stop playing" << endl;
    cout << "Enter amount you want to start with: $";
    cin >> money;


    string changes;
    int bet;
    user_player A(money);
    house B;

    do {                                    //Do while loop to continue to prompt user until money reaches 0
        cout << "Enter your bet: $";
        cin >> bet;
        if (bet == 0) {
            break;
        }

        cout << "-Double" << endl;      //Displays choices to user
        cout << "-Halve" << endl;
        cout << "-Keep" << endl;
        cout << "Bet Change: ";
        cin >> changes;
        if (changes == "Double") {
            cout << "Player Number: " << A.GetPlayerNum() << endl;
            cout << "House Number: " << B.GetHouseSpin() << endl;
            cout << "House Number: " << B.GetHouseSpin() << endl;
            if (A.GetPlayerNum() > B.GetHouseSpin() && A.GetPlayerNum() > B.GetHouseSpin()) {
                money = money + (2 * bet);
            }
            else if (A.GetPlayerNum() < B.GetHouseSpin() || A.GetPlayerNum() > B.GetHouseSpin()) {
                money = money - (2 * bet);
            }
            else {
                money = money - (2 * bet);
            }
        }
        else if (changes == "Halve")
        {
            cout << "Player Number: " << A.GetPlayerNum() << endl;
            cout << "House Number: " << B.GetHouseSpin() << endl;
            cout << "House Number: " << B.GetHouseSpin() << endl;
            if (A.GetPlayerNum() > B.GetHouseSpin() && A.GetPlayerNum() > B.GetHouseSpin()) {
                money = money + bet;
            }
            else if (A.GetPlayerNum() < B.GetHouseSpin() || A.GetPlayerNum() > B.GetHouseSpin()) {
                money = money - bet;
            }
            else {
                money = money - bet;
            }
        }
        else if (changes == "Keep") {
            cout << "Player Number: " << A.GetPlayerNum() << endl;
            cout << "House Number: " << B.GetHouseSpin() << endl;
            if (A.GetPlayerNum() > B.GetHouseSpin()) {
                money = money + bet;
            }
            else if (A.GetPlayerNum() < B.GetHouseSpin()) {
                money = money - bet;
            }
            else {
                money = money - bet;
            }
        }

        A.~user_player();
        cout << endl;
        cout << "       Result      " << endl;
        cout << "--------------------" << endl;
        cout << "Player total: $" << money << endl;
        cout << "--------------------" << endl;
        cout << endl;

    } while (money > 0);



    cout << "The Game ended" << endl;

    return 0;
}
