#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include "Card.h"
#include <vector>
#include <string>

class DeckOfCards
{
	friend class Card;
public:
    DeckOfCards();
    void shuffle();
    string dealCard();
    bool moreCards() const;

private:
	vector<string>deck;
    vector<string>temp;
    int currentCard;
	Card mycard;
    
};
#endif

