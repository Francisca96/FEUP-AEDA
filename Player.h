#pragma once

#include <string>
#include <vector>
#include "utils.h"
#include "Dealer.h"

using namespace std;

class Player {
private:
	string name;
	unsigned int initialMoney;
	unsigned int currentMoney;
	vector <Card> hand;
	unsigned int handScore;
	int averageProfit;


public:
	void hit(Card newCard);
	void takeInsurance();
	void surrender();
	void split();
	void doubleDown();
	unsigned int getHandSize();
	unsigned int setHandScore();
	unsigned int getHandScore();
	void setCurrentMoney(unsigned int money);
	unsigned int getCurrentMoney();
	void addMoney(unsigned int value);
	//bots currently bet's always the minValue
	virtual unsigned int bet(unsigned int minValue, unsigned int maxValue);
	virtual string play(Dealer &dealerOfTable) = 0;
};

//////////////////////////////////////////////////// BOT 0 ////////////////////////////////////////////////////
class Bot0: public Player {
public:
	//play method
	string play(Dealer &dealerOfTable);
};

//////////////////////////////////////////////////// BOT 1 ////////////////////////////////////////////////////
class Bot1: public Player {
public:
	//play method
	string play(Dealer &dealerOfTable);
};

//////////////////////////////////////////////////// BOT 2 ////////////////////////////////////////////////////
class Bot2 : public Player {
public:
	//play method
	string play(Dealer &dealerOfTable);
};
//////////////////////////////////////////////////// HUMAN ////////////////////////////////////////////////////
class Human: public Player {
public:
	unsigned int bet(unsigned int minValue, unsigned int maxValue);
};