#include "Human.hpp"


Human::Human(std::string _name, std::string _occupation, int _health)
{
	name = _name;
	occupation = _occupation;
	health = _health;
	getHealth();
	getName();
	getOccupation();
}
Human::~Human()
{
}

std::string Human::getName() const
{
	return name;
}
std::string Human::getOccupation() const
{
	return occupation;
}
int Human::getHealth() const
{
	return health;
}