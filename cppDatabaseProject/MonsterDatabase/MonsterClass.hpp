#ifndef MONSTERCLASS_HPP
#define MONSTERCLASS_HPP
#include <string>
class MonsterClass
{
public:
	MonsterClass();
	MonsterClass(std::string _name, std::string _occupation, int _health);
	virtual ~MonsterClass();

	std::string getName() const;
	std::string getOccupation() const;
	int getHealth() const;
	virtual void setHealth(int value) = 0;

	virtual std::string printMonster() const;
protected:
	std::string name,
		occupation;
	int health;
};
#endif