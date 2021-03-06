/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 11, 2018, 7:30 PM
 * Purpose:  Copy a sample program to be used in later problems
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
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods.\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod.\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pods and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then \n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    return 0;
}