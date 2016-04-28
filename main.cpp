/*
Author: Shuheng Li
Date: 25/04/2016
*/

#include<iostream>
#include<vector>
#include"deck.h"
#include"player.h"
//#include"player.h"

int NumbersOfPlayer(); // Deal with Input get the number of players
void drawCards(std::vector<Player>&, Deck *);
void showRes(std::vector<Player>);//Deal with Output


int main() {

	int playerNumber;
	playerNumber = NumbersOfPlayer();
	std::vector<Player> players(playerNumber);

	Deck *d = new Deck;//Create a new deck
	d->shuffle();//Shuffle the deck
	drawCards(players, d);//Draw cards;
	showRes(players);//Output
	std::getchar();
}

int NumbersOfPlayer()
{	
	int res = 0;
	std::cout << "Please input valid numbers of players" << std::endl;
	std::cin >> res;
	while (std::cin.fail()) {
		std:: cout << "ERROR! please check your input and input again!" << std::endl;
		std:: cin.clear();
		std:: cin.ignore();
		std:: cin >> res;

	}
	if (res > 0 && res < 53) return res; //assume maxiam player number is 52
	else {
		return NumbersOfPlayer();
	}
}

void drawCards(std::vector<Player>&players,Deck *d) {
	int i = 0;
	//2 conditions to terminate: first deck is empty, second every player has 5 cards
	while (!d->isEmpty() && i < 5) {
		for (size_t j = 0; j < players.size(); j++) {
			if (d->isEmpty()) break;
			players[j].insertCard(d->drawCard());
		}
		i++;
	}
	return;
}

void showRes(std::vector<Player> players)
{
	for (size_t j = 0; j < players.size(); j++) {
		std::cout << "Player [ " << j << " ]'s hand cards: " << std::endl;
		players[j].showHands();
		std::cout << std::endl << std::endl;
	}
	return;
}
