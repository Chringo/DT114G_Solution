#pragma once
#include "MonsterClass.hpp"
class Human : public MonsterClass
{
public:
	Human(std::string _name, std::string _occupation, int _health);
	virtual ~Human();

	std::string getName() const;
	std::string getOccupation() const;
	virtual int getHealth() const;
};

