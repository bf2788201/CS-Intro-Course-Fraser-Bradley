/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 11, 2018, 7:34 PM
 * Purpose:  Modify a program even more
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
    int height, width, total_fence;
    cout << "Press return after entering a number.\n";
    cout << "Enter the height.\n";
    cin >> height;
    cout << "Enter the width.\n";
    cin >> width;
    total_fence = 2 * height + 2 * width;
    cout << "If you have ";
    cout << height;
    cout << " as the height and ";
    cout << width;
    cout << " as the width, then \n";
    cout << "you need ";
    cout << total_fence;
    cout << " total fencing.\n";
    
    return 0;
}