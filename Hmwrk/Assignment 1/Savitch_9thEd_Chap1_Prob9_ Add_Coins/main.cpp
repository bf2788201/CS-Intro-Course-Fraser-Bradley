/* 
 * File:   Savitch_9thEd_Chap1_Prob3_Add_Coins
 * Author: Bradley Fraser
 * Created on January 8, 2018, 7:39 PM
 * Purpose:  Add the values of various coins
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int quarter = 25;
const int dime = 10;
const int nickel = 5;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int dimes, quarters, nickels, nickels_total, dimes_total, quarters_total, total_money;
    cout << "Enter # of quarters:\n";
    cin >> quarters;
    cout << "Enter # of dimes:\n";
    cin >> dimes;
    cout << "Enter # of nickels:\n";
    cin >> nickels;
    nickels_total = nickels * nickel;
    dimes_total = dimes * dime;
    quarters_total = quarters * quarter;
    total_money = nickels_total + dimes_total + quarters_total;
    cout << "Total change:\n";
    cout << total_money;
    cout << "\n";
    
    return 0;
}