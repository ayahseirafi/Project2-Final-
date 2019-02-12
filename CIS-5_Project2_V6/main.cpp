/* 
 * File:   main.cpp
 * Author: Ayah Seirafi
 *
 * Created on February 10, 2019, 8:59 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <chrono>
#include <random>
#include <limits>
#include <cctype>
using namespace std;

//prototypes
void runGame();
class Test
{
   private:
      int count;

   public:
       Test(): count(5){}

       void operator ++() 
       { 
          count = count+1; 
       }
       void Display() { cout<<"Count: "<<count; }
};

//execution begins here
int main(int argc, char** argv)
{
    runGame();
    char choice;

    cout << "Do you want to play again? [Y/N] ";
    cin >> choice;
    while(choice == 'Y' || choice == 'y')
    {
        runGame();
        cout << "Do you want to play again? [Y/N] ";
        cin >> choice;
    }

    return 0;
}

//function
void runGame()
{
    srand(time(NULL));
    int bsProb = 0;
    int input;  //user input code
    int reqCardValue = 1;    //value of card that is required for "NOT BS"
    int num;
    string card;
    string temp;
    char option;
    char key;   //first character of chosen card
    bool isGamOv = false;
    bool bs = false;    //determines if user input is BS
    bool skipCheck = false; //set to true if user chose to scoop pile
    vector<string> p1Hand;
    vector<string> p2Hand;
    vector<string> stack;
    std::array<string, 52> deck
    {   "Ace Diamonds", "Ace Spades", "Ace Hearts", "Ace Clubs",
        "2 Diamonds",   "2 Spades", "2 Hearts", "2 Clubs",
        "3 Diamonds", "3 Spades", "3 Hearts", "3 Clubs",
        "4 Diamonds", "4 Spades", "4 Hearts", "4 Clubs",
        "5 Diamonds", "5 Spades", "5 Hearts", "5 Clubs",
        "6 Diamonds", "6 Spades", "6 Hearts", "6 Clubs",
        "7 Diamonds", "7 Spades", "7 Hearts", "7 Clubs",
        "8 Diamonds", "8 Spades", "8 Hearts", "8 Clubs",
        "9 Diamonds", "9 Spades", "9 Hearts", "9 Clubs",
        "10 Diamonds", "10 Spades", "10 Hearts", "10 Clubs",
        "Jack Diamonds", "Jack Spades", "Jack Hearts", "Jack Clubs",
        "Queen Diamonds", "Queen Spades", "Queen Hearts", "Queen Clubs",
        "King Diamonds", "King Spades", "King Hearts", "King Clubs"
    };

    //initial message
    cout << "Game started!\n";
    cout << "The card required is: \"" << "Ace" << "\"\n";

    //randomize deck array
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle (deck.begin(), deck.end(), std::default_random_engine(seed));

    //fills player 1's hand
    for(int i = 0; i < 26; i++)
    {
        p1Hand.insert(p1Hand.begin(), deck[i]);
    }

    //fills player 2's hand
    for(int i = 26; i < 52; i++)
    {
        p2Hand.insert(p2Hand.begin(), deck[i]);
    }
    /*Test t;
    // this calls "function void operator ++()" function
    ++t;    
    t.Display();
    return 0;*/
    //begin continuous loop between players
    do
    {
// ************************ PLAYER 1'S TURN ************************************

        // output player 1 hand
        cout << "\nPLAYER 1'S TURN\n";
        //cout << "The card required is: \"" << reqCardName << "\"\n";
        cout << "YOUR HAND:\n";
        for(int i = 0; i < p1Hand.size(); i++)
        {
            cout << (i + 1) << ": " << p1Hand[i] << endl;
        }

        // prompt user for input and begin switch
        cout << "Enter the card you would like to play.\n";
        cout << "Enter 0 to view Player 2's hand size.\n";
        cout << "Enter any other key to pick up the pile: ";
// int i = 10, j = 20;
     // swapThemByVal(i, j);
     // cout << i << "  " << j << endl;     // displays 10  20
     // swapThemByRef(i, j);
      //cout << i << "  " << j << endl;     // displays 20  10
        do
        {
            cin >> input;

            //force input to be an in-range integer
            if((input > p1Hand.size()) || cin.fail())
            {
                input = 51;

                //repair instream and clear buffer
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
            }

            switch(input)
            {
                case 0:
                    cout << "\nPlayer 2 has " << p2Hand.size() << " cards.\n\n";
                    cout << "Enter the card you would like to play.\n";
                    cout << "Enter 0 to view Player 2's hand size.\n";
                    cout << "Enter any other key to pick up the pile: ";
                    break;
                case 1:
                    card = p1Hand.at(input - 1);
                    break;
                case 2:
                    card = p1Hand.at(input - 1);
                    break;
                case 3:
                    card = p1Hand.at(input - 1);
                    break;
                case 4:
                    card = p1Hand.at(input - 1);
                    break;
                case 5:
                    card = p1Hand.at(input - 1);
                    break;
                case 6:
                    card = p1Hand.at(input - 1);
                    break;
                case 7:
                    card = p1Hand.at(input - 1);
                    break;
                case 8:
                    card = p1Hand.at(input - 1);
                    break;
                case 9:
                    card = p1Hand.at(input - 1);
                    break;
                case 10:
                    card = p1Hand.at(input - 1);
                    break;
                case 11:
                    card = p1Hand.at(input - 1);
                    break;
                case 12:
                    card = p1Hand.at(input - 1);
                    break;
                case 13:
                    card = p1Hand.at(input - 1);
                    break;
                case 14:
                    card = p1Hand.at(input - 1);
                    break;
                case 15:
                    card = p1Hand.at(input - 1);
                    break;
                case 16:
                    card = p1Hand.at(input - 1);
                    break;
                case 17:
                    card = p1Hand.at(input - 1);
                    break;
                case 18:
                    card = p1Hand.at(input - 1);
                    break;
                case 19:
                    card = p1Hand.at(input - 1);
                    break;
                case 20:
                    card = p1Hand.at(input - 1);
                    break;
                case 21:
                    card = p1Hand.at(input - 1);
                    break;
                case 22:
                    card = p1Hand.at(input - 1);
                    break;
                case 23:
                    card = p1Hand.at(input - 1);
                    break;
                case 24:
                    card = p1Hand.at(input - 1);
                    break;
                case 25:
                    card = p1Hand.at(input - 1);
                    break;
                case 26:
                    card = p1Hand.at(input - 1);
                    break;
                case 27:
                    card = p1Hand.at(input - 1);
                    break;
                case 28:
                    card = p1Hand.at(input - 1);
                    break;
                case 29:
                    card = p1Hand.at(input - 1);
                    break;
                case 30:
                    card = p1Hand.at(input - 1);
                    break;
                case 31:
                    card = p1Hand.at(input - 1);
                    break;
                case 32:
                    card = p1Hand.at(input - 1);
                    break;
                case 33:
                    card = p1Hand.at(input - 1);
                    break;
                case 34:
                    card = p1Hand.at(input - 1);
                    break;
                case 35:
                    card = p1Hand.at(input - 1);
                    break;
                case 36:
                    card = p1Hand.at(input - 1);
                    break;
                case 37:
                    card = p1Hand.at(input - 1);
                    break;
                case 38:
                    card = p1Hand.at(input - 1);
                    break;
                case 39:
                    card = p1Hand.at(input - 1);
                    break;
                case 40:
                    card = p1Hand.at(input - 1);
                    break;
                case 41:
                    card = p1Hand.at(input - 1);
                    break;
                case 42:
                    card = p1Hand.at(input - 1);
                    break;
                case 43:
                    card = p1Hand.at(input - 1);
                    break;
                case 44:
                    card = p1Hand.at(input - 1);
                    break;
                case 45:
                    card = p1Hand.at(input - 1);
                    break;
                case 46:
                    card = p1Hand.at(input - 1);
                    break;
                case 47:
                    card = p1Hand.at(input - 1);
                    break;
                case 48:
                    card = p1Hand.at(input - 1);
                    break;
                case 49:
                    card = p1Hand.at(input - 1);
                    break;
                case 50:
                    card = p1Hand.at(input - 1);
                    break;
                default:
                    cout << "\nThe pile has been added to your hand." << endl;
                    for(int i = 0; i < stack.size(); i++)
                    {
                        p1Hand.insert(p1Hand.begin(), stack.at(i));
                    }
                    skipCheck = true;
            }
        } while (input == 0);

        //check for BS using ASCII
        if(skipCheck == false)
        {
            temp = p1Hand.at(input - 1);
            key = temp.at(0);

            if(key == 'A')
            {
                num = (static_cast<int>(key) - 64);
            }
            else if(key == '2')
            {
                num = (static_cast<int>(key) - 48);
            }
            else if(key == '3')
            {
                num = (static_cast<int>(key) - 47);
            }
            else if(key == '4')
            {
                num = (static_cast<int>(key) - 46);
            }
            else if(key == '5')
            {
                num = (static_cast<int>(key) - 45);
            }
            else if(key == '6')
            {
                num = (static_cast<int>(key) - 44);
            }
            else if(key == '7')
            {
                num = (static_cast<int>(key) - 43);
            }
            else if(key == '8')
            {
                num = (static_cast<int>(key) - 42);
            }
            else if(key == '9')
            {
                num = (static_cast<int>(key) - 41);
            }
            else if(key == '1')
            {
                num = (static_cast<int>(key) - 40);
            }
            else if(key == 'J')
            {
                num = (static_cast<int>(key) - 63);
            }
            else if(key == 'Q')
            {
                num = (static_cast<int>(key) - 69);
            }
            else if(key == 'K')
            {
                num = (static_cast<int>(key) - 62);
            }

            //set BS indicator
            if(num != (reqCardValue + 1))
            {
                bs = true;
            }

            //confirm
            cout << "\nYou placed the following card face down: " << card
                 << "\n";

            //player 2 will randomly call BS 25% of the time
            bsProb = rand() % 4 + 1;
            if(bsProb == 4)
            {
                cout << "Player 2 called BS!" << endl;
                if(bs == true)
                {
                    cout << "Player 2 is correct! "
                            "The pile has been added to your hand.\n";
                    for(int i = 0; i < stack.size(); i++)
                    {
                        p1Hand.insert(p1Hand.begin(), stack.at(i));
                    }
                    reqCardValue = 1;
                }
                else
                {
                    cout << "You placed down the correct card! ";
                    cout << "The pile has been added to Player 2's hand.\n";
                    for(int i = 0; i < stack.size(); i++)
                    {
                        p2Hand.insert(p2Hand.begin(), stack.at(i));
                    }
                    reqCardValue = 1;
                }
            }
            else
            {
                //player 2 did not call BS; discard card and add it to the pile
                stack.insert(stack.begin(), p1Hand.at(input - 1));
                p1Hand.erase(p1Hand.begin() + (input - 1));
                if(num == 14)
                {
                    //go from King to Ace
                    reqCardValue = 0;
                }
                reqCardValue++;
            }
        }
        //reset
        skipCheck == false;

        //check if player 1 won the game
        if(p1Hand.size() == 23)
        {
            cout << "Player 1 Wins!" << endl;
            isGamOv = true;
        }

// ************************ PLAYER 2'S TURN ************************************

        if(isGamOv != true)
        {
            cout << "\nPLAYER 2'S TURN:" << endl;

            //loop through player 2's hand to see if the required card exists
            int goodCardSpot = 15;

            for(int i = 0; i < (p2Hand.size() - 1); i++)
            {
                temp = p1Hand.at(i);
                key = temp.at(0);

                if(key == 'A')
                {
                    num = (static_cast<int>(key) - 64);
                }
                else if(key == '2')
                {
                    num = (static_cast<int>(key) - 48);
                }
                else if(key == '3')
                {
                    num = (static_cast<int>(key) - 47);
                }
                else if(key == '4')
                {
                    num = (static_cast<int>(key) - 46);
                }
                else if(key == '5')
                {
                    num = (static_cast<int>(key) - 45);
                }
                else if(key == '6')
                {
                    num = (static_cast<int>(key) - 44);
                }
                else if(key == '7')
                {
                    num = (static_cast<int>(key) - 43);
                }
                else if(key == '8')
                {
                    num = (static_cast<int>(key) - 42);
                }
                else if(key == '9')
                {
                    num = (static_cast<int>(key) - 41);
                }
                else if(key == '1')
                {
                    num = (static_cast<int>(key) - 40);
                }
                else if(key == 'J')
                {
                    num = (static_cast<int>(key) - 63);
                }
                else if(key == 'Q')
                {
                    num = (static_cast<int>(key) - 69);
                }
                else if(key == 'K')
                {
                    num = (static_cast<int>(key) - 62);
                }

                if(num == (reqCardValue + 1))
                {
                    goodCardSpot = i;   //This is redundant but ok because it's
                                        //finding a card that can be played
                }
            }

            skipCheck = false;
            if(goodCardSpot == 15)
            {
                //no cards in player 2's hand matched
                //player 2 will attempt to BS 75% of the time
                //a random card from his hand will be played
                bsProb = rand() % 4 + 1;
                if(bsProb == 1 || bsProb == 2 || bsProb == 3)
                {
                    int x = p2Hand.size();
                    goodCardSpot = (rand() % x + 1);
                    bs = true;
                    cout << "Player 2 placed a card face down.\n";
                }
                else
                {
                    cout << "Player 2 chose to add the pile to their hand!\n";
                    for(int i = 0; i < stack.size(); i++)
                    {
                        p2Hand.insert(p2Hand.begin(), stack.at(i));
                    }
                    skipCheck == true;
                }
            }
            else
            {
                //player 2 has a match
                bs = false;
                cout << "Player 2 placed a card face down.\n";
            }

            //choose to call BS
            if(skipCheck == false)
            {
                cout << "Do you want to call BS on Player 2? [Y/N] ";
                cin >> option;
                cout << endl;
                if(option == 'Y' || option == 'y')
                {
                    if(bs == true)
                    {
                        //no need for player 2 to discard since they are adding
                        //the pile to their hand anyways
                        cout << "Player 1 is correct! Player ";
                        cout << "2 added the pile to their hand." << "\n";
                        for(int i = 0; i < stack.size(); i++)
                        {
                            p2Hand.insert(p2Hand.begin(), stack.at(i));
                        }
                        reqCardValue = 0;
                    }
                    else
                    {
                        //player 2 did not BS
                        stack.insert(stack.begin(), p2Hand.at(goodCardSpot));
                        p2Hand.erase(p2Hand.begin() + goodCardSpot);
                        reqCardValue++;

                        cout << "Sorry, Player 2 placed down the correct card!"
                             << endl;
                        cout << "You picked up the pile." << endl;
                        for(int i = 0; i < stack.size(); i++)
                        {
                            p1Hand.insert(p1Hand.begin(), stack.at(i));
                        }
                        reqCardValue = 0;
                    }
                }
                else
                {
                    //Player 1 chose not to call BS
                    stack.insert(stack.begin(), p2Hand.at(goodCardSpot));
                    p2Hand.erase(p2Hand.begin() + goodCardSpot);
                    reqCardValue++;
                }
            }

            //check if player 2 won the game
            if(p2Hand.size() == 23)
            {
                cout << "Player 2 Wins!" << endl;
                isGamOv = true;
            }
        }
    } while (isGamOv == false);
}
