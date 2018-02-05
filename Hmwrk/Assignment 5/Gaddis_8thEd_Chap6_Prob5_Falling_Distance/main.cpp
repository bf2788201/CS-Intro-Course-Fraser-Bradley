/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 8:35 PM
 * Purpose:  Create a distance calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float fallingDistance(float time);
//Execution Begins Here
int main() {
    int answer;
    float time;
    cout<<"1: Display values for 1-10 seconds."<<endl
        <<"2: Enter a custom time value."<<endl;
    cin>>answer;
    switch (answer) {
        case 1: { for(float counter = 1; counter <= 10; ++counter) {
            time = counter;
            cout<<"Distance at t = "<<counter<<" seconds:";
            cout<<fallingDistance(time)<<endl;
        }
            break;
        }
        case 2:{
        cout<<"Enter time spent falling."<<endl;
        cin>>time;
        cout<<fallingDistance(time)<<" meters."<<endl;
        break;
}  
}
return 0;
}

float fallingDistance(float time) {
    float distance;
    distance = (time * time * 9.8)/2;
    return distance;
}
