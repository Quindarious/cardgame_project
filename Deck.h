/****************************************************************************
* Deck.h
* John Robert Boyer
* 
* This class is used to store and manipulate a deck of 52 cards.
****************************************************************************/

#include "GroupOfCards.h"

#ifndef DECK_H
#define DECK_H
class Deck : public GroupOfCards
{
  public:
    Deck();
    Deck& shuffle();
    Card dealCard();
    void reset();
};
#endif