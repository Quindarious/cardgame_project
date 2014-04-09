/****************************************************************************
* Deck.h
* John Robert Boyer
* 
* This class is used to store and manipulate a deck of 52 cards.
****************************************************************************/

#include <stdlib.h>
#include <time.h>
#include "Deck.h"

Deck::Deck()
{
  srand(time(NULL)); // seed random numbers.
  reset();
}

// Randomly arrange all the cards in the Deck object.

Deck& Deck::shuffle()
{
  Card *temp; // Card pointer. Used to swap cards.
  int randomIndex;

  // loop through each card in the deck...
  for (int i=0; i<currentSize; i++)
  {
    // and swap each card with a random one in the array. 
    randomIndex = rand() % currentSize;
    temp = cards[randomIndex];
    cards[randomIndex] = cards[i];
    cards[i] = temp;
  } // end for

  return *this; // allow for method chaining.
} // end shuffle

// Get the highest indexed card in the cards array and remove it from the cards array.

Card Deck::dealCard()
{
  Card dealtCard = *cards[currentSize - 1]; // card to be dealt and removed.

  delete cards[currentSize - 1]; // remove from array
  currentSize--; // decrement currentSize

  return dealtCard; // return dealt card.
} // end dealCard

// restore the deck so that it contains 52 cards.

void Deck::reset()
{
  currentSize = 0;

  for (int suits = 1; suits <= Card::DIAMONDS; suits++) // loop through suits
  {
    for (int ranks = 1; ranks <= Card::KING; ranks++) // loop through ranks
    {
      // create a new card with enum values based on loop indexes.
      // new keyword required - otherwise, fills all with same memory address.
      cards[currentSize] = new Card(static_cast<Card::Rank> (ranks), static_cast<Card::Suit> (suits));
      currentSize++; // increment currentSize
    } // end for
  } // end for
} // end reset