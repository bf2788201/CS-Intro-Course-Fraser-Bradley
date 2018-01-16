/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 10, 2018, 6:48 PM
 * Purpose:  Calculate various data about gas prices
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int fed_tax = 18.4;
const int state_tax = 41.7;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float gas_price, sst, oil_profit, total_tax, base_price, perc_tax, price_actual;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Enter gas price in dollars:\n";
    cout << "$";
    cin >> gas_price;
    price_actual = gas_price*100;
    sst = price_actual * .0225;
    total_tax = sst + fed_tax + state_tax;
    base_price = price_actual - total_tax;
    perc_tax = total_tax/price_actual;
    oil_profit = price_actual * .065;
    cout << "Base Price:\n";
    cout << base_price << "c\n";
    cout << "Federal Tax:\n";
    cout << fed_tax << "c\n";
    cout << "State Tax:\n";
    cout << state_tax << "c\n";
    cout << "State Sales Tax:\n";
    cout << sst << "c\n";
    cout << "Total Tax:\n";
    cout << total_tax << "c\n";
    cout << "Percent of Price that is tax:\n";
    cout << perc_tax << "%\n";
    cout << "Oil Company Profit:\n";
    cout << oil_profit << "c\n";
    
    return 0;
}