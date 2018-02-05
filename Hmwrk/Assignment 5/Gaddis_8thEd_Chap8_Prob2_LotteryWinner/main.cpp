/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 11:10 PM
 * Purpose:  Create a program uses a linear search
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
    int win;
    int current;
    int array[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    
    cout<<"Enter winning number."<<endl;
    cin>>win;
    
    for (int i=0; i<10; i++) {
        current = array[i];
        if (current == win) {cout<<"Player has won.";
        return 0;
        }
    }
    cout<<"Player has not won."<<endl;
return 0;
}
