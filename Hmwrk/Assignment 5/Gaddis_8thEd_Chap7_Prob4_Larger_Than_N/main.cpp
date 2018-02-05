/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 10:16 PM
 * Purpose:  Create a program that compares data from an array to a number
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
    int size;
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int array[size];
    for (int i = 0 ; i<size; i++) {
        cout<<"Enter number "<<i+1<<endl;
        cin>>array[i];
    }
    cout<<"Enter a number to be compared with."<<endl;
    cin>>n;
    cout<<"The following numbers are larger than "<<n<<":"<<endl;
    for (int i = 0 ; i<size; i++) {
        if (array[i] > n) cout<<array[i]<<endl;
    }
return 0;
}
