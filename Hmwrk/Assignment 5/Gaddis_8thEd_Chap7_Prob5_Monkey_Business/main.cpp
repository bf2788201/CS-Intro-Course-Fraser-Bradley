/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on February 4, 2018, 10:50 PM
 * Purpose:  Create a program that uses a 2d array
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
    int mf[3] [5];
    int totalfood=0;
    float avgfood;
    int most = mf[0][0];
    int least = mf[0][1];
    int current;
    cout<<"Enter monkey 1's food eaten."<<endl;
    for(int i = 0; i < 5; i++) {
        cout<<"Day "<<i+1<<endl;
        cin>> mf[0] [i];
    }
        cout<<"Enter monkey 2's food eaten."<<endl;
    for(int i = 0; i < 5; i++) {
        cout<<"Day "<<i+1<<endl;
        cin>> mf[1] [i];
    }
        cout<<"Enter monkey 3's food eaten."<<endl;
    for(int i = 0; i < 5; i++) {
        cout<<"Day "<<i+1<<endl;
        cin>> mf[2] [i];
    }
        for (int a = 0; a<3; a++) {
        for (int i = 0; i<5; i++) {
            totalfood += mf[a] [i];
        }
        }
        cout<<"Total food consumed: ";
        cout<<totalfood<<" pounds."<<endl;
        avgfood = totalfood/15;
        cout<<"Average food per monkey: "<<avgfood<<" pounds."<<endl;
    for (int a = 0; a<3; a++) {
        for (int i = 0; i<5; i++) {
            current = mf[a][i];
            if (most < current) most = current;
            if (least > current) least = current;
        }
    }
        cout<<"Most food eaten: "<<most<<" pounds."<<endl;
        cout<<"Least food eaten: "<<least<<" pounds."<<endl;
return 0;
}
