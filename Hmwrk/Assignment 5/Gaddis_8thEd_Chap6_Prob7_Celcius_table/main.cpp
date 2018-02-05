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
float celcius(float farenheit);
//Execution Begins Here
int main() {
    float farenheit;
    int ans;
    cout<<"Press 1 for loop demonstration, or 2 for a specific conversion."<<endl;
    cin>>ans;
    switch (ans) {
        case 1: {
            for (float loop = 0; loop <= 20; ++loop) {
                farenheit = loop;
                cout<<loop<<"F = "<<celcius(farenheit)<<"C"<<endl;
            }
            break;
        }
        
        case 2: {
    cout<<"Enter a Farenheit value."<<endl;
    cin>>farenheit;
    cout<<farenheit<<" in Celcius is "<<celcius(farenheit)<<"C."<<endl;
    break;
        }
    }
return 0;
}

float celcius(float farenheit) {
    float celcius;
    celcius = 5*(farenheit-32)/9;
    return celcius;
}