/* 
 * File:   Savitch_9thEd_Chap1_Prob1_Sum_and_Product
 * Author: Bradley Fraser
 * Created on January 8, 2018, 6:55 PM
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
    int number_a, number_b, sum_a, product_a;
    cout << "Press return after entering a number. \n";
    cout << "Enter the first number:\n";
    cin >> number_a;
    cout << "Enter the second number:\n";
    cin >> number_b;
    sum_a = number_a + number_b;
    product_a = number_a * number_b;
    cout << "Sum:\n";
    cout << sum_a;
    cout << "\n";
    cout << "Product:\n";
    cout << product_a;
    cout << "\n";
      
    return 0;
}