/* 
 * File:   main.cpp
 * Author: Bradley Fraser
 * Created on January 17, 2018, 9:59 PM
 * Purpose:  Create a scoring system for rock paper scissors.
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
    char player_one, player_two;
    int ans = 1;
    char y = 1, n = 0;
    do {
    cout << "r for rock, s for scissors, p for paper, or q to quit.\n"  <<  "Player one's choice?\n"; 
    cin >> player_one;
    if (player_one != 'q') {
        cout << "Player two's choice?\n";
        cin >> player_two;
    }
    
    
    switch (player_one){
        case 'r':
            if (player_two == 's' || player_two == 'S') {
                cout << "Player one wins - rock breaks scissors.\n";
            }
            if (player_two == 'p' || player_two == 'P') {
                cout << "Player two wins - paper covers rock.\n";
            }
            if (player_two == 'r' || player_two == 'R') {
                cout << "Nobody wins.\n";
            }
            break;
        case 'p':
            if (player_two == 's' || player_two == 'S') {
                cout << "Player two wins - scissors cuts paper.\n";
            }
            if (player_two == 'p' || player_two == 'P') {
                cout << "Nobody wins.\n";
            }
            if (player_two == 'r' || player_two == 'R') {
                cout << "Player one wins - paper covers rock.\n";
            }
            break;
        case 's':
              if (player_two == 's' || player_two == 'S') {
                cout << "Nobody wins.\n";
            }
            if (player_two == 'p' || player_two == 'P') {
                cout << "Player one wins - scissors cuts paper.\n";
            }
            if (player_two == 'r' || player_two == 'R') {
                cout << "Player two wins - rock breaks scissors.\n";
            }
              break;
        case 'q':
            cout << "Thanks for playing.\n";
             break;
        case 'R':
            if (player_two == 's' || player_two == 'S') {
                cout << "Player one wins - rock breaks scissors.\n";
            }
            if (player_two == 'p' || player_two == 'P') {
                cout << "Player two wins - paper covers rock.\n";
            }
            if (player_two == 'r' || player_two == 'R') {
                cout << "Nobody wins.\n";
            }
            break;
        case 'P':
            if (player_two == 's' || player_two == 'S') {
                cout << "Player two wins - scissors cuts paper.\n";
            }
            if (player_two == 'p' || player_two == 'P') {
                cout << "Nobody wins.\n";
            }
            if (player_two == 'r' || player_two == 'R') {
                cout << "Player one wins - paper covers rock.\n";
            }
            break;
        case 'S':
              if (player_two == 's' || player_two == 'S') {
                cout << "Nobody wins.\n";
            }
            if (player_two == 'p' || player_two == 'P') {
                cout << "Player one wins - scissors cuts paper.\n";
            }
            if (player_two == 'r' || player_two == 'R') {
                cout << "Player two wins - rock breaks scissors.\n";
            }
              break;
        case 'Q':
            cout << "Thanks for playing.\n";
             break;    
    }  
    } while (player_one != 'q'); 
    
return 0;
}