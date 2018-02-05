/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 8:49 PM
 * Purpose:  Create a kinetic energy calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float kineticEnergy(float mass, float velocity);
//Execution Begins Here
int main() {
    float mass, velocity;
    cout<<"This program calculates kinetic energy for an object in motion."<<endl;
    cout<<"Enter mass."<<endl;
    cin>>mass;
    cout<<"Enter velocity."<<endl;
    cin>>velocity;
    cout<<"Kinetic energy = "<<kineticEnergy(mass,velocity)<<"N."<<endl;
return 0;
}

float kineticEnergy(float mass, float velocity) {
    float KE = mass*velocity*velocity*.5;
    return KE;
}