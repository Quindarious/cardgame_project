/****************************************************************************
* Card.cpp
* John Robert Boyer
* 
* This class is used to store and display a single card.
****************************************************************************/

#include <iostream>
#include <iomanip>
#include "Card.h"

using namespace std;

Card::Card()
{ }

Card::Card(Rank num, Suit suit)
{
  assign(num, suit);
}

// Assigns the passed-in num and suit values to the card

Card& Card::assign(Rank num, Suit suit)
{
  Card::num = num;
  Card::suit = suit;
  return *this;
} // end assign

// Returns the rank of the card

Card::Rank Card::getRank() const
{
  return num;
} // end getRank

// Returns the suit of the card

Card::Suit Card::getSuit() const
{
  return suit;
} // end getSuit

// Prints the card to the console.

void Card::display() const
{
  cout << setw(2);
  switch (num)
  {
    case ACE:
      cout << 'A';
      break;
    case TWO:
      cout << '2';
      break;
    case THREE:
      cout << '3';
      break;
    case FOUR:
      cout << '4';
      break;
    case FIVE:
      cout << '5';
      break;
    case SIX:
      cout << '6';
      break;
    case SEVEN:
      cout << '7';
      break;
    case EIGHT:
      cout << '8';
      break;
    case NINE:
      cout << '9';
      break;
    case TEN:
      cout << "10";
      break;
    case JACK:
      cout << 'J';
      break;
    case QUEEN:
      cout << 'Q';
      break;
    case KING:
      cout << 'K';
      break;
  } // end switch

  switch (suit)
  {
    case SPADES:
      cout << '\x06';
      break;
    case CLUBS:
      cout << '\x05';
      break;
    case HEARTS:
      cout << '\x03';
      break;
    case DIAMONDS:
      cout << '\x04';
      break;
  } // end switch
} // end display