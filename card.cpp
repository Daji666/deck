#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include"card.h"
using namespace std;

const string Card::faceNames[faces] =
    {"Ace", "Deuce", "Three", "Four", "Five", "Six",
     "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

const string Card::suitNames[suits] =
    {"Hearts", "Diamonds", "Clubs", "Spades"};

Card::Card()
{
    face = 0;
    suit = 0;
}
void Card::setCard(int x, int y)
{
    face = x;
    suit = y;

}
string Card::toString() const
{
    return faceNames[face] + " of " + suitNames[suit];
}

Card::~Card()
{

}