/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 17, 2018, 10:02 PM
 * Purpose:  Create an interest and minimum payment calulator with a loop
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
    float balance, interest, total_due, minimum_pay;
    char ans;
    do {
    cout << "Enter balance.\n";
    cin >> balance;
    if (balance >= 1000) {
        interest = .01 * balance;
    }
    else {
        interest = .015 * balance;
    }
    total_due = balance + interest;
    if (total_due <= 10) {
        minimum_pay = 10;
    }
    else {
        if (.1 * total_due > 10) {
            minimum_pay = .1 * total_due;
        }
        else minimum_pay = 10;
    }
    cout << "Original Balance:\n" << balance << "\n";
    cout << "Interest due:\n" << interest << "\n";
    cout << "Total due: \n" << total_due << "\n";
    cout << "Minimum payment:" << minimum_pay << "\n";
    cout << "Quit? y/n \n";
    cin >> ans;
    } while (ans == 'n' || ans == 'N');
    return 0;
}