/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 17, 2018, 11:31 PM
 * Purpose:  Convert mass to weight.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int grav = 9.8;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int weight, mass;
    cout << "Enter mass.\n";
    cin >> mass;
    weight = mass * grav;
    if (weight > 1000) {
        cout << "Object is too heavy!\n";
    }
    else if (weight < 10) {
        cout << "Object is too light!\n";
    }
    else {
        cout << "The object weighs " << weight << " kg.\n";
    }
    return 0;
}