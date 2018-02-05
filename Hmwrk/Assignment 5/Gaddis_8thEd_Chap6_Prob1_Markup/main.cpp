/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 7:14 PM
 * Purpose:  Create a markup calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float calculateRetail(float price, float markup);
//Execution Begins Here
int main() {
    float price, markup = -1, finalvalue;
    while (price <= 0 ) {
    cout<<"Input initial price above 0."<<endl;
    cin>>price;
    }
    while (markup <= 0) {
    cout<<"Input markup - 0 or higher."<<endl;
    cin>>markup;
    }
    finalvalue = calculateRetail(price,markup);
    cout<<"Total price: $"<<finalvalue<<endl;
    
}

float calculateRetail(float price,float markup) {
    return price + (price * markup/100);
}