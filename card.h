/*
Author: Shuheng Li
Date: 25/04/2016
*/

#pragma once
#ifndef CARD_H
#define CARD_H

#include<string>
enum Suit
{
	spade, heart, diamond, club
};

class Card {
private:
	int val;
	Suit suit;
	std::string Face; // save both card value and card suit in this string
public:
	void setVal(int);
	void setgSuit(int);
	int getVal()const;
	Suit getSuit()const;
	std::string getFace();
};


#endif	CARD_H