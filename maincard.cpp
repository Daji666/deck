#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
#include "DeckOfCards.h"
#include"card.h"
using namespace std;

int main()
{
    srand(time(0));
    DeckOfCards deckOfCards;
    deckOfCards.shuffle();
    for (int i = 1; i <= 52; ++i)
    {
        cout<<deckOfCards.dealCard();
        if (i % 13 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << '\t';
        }
    }
}
