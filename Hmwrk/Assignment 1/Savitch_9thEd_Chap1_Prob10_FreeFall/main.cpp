/* 
 * File:   Savitch_9thEd_Chap1_Prob4_FreeFall.cpp
 * Author: Bradley Fraser
 * Created on January 8, 2018, 6:51 PM
 * Purpose:  Fix a simple error in a program; Determine fall distance in feet
 */

//System Libraries

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int GRAVITY=32;//Gravity in ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short time,   //Time in Seconds
                   dstnce; //Distance in feet
            
    //Input free fall time
    cout<<"This program calculate the distance "
        <<"dropped during free-fall"<<endl;
    cout<<"Input the time in free-fall"<<endl;
    cout<<"Time measured in seconds"<<endl;
    cout<<"In the range of 0 to 40 seconds"<<endl;
    cin>>time;
    
    //Process/Map inputs to outputs
    dstnce=GRAVITY*time*time/2;
    
    //Output data
    cout<<"An object dropped for "<<time<<" seconds "
        <<"falls "<<dstnce<<" feet"<<endl;
    
    //Exit stage right!
    return 0;
}