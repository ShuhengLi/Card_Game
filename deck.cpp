/*
Author: Shuheng Li
Date: 25/04/2016
*/

#include "deck.h"

int Deck::size = 52;
Deck::Deck()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			Card c;
			c.setgSuit(i);
			c.setVal(j);
			cards.push_back(c);
		}
	}
}

void Deck::reset()
{
	if(!cards.empty()){
		cards.clear();
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			Card c;
			c.setgSuit(i);
			c.setVal(j);
			cards.push_back(c);
		}
	}
}

void Deck::showDeck()
{
	for (int i = 0; i < cards.size(); i++) {
		std::cout << cards[i].getFace()<< std::endl;
	}
}

void Deck::shuffle()
{
	reset();
	srand((unsigned int)time(NULL));//use srand get a random number to achieve shuffle deck
	for (int i = 0; i < 52; i++)
	{
		int j = rand() % 52;
		std::swap(cards[i], cards[j]);
	}
	size = 52;
}

Card Deck::drawCard()
{
	if (cards.empty()) {
		std::cout << "No more cards in the deck, need to shuffle the deck" << std::endl;
	}
	else {
		Card res = cards.back();
		cards.pop_back();
		size--;
		return res;
	}
	
}

bool Deck::isEmpty() const
{

	return size<1;
}

int Deck::getSize()
{
	return size;
}
