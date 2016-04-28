/*
Author: Shuheng Li
Date: 25/04/2016
*/

#pragma once
#ifndef DECK_H
#define DECK_H
#include<iostream>
#include<vector>
#include<ctime>
#include"card.h"

class Deck {
private:
	std::vector<Card> cards;
	static int size;
	void reset();
public:
	Deck();

	void showDeck();
	void shuffle();
	Card drawCard();
	bool isEmpty() const;
	static int getSize();
};

#endif