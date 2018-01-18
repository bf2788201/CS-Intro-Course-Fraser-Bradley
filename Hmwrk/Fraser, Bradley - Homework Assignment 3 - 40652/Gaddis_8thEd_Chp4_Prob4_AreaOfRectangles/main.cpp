/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 17, 2018, 11:29 PM
 * Purpose:  Determine which rectangle is larger.
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
    int r1s1, r1s2, r2s1, r2s2, a1, a2;
    cout << "Enter rectangle 1's width.\n";
    cin >> r1s1;
    cout << "Enter rectangle 1 height.\n";
    cin >> r1s2;
    cout << "Enter rectangle 2's width.\n";
    cin >> r2s1;
    cout << "Enter rectangle 2's height.\n";
    cin >> r2s2;
    a1 = r1s1 * r1s2;
    a2 = r2s1 * r2s2;
    if (a1 > a2) {
        cout << "Rectangle 1 is larger.\n";
    }
    else {
        cout << "Rectangle 2 is larger.\n";
    }
    return 0;
}