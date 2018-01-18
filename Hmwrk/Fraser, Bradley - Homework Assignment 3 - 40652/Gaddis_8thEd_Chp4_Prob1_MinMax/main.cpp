/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 17, 2018, 11:21 PM
 * Purpose:  Determine if a date is magical
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
    int month, day, year;
    cout << "Enter a month (numerically).\n";
    cin >> month;
    cout << "Enter a day (numerically).\n";
    cin >> day;
    cout << "Enter a year (two digits).\n";
    cin >> year;
    if (year == month * day) {
        cout << "This date is magical!\n";
    }
    else {
        cout << "This day is not magical.\n";
    }
    return 0;
}