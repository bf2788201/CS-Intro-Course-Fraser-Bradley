/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 10, 2018, 7:37 PM
 * Purpose:  Calculate the percentage of the federal budget taken up by the military budget
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions


const float milBdgt=639.1e09f;    //Military Budget = 639.1 Billion   

const float fedBdgt=4.094e12f;    //Federal Budget  = 4.094 Trillion
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float budg1, budg2;
    budg1 = milBdgt/fedBdgt;
    budg2 = budg1 * 100;
    cout << "The military makes up " << budg2 << "% of the federal budget.\n";
    return 0;
}