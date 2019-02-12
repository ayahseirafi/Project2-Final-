/* 
 * File:   main.cpp
 * Author: Ayah Seiraf
 *
 * Created on February 1, 2019, 10:07 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

 
using namespace std;
 
string dealCard();


void swapCards(string hand[]);

 
int main()
{
    // This will generate random number for us to use
    srand(time(NULL));
 // original game was poker, but game is now changing to BS
    // Creates an option menu
   /* int choice = 0;
    bool stop = false;
 
    while(stop != true)
    {
        cout << "Welcome to War!  In this game, you will be given 26 card.  You ";
            cout << "will set a card down and the computer will randomly generate a card.  Whoever has";
            cout << " the highest card wins!" << endl;
        cout << "1. Play" << endl;
        cout << "2. Exit" << endl << endl;
        cout << "Choose your option: ";
        cin >> choice;
 
        if(choice != 2) {
            cout << 
           
        } else {
            stop = true;
        }
        
    string card;
 
    int aSuit = (rand() % (4 - 1 + 1)) + 1;
    int aCard = (rand() % (13 -1 + 1)) + 1;
 
    string face;
 // Display each card instead
    switch(aSuit)
    {
        case 1: face = " of Hearts"; break;
        case 2: face = " of Spades"; break;
        case 3: face = " of Diamonds"; break;
        case 4: face = " of Clubs"; break;
    }
 
    string value;
 
    switch(aCard)
    {
        case 1: value = "Ace"; break;
        case 2: value = "2"; break;
        case 3: value = "3"; break;
        case 4: value = "4"; break;
        case 5: value = "5"; break;
        case 6: value = "6"; break;
        case 7: value = "7"; break;
        case 8: value = "8"; break;
        case 9: value = "9"; break;
        case 10: value = "10"; break;
        case 11: value = "Jack"; break;
        case 12: value = "Queen"; break;
        case 13: value = "King"; break;
    }
 
    card = (value + face);
 
    return card; */
    
    int aceDi = 1;
    int aceSp = 1;
    int aceCl = 1;
    int aceHe = 1;
    int twoDi = 2;
    int twoSp = 2;
    int twoCl = 2;
    int twoHe = 2;
    int threeDi = 3;
    int threeSp = 3;
    int threeCl = 3;
    int threeHe = 3;
    int fourDi = 4;
    int fourSp = 4;
    int fourCl = 4;
    int fourHe = 4;
    int fiveDi = 5;
    int fiveSp = 5;
    int fiveCl = 5;
    int fiveHe = 5;
    int sixDi = 6;
    int sixSp = 6;
    int sixCl = 6;
    int sixHe = 6;
    int sevDi = 7;
    int sevSp = 7;
    int sevCl = 7;
    int sevHe = 7;
    int eightDi = 8;
    int eightSp = 8;
    int eightCl = 8;
    int eightHe = 8;
    int nineDi = 9;
    int nineSP = 9;
    int nineCl = 9;
    int nineHe = 9;
    int tenDi = 10;
    int tenSp = 10;
    int tenCl = 10;
    int tenHe = 10;
    int jackDi = 11;
    int jackSp = 11;
    int jackCl = 11;
    int jackHe = 11;
    int queenDi = 12;
    int queenSp = 12;
    int queenCl = 12;
    int queenHe = 12;
    int kingDi = 13;
    int kingSp = 13;
    int kingCl = 13;
    int kingHe = 13;
}

