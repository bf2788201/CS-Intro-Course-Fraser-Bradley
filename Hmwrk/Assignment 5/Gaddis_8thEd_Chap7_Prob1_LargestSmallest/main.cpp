/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 10:03 PM
 * Purpose:  Create a program that determines the largest and smallest number in an array
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
    int numbers[10];
    int largest=0;
    int smallest=0;
    int current;
    
    for(int loop=0; loop<10; loop++) {
        cout<<"Input number "<<loop+1<<endl;
        cin>>numbers[loop];
    }
    
    for (int loop=1; loop < 10; loop++) {
        current = numbers[loop];
        if (current > largest) largest = current;
        if (smallest < current) smallest = current;
    }
    cout<<"Largest: "<<largest<<endl;
    cout<<"Smallest: "<<smallest<<endl;
return 0;
}
