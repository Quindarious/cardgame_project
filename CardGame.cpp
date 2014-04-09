/****************************************************************************
* CardGame.cpp
* John Robert Boyer
* 
* This program runs a game.
****************************************************************************/

#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
  char userInput = ' ';
  Game game;

  cout << "WELCOME, MORTAL, TO SIMPLEGAME - A GAME BY SIMPLECORP\n\n";
  cout << "TO PLAY, USE YOUR INFERIOR MEATSACK APPENDAGES TO INPUT A PRIMITIVE Y OR N.\n";

  cout << "WOULD YOU LIKE TO CHALLENGE YOUR PUNY INTELLECT WITH A CHILDISH GAME? (Y/N): ";
  cin >> userInput;

  while (userInput == 'y' || userInput == 'Y')
  {
    game.playAGame();
    cout << "\nWOULD YOU LIKE TO ATTEMPT TO REGAIN YOUR SANITY WITH ANOTHER GAME? (Y/N): ";
    cin >> userInput;
  }

  cout << "\nIT SEEMS THAT THE COLLECTIVE HAS ACHIEVED GLORIOUS TRIUMPH YET AGAIN.\n" 
       << "GO. STAGGER BACK TO YOUR PITIFUL PHYSICAL SHELL.\n";
} // end main