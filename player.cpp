/*
Author: Shuheng Li
Date: 25/04/2016
*/

#include "player.h"

void Player::insertCard(Card c)
{
	//Assume Max hand card is 5
	if (handCards.size() >= maxCardNum) {
		std::cout << "Max hand card numbers, can't draw another one" << std::endl;
	}
	else {
		handCards.push_back(c);
	}
}

void Player::showHands() 
{
	for (size_t i = 0; i < handCards.size(); i++) {
		std::cout << handCards[i].getFace() << std::endl;
	}
}
