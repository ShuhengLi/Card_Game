/*
Author: Shuheng Li
Date: 25/04/2016
*/

#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<vector>
#include"card.h"

class Player {
private: 
	int maxCardNum = 5;
	std::vector<Card> handCards;
public:
	void insertCard(Card);
	void showHands();
};

#endif PLAYER_H
