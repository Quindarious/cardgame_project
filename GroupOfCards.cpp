/****************************************************************************
* GroupOfCards.cpp
* John Robert Boyer
* 
* This class is used to store and manipulate a group of cards.
****************************************************************************/

#include <iostream>
#include "GroupOfCards.h"

using namespace std;

GroupOfCards::GroupOfCards()
  :currentSize(0)
{ }

// This function displays the contents of this group of cards.

void GroupOfCards::display() const 
{
  for (int i=0; i<currentSize; i++)
  {
    static_cast<Card> (*cards[i]).display(); // get card pointer from array.
    cout << (((i + 1) % 5 == 0) ? "\n" : " "); // newline every 5 characters.
  } // end for
  cout << '\n'; // new line after all cards are printed.
} // end display