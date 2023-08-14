#pragma once
#include "Card.h"

class Dealer {
private:
	Dealer();
	~Dealer();

public:
	void getValue();
	void getQuant();
	void gameStart();
	/*void checkDealerHand(); <--Задник*/ 
};

class Player {
private:
	Player();
	~Player();

public:
	void getValue();
	void getQuant();
	/*void checkPlayerHand(); <--Задник*/
};

class Table {
private:
	Table();
	~Table();
public:
	Table newTable(){}
};

namespace GameLogic {
	class Hand {
	public:
		void createDealerHand(GameLogic::Hand dealHand);
		void createPlayerHand(GameLogic::Hand playHand);
		void Take(Card card) {

		}
	};
}

namespace GameLogic {
	class Deck {
	public:
		void createDealerDeck(GameLogic::Deck dealDeck);
		void createPlayerDeck(GameLogic::Deck playDeck);
		void Take(GameLogic::Card card) {

		}
	};
}