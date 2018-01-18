/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 17, 2018, 11:39 PM
 * Purpose:  Create a game of adding various coins to one dollar.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int pennies, nickels, dimes, quarters, value;
    cout << "Try to enter a number of coins to make exactly 1 dollar.\n";
    cout << "Enter pennies.\n";
    cin >> pennies;
    cout << "Enter nickels.\n";
    cin >> nickels;
    cout << "Enter dimes.\n";
    cin >> dimes;
    cout << "Enter quarters.\n";
    cin >> quarters;
    value = (pennies) + (nickels * 5) + (dimes * 10) + (quarters * 25);
    if (value == 100) {
        cout << "Exactly one dollar! You win!\n";
    }
    else if (value > 100) {
        cout << "Too high!\n";
    }
    else {
        cout << "Too low!\n";
    }
    return 0;
}