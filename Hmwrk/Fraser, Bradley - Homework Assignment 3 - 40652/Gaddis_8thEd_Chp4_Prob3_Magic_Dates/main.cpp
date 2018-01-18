/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 2, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    int num1, num2;
    cout << "Enter first number.\n";
    cin >> num1;
    cout << "Enter second number.\n";
    cin >> num2;
    if (num1 > num2) {
        cout << num1 << "is greater than" << num2 << ".\n";
    }
    else {
        cout << num2 << " is greater than " << num1 << ".\n";
    }
    return 0;
}