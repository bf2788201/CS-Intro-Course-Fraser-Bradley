/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 11:00 PM
 * Purpose:  Create a program that performs a linear search
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
    int cardnumber;
    int current;
    int array[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    cout<<"Enter card number."<<endl;
    cin>>cardnumber;
    
    for (int i=0; i<18; i++) {
        current = array[i];
        if (current == cardnumber) {cout<<"Number valid.";
        return 0;
        }
    }
    cout<<"Number invalid."<<endl;
return 0;
}
