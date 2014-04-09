/****************************************************************************
* Game.h
* John Robert Boyer
* 
* This class is used to simulate a card game.
****************************************************************************/

#include "Hand.h"
#include "Deck.h"

#ifndef GAME_H
#define GAME_H
class Game
{
  public:
    Game();
    void playAGame();

  private:
    Deck deck;
    Hand player1;
    Hand player2;
};
#endif