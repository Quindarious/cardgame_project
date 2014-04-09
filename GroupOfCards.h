/****************************************************************************
* GroupOfCards.h
* John Robert Boyer
* 
* This class is used to store and manipulate a group of cards.
****************************************************************************/

#include "Card.h"

#ifndef GROUP_OF_CARDS_H
#define GROUP_OF_CARDS_H
class GroupOfCards
{
  public:
    GroupOfCards();
    static const int MAX_CARDS = 52;
    void display() const;

  protected:
    Card *cards[MAX_CARDS]; // array of pointers to Card objects. 
    int currentSize; 
};
#endif