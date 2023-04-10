#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.h"
#include"card.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
    Card mycard;
    for (int i = 0; i <= 3; ++i)
    {
        for (int j = 0; j <= 12; ++j)
        {
            mycard.setCard(j, i);
            deck.push_back(mycard.toString());
        }
    }
    currentCard = 0;
}

void DeckOfCards::shuffle()
{
    currentCard = 0;
    for (int i = 0; i <= 51; ++i)
    {
        int j = rand() % 52;
        temp[i] = deck[i];
        deck[i] = deck[j];
        deck[j] = temp[i];
    }
}

string DeckOfCards::dealCard()
{
    if (moreCards())
    {
        return deck[currentCard++];
    }
}

bool DeckOfCards::moreCards() const
{
    return currentCard <= 51;
}
