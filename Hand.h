/****************************************************************************
* Hand.h
* John Robert Boyer
* 
* This class is used to store and manipulate a single hand of cards.
****************************************************************************/

#include "GroupOfCards.h"

#ifndef HAND_H
#define HAND_H
class Hand : public GroupOfCards
{
  public:
    Hand();
    void addCard(Card card);
    void reset();
};
#endif