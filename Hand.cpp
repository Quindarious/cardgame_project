/****************************************************************************
* Hand.cpp
* John Robert Boyer
* 
* This class is used to store and manipulate a single hand of cards.
****************************************************************************/

#include "Hand.h"

Hand::Hand()
{ }

// Add a card to the hand.

void Hand::addCard(Card card)
{
  cards[currentSize] = new Card(card.getRank(), card.getSuit());
  currentSize++;
} // end addCard

// reset the hand to zero cards.

void Hand::reset()
{
  // just reset size - old elements will be overwritten.
  currentSize = 0;
} // end reset