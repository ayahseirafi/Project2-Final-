/* 
 * File:   main.cpp
 * Author: Ayah Seirafi
 *
 * Created on February 2, 2019, 10:19 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//prototypes
int grabRandomCard();
void runGame();

//execution begins here
int main()
{
     runGame(); // prototype to run game
     char choice; // choice for player to say yes or no

     // ask user if they want to after the game was run
     cout << "Do you want to play again? ";
     cin >> choice;
     //if they say yes, we will run the game again
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
    //Declare Variables
     int plr1cnt = 26; // player one will start with 26 cards
     int plr2cnt = 26; // player two will start with 26 cards
     int pile = 1; // the card pile will start with 1 card
     int face = 1; // the pile will start with 1 (which is ace)
     int bsProb = 0; // probability for computer to call BS
     int reqCard = 0; // next card needed to be placed on pile
     char option;  // users option to call BS
     bool isGamOv = false; // does either player get to 0 cards in thir game
     bool match = true; // do the card in their hands hatch what they need
     string name; // player 1 name
     
     // random seed generator
     srand(time(NULL)); 
     
    // game starts here
     cout << "Welcome to BS!  Please enter your name. " << endl;
     cin >> name;
     cout << "Okay, good luck " << name << "! Lets see how well you can BS a computer!" << endl;
     cout << "Game started! the current face card is: " << face << endl;

     do
     {
         //player one
         cout << "\nPLAYER 1'S TURN:";
         cout << "\nPress the Enter key to place down the required card: ";
         getchar();  // get card
         cin.ignore();
         reqCard = grabRandomCard(); 
         pile++; // the pile will increase when player places card down
         cout << "you have a " << reqCard << endl; // state hand

         if(reqCard == (face + 1)) // next card
         {
             // give user option to place correct card down
             cout << "do you want to place down the card? [Y/N] ";
         }
         else
         {
             // give user option to BS
             cout << "do you want to BS? [Y/N] ";
         }
         // have user input whether they want to BS
         cin >> option;
         if(option == 'Y' || option == 'y') // yes they want to BS
         {
             plr1cnt--; // player 1 loses card after one is laced down

             if(face == 13) // this will start deck over again
             {
                 face = 0;
             }
             if(reqCard == (face + 1)) // next card
             {
                 match = true; // card matches
             }
             else
             {
                 match = false; // card doesn't match
             }

             //25% chance plyr 2 will call BS
             bsProb = rand() % 4 + 1;
             if(bsProb == 4) 
             {
                 cout << "Player 2 called BS!" << endl;
                 if(match == false) // player that we called BS on was correct
                 {
                     cout << "Player 2 is correct! You picked up the pile"
                     << "\n";
                     plr1cnt += pile; // player 1 takes the pile
                 }
                 else
                 {
                     // if BS is called and it was wrong
                     cout << "Sorry, Player 1 placed down the correct card\n";
                     cout << "Player 2 picked up the pile" << endl;
                     plr2cnt += pile; //player 2 takes pile
                 }
             }

             if(plr1cnt == 0) // player 1 runs out of cards
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


         //player two
         if(isGamOv == false)
         {
             cout << "\nPLAYER 2'S TURN:" << endl;
             cout << "Player 2 placed down a card" << endl;
             reqCard = grabRandomCard();

             plr2cnt--; // player 2 loses card

             if(face == 13) // start over when card reaches 13
             {
                 face = 0;
             }
             if(reqCard == (face + 1)) // next card
             {
                 match = true; // card matched
             }
             else
             {
                 match = false; // card doesn't match
             }
             // give player 1 option to call BS
             cout << "Do you want to call BS on Player 2? [Y/N] ";
             cin >> option;
             if(option == 'Y' || option == 'y')
             {
                 if(match == false) // cals BS
                 {
                     cout << "Player 1 is correct! Player 2 picked up the pile" << endl;
                     plr2cnt += pile; // player 2 must take pile
                 }
                 else // if player 2 places down correct card
                 {
                     cout << "Sorry, Player 2 placed down the correct card\n";
                     cout << "You picked up the pile" << endl;
                     plr1cnt += pile; // player 1 takes pile
                 }
             }

             if(plr2cnt == 0) // when player 2 runs out of cards, player 2 wins
             {
                 cout << "Player 2 Wins!" << endl;
                 isGamOv = true;
             }
         }

     }while(isGamOv == false); // game over
}



//function to generate random card
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

     return card;
}

