/*
Author: Shuheng Li
Date: 25/04/2016
*/

#include "card.h"

void Card::setVal(int v)
{
	val = v;
}

void Card::setgSuit(int s)
{

	switch (s)
	{
	case 0: suit = spade;
		break;
	case 1: suit = heart;
		break;
	case 2: suit = diamond;
		break;
	case 3:suit = club;
		break;
	default:
		break;
	}
}


int Card::getVal() const
{
	return val;
}

Suit Card::getSuit() const
{
	return suit;
}

std::string Card::getFace()
{
	switch (suit)
	{
	case 0: Face = "Spade "; break;
	case 1: Face = "Heart "; break;
	case 2: Face = "Diamond "; break;
	case 3: Face = "Club "; break;
	default:	break;
	}
	if (val >= 1 && val<= 9) {
		Face += std::to_string(val + 1);
	}
	else {
		switch (val) {
		case 0: Face += 'A'; break;
		case 10: Face += 'J'; break;
		case 11: Face += 'Q'; break;
		case 12: Face += 'K'; break;
		default: break;
		}
	}
	return Face;
}
