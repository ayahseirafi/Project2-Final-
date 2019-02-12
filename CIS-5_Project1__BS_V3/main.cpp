/* 
 * File:   main.cpp
 * Author: Ayah Seirafi
 *
 * Created on February 1, 2019, 11:03 PM
 */

#include <cstdlib>
int grabRandomCard();
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

     runGame();
     char choice;



     cout << "Do you want to play again? ";
     cin >> choice;
     while(choice == 'Y' || choice == 'y')
     {
         runGame();
         cout << "Do you want to play again? ";
         cin >> choice;
     }

     return 0;
}

//function
void runGame()
{
     int plr1cnt = 26;
     int plr2cnt = 26;
     int pile = 1;
     int face = 1;
     int bsProb = 0;
     int reqCard = 0;
     char option;
     bool isGamOv = false;
     bool match = true;
     srand(time(NULL));

     cout << "Game started! the current face card is: " << face << endl;

     do
     {
         //player one
         cout << "\nPLAYER 1'S TURN:";
         cout << "\nPress the Enter key to place down the required card: ";
         getchar();
         cin.ignore();
         reqCard = grabRandomCard();
         pile++;
         cout << "you have a " << reqCard << endl;

         if(reqCard == (face + 1))
         {
             cout << "do you want to place down the card? [Y/N] ";
         }
         else
         {
             cout << "do you want to BS? [Y/N] ";
         }

         cin >> option;
         if(option == 'Y' || option == 'y')
         {
             plr1cnt--;

             if(face == 13)
             {
                 face = 0;
             }
             if(reqCard == (face + 1))
             {
                 match = true;
             }
             else
             {
                 match = false;
             }

             //25% chance plyr 2 will call bs
             bsProb = rand() % 4 + 1;
             if(bsProb == 4)
             {
                 cout << "Player 2 called BS!" << endl;
                 if(match == false)
                 {
                     cout << "Player 2 is correct! You picked up the pile"
                     << "\n";
                     plr1cnt += pile;
                 }
                 else
                 {
                     cout << "Sorry, Player 1 placed down the correct 
card\n";
                     cout << "Player 2 picked up the pile" << endl;
                     plr2cnt += pile;
                 }
             }

             if(plr1cnt == 25)
             {
                 cout << "Player 1 Wins!" << endl;
                 isGamOv = true;
             }
         }
         else
         {
             cout << "You picked up the pile" << endl;
             plr1cnt += pile;
         }
    
    return 0;
}
// with this prototype, we can bring in some cards
int grabRandomCard()
{
     int card = 0;
     int num = rand() % 13 + 1;
     switch(num)
     {
         case 1: card = 1; break;
         case 2: card = 2; break;
         case 3: card = 3; break;
         case 4: card = 4; break;
         case 5: card = 5; break;
         case 6: card = 6; break;
         case 7: card = 7; break;
         case 8: card = 8; break;
         case 9: card = 9; break;
         case 10: card = 10; break;
         case 11: card = 11; break;
         case 12: card = 12; break;
         case 13: card = 13; break;
     }
