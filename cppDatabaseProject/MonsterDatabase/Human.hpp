#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "MonsterClass.hpp"
class Human : public MonsterClass
{
public:
	Human(std::string _name, std::string _occupation, int _health, bool _isGreedy);
	virtual ~Human();

	virtual void setHealth(int value);
	virtual std::string printMonster() const;
private:
	bool isGreedy;
};
#endif
