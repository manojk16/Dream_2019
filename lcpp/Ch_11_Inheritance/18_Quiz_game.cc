/*
 * 18_Quiz_game.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>
#include <cassert>


using namespace std;

class Creature{
protected:
	string m_name{};
	char m_symbol{};
	int m_health_amount{};
	int m_amount_of_damage{};
	int m_amount_of_gold{};
public:

	Creature(string name, char symbol, int health_amount,  int amount_of_damage, int amount_of_gold):m_name(name),
	m_symbol(symbol),m_health_amount(health_amount),m_amount_of_damage(amount_of_damage),m_amount_of_gold(amount_of_gold){}
	string getName() const{return m_name;}
	char getSymbol() const{return m_symbol;}
	int getHealth() const{return m_health_amount;}
	int getDamage() const {return m_amount_of_damage;}
	int getGold() const{return m_amount_of_gold;}
	void reduceHealth(int factor){
		m_health_amount-=factor;
	}
	bool isDead(){

			return m_health_amount <=0;
	}
	void addGold(int gfactor){
		m_amount_of_gold+=gfactor;
	}


};

class Player:public Creature{
	int m_level{1};
public:
	Player(string name):Creature(name,'@',10,1,0){}
	void levelUp(){
		++m_level;
		++m_amount_of_damage;
	}
	int getLevel() const{return m_level;}
	bool hasWon(){
		return m_level >= 20;
	}
};

class Monster:public Creature{
public:
	enum Type{
		DRAGON,
		ORC,
		SMILE,
		MAX_TYPE,
	};
	struct MonsterData{
		const char* name;
		char symbol;
		int health;
		int damage;
		int gold;

	};

	static MonsterData monsterData[MAX_TYPE];
	Monster(Type type)
			: Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health, monsterData[type].damage, monsterData[type].gold)
		{
		}
};
Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};
int main()
{
	/*Creature o("orc", 'o', 4, 2, 10);
	o.addGold(5);
	o.reduceHealth(1);
	std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.\n";*/
	string Player_name;
	cout << "Enter your name ";
	cin >> Player_name;
	Player p(Player_name);
	cout << "Welcome," << p.getName() << endl;
	cout << "You have " << p.getHealth() << " health " << " and are carrying " << p.getGold() << " Gold " <<endl;

	return 0;
}






