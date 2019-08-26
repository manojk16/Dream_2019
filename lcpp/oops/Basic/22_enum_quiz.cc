/*
 * 22_enum_quiz.cc
 *
 *  Created on: Aug 4, 2019
 *      Author: user1
 */
#include <iostream>
#include <string>

using namespace std;

// a);
/*enum MonsterType{
	DRAGON,
	GOBLIN,
	ORGE,
	ORC,
	SKELETON,
	TROLL,
	VAMPIRE,
	ZOMPIE,
	MAX_MONSTER_TYPES,
};*/
//a type (MonsterType), a name (std::string), a roar (std::string), and the number of hit points (int). Create a Monster class that has these 4 member variables.
// // b);
class Monster{

public:
	// c):
	enum MonsterType{
		DRAGON,
		GOBLIN,
		ORGE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMPIE,
		MAX_MONSTER_TYPES,
	};
private:
	MonsterType m_type;
	string m_name;
	string m_roar;
	int m_hitpoints;
	// d);
public:
	Monster(MonsterType type,string name, string roar, int hitpoints):m_type(type),m_name(name),m_roar(roar),m_hitpoints(hitpoints){

	}
	string getTypeString() const{
		switch(m_type){
		case DRAGON: return "Dragon";
		case GOBLIN:return "Goblin";
		case ORGE: return "Orge";
		case ORC: return "Orc";
		case SKELETON: return "Skeleton";
		case TROLL: return "Troll";
		case VAMPIRE: return "Vampire";
		case ZOMPIE: return "Zompie";
		}
		return "???";

	}
	//Bones the skeleton has 4 hit points and says *rattle*
	void print(){
	cout << m_name << " the " << getTypeString() << " has " << m_hitpoints << " hit points and says " << m_roar << '\n';
	}

};
class MonsterGenerator{
public:

	static int getRandomNumber(int Min, int Max){
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (Max - Min + 1) + Min);
	}
	static Monster GenerateMonster(){
		Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1));
		int hitPoints=getRandomNumber(0,100);
		static const std::string s_names[6]{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };
		static const std::string s_roars[6]{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*"};

		return Monster(type, s_names[getRandomNumber(0, 5)], s_roars[getRandomNumber(0, 5)], hitPoints);
			//return Monster(Monster::SKELETON, "BONES","*rattle*",4);

		}
};
int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	//Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);
	//skele.print();
	rand();
	Monster m=MonsterGenerator::GenerateMonster();
	//Monster m = MonsterGenerator::getRandomNumber(0,static_cast<int>(Monster::MAX_MONSTER_TYPES-1));
	m.print();

    return 0;
}





