/****************************************************************************
* Game.cpp
* John Robert Boyer
* 
* This class is used to simulate a card game.
****************************************************************************/

#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
{ }

// This function simulates a simple game.

void Game::playAGame()
{
  cout << "\nAN EXCELLENT CHOICE.\n";

  player1.reset();
  player2.reset();
  deck.reset();
  deck.shuffle();

  // deal cards (5 each)
  for (int i=0; i<5; i++)
  {
    player1.addCard(deck.dealCard());
    player2.addCard(deck.dealCard());
  } // end for  

  cout << "\nBEHOLD THE DECK:\n";
  deck.display();

  cout << "\nNOW HARK THE HAND OF PLAYER1:\n";
  player1.display();

  cout << "\nBUT NIGH IS THE COMING OF THE HAND OF PLAYER2:\n";
  player2.display();
} // end playAGame