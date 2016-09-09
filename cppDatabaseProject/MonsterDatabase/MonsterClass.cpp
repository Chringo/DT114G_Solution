#include "MonsterClass.hpp"

MonsterClass::MonsterClass()
{
	name = 
		occupation = "Default";
	health = -1;
}
MonsterClass::MonsterClass(std::string _name, std::string _occupation, int _health)
{
	name = _name;
	occupation = _occupation;
	health = _health;
}
MonsterClass::~MonsterClass()
{

}

std::string MonsterClass::getName() const
{
	return name;
}
std::string MonsterClass::getOccupation() const
{
	return occupation;
}
int MonsterClass::getHealth() const
{
	return health;
}
std::string MonsterClass::printMonster() const
{
	return std::string("Name: " + name + ", Occupation: " + occupation + ", Health: " + std::to_string(health) + "\n");
}