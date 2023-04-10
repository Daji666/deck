
#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string> 
using namespace std;

class Card
{
	friend class DeckOfCards;
public:
    static const int faces = 13;
    static const int suits = 4;
    Card();
    void setCard(int,int);
    string toString() const;
    ~Card();
private:
    int face;
    int suit;
    static const string faceNames[faces];
    static const string suitNames[suits];
};

#endif

