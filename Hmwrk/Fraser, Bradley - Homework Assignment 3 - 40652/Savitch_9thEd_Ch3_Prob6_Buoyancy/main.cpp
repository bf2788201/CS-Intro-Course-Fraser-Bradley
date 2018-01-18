/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 17, 2018, 6:33 PM
 * Purpose:  Create  a program that determines if a sphere floats in water.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const double pi = 3.14159;
const double water = 62.4;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float weight, radius, buoyancy, volume;
    cout << "This program determines if a sphere of a given weight and radius will float in water.\n";
    cout << "Enter radius of sphere in feet.\n";
    cin >> radius;
    cout << "Enter weight of sphere in pounds.\n";
    cin >> weight;
    volume = (4/3)*pi*radius*radius*radius;
    buoyancy = (volume * water);
    if (buoyancy >= weight) {
        cout << "Object floats.\n";
    }
    else {
        cout << "Object sinks.\n";
    }
    return 0;
}