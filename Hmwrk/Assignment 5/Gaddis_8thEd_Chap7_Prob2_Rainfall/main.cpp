/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 10:14 PM
 * Purpose:  Create a program that does a number of things with data from an array
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
    int rainfall[12];
    int totalrainfall;
    float averagerainfall;
    int most = rainfall[0];
    int least = rainfall[0];
    int current;
    
    for (int time=0; time <12; time++){
        cout<<"Enter the rainfall in inches for month "<<time + 1<<"."<<endl;
        cin>>rainfall[time];
    }
    for (int time = 0; time < 12; time++ ) {
        totalrainfall += rainfall[time];
    }
    averagerainfall = totalrainfall/12;
    for (int time = 0; time < 12; time++) {
        current = rainfall[time];
        if (most < current) most = current;
        if (least > current) least = current;
    }
    cout<<"Total rainfall: "<<totalrainfall<<endl;
    cout<<"Average per month: "<<averagerainfall<<endl;
    cout<<"Most in one month: "<<most<<endl;
    cout<<"Least in one month: "<<least<<endl;
return 0;
}
