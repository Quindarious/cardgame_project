/****************************************************************************
* Card.h
* John Robert Boyer
* 
* This class is used to store and display a single card.
****************************************************************************/

#ifndef CARD_H
#define CARD_H
class Card
{
  public:
    enum Rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
    enum Suit {SPADES=1, CLUBS, HEARTS, DIAMONDS};

    Card();
    Card(Rank num, Suit suit);
    Card& assign(Rank num, Suit suit);
    void display() const;

    Rank getRank() const;
    Suit getSuit() const;
  
  private:
    Rank num;
    Suit suit;
};
#endif