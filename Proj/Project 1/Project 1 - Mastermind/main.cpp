/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 30, 2018, 2:33 PM
 * Purpose:  Create a simple version of the game "Mastermind"
 */

//System Libraries
#include <iostream>
#include<cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int difans, triescounter, a, b, c, d;
    char g1, g2, g3, g4;
    
    //Generate the correct code
    srand(time(0));
    
    int w =(rand()%10);
    int x =(rand()%10);
    int y =(rand()%10);
    int z =(rand()%10);
    
    //Introduce the game.
    cout<<"Welcome to Mastermind."<<endl;
    cout<<"This game is about guessing a 4 digit number based on hints given by previous guesses."<<endl;
    cout<<"You guess your 4 digit number. If one of the digits is correct, and in the right place, the output will be an O."<<endl;
    cout<<"If one of the digits is correct, but in the wrong place, the output will be an X."<<endl;
    cout<<"Otherwise, the output will be a dot. (.)"<<endl;
    cout<<"Select difficulty."<<endl;
    
    //Establish difficulty setting - # of tries
    
    do {
    
    cout<<"1 for Beginner. 20 tries."<<endl;
    cout<<"2 for Intermediate. 15 tries."<<endl;
    cout<<"3 for Expert. 10 tries."<<endl;
    cout<<"4 for Dumb Luck. 5 tries."<<endl;
    cout<<"5 for Custom Difficulty."<<endl;
    
    cin>>difans;
    switch(difans) {
        case 1: triescounter = 20;
        break;
        case 2: triescounter = 15;
        break;
        case 3: triescounter = 10;
        break;
        case 4: triescounter = 5;
        break;
        case 5: cout<<"Custom difficulty. Enter the number of tries you want."<<endl;
                cin>>triescounter;
        break;
        case 88: cout<<"Debug mode. Customize the solution."<<endl;
                cin>>w>>x>>y>>z;
                cout<<"Number of tries?"<<endl;
                cin>>triescounter;
        break;
        default: cout<<"Invalid selection. Select 1 - 5."<<endl;
    }
    } while (difans >5 && difans != 88);
    
    //Gameplay
    
    cout<<"Time to play!"<<endl;
    cout<<"Make your first guess. Include spaces between each number."<<endl;
    cout<<"Numbers can be 0 through 9."<<endl;
    do {
        cin>>a>>b>>c>>d;
        --triescounter;
        
        for(int fix = 0; fix <2; ++fix) {

        if (a == w) g1 = 'X';
        else if (a != w && ((a == x && g2 != 'X') || (a == y && g3 != 'X') || (a == z && g3 != 'X'))) g1 = 'O';
        else g1 = '.';
        
        if (b == x) g2 = 'X';
        else if (b != x && ((b == w && g1 != 'X') || (b == y && g3 != 'X') || (b == z && g4 != 'X'))) g2 = 'O';
        else g2 = '.';
        
        if (c == y) g3 = 'X';
        else if (c != y && ((c == w && g1 != 'X') || (c == x && g2 != 'X') || (c == z && g4 != 'X'))) g3 = 'O';
        else g3 = '.';
        
        if (d == z) g4 = 'X';
        else if (d != z && ((d == w && g1 != 'X') || (d == x && g2 != 'X') || (d == y && g3 != 'X'))) g4 = 'O';
        else g4 = '.';
        
        }
        
        // Winning
        if (a == w && b == x && c == y && d == z) {
            cout<<"You win! The correct number was "<<w<<x<<y<<z<<"."<<endl;
            cout<<"You won with "<<triescounter<<" tries remaining (higher is better.)"<<endl;
            return 0;
        }
        else {
            cout<<"Your guess:"<<endl<<a<<b<<c<<d<<endl<<g1<<g2<<g3<<g4<<endl<<triescounter<<" guesses left."<<endl;
        }
            
    } while (triescounter > 0);
    //Losing
    cout<<"No guesses left! The correct number was "<<w<<x<<y<<z<<"."<<endl;
    
    return 0;
}