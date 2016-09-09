#include "Human.hpp"


Human::Human(std::string _name, std::string _occupation, int _health, bool _isGreedy) : MonsterClass(_name, _occupation, _health)
{
	isGreedy = _isGreedy;
}
Human::~Human(){}

void Human::setHealth(int value)
{
	if (isGreedy)
	{
		health += (int)(value * 0.5f);
	}
	else
	{
		health += value;
	}
}

std::string Human::printMonster() const
{
	std::string data = MonsterClass::printMonster();
	if (isGreedy)
	{
		data += "This human is only looking for profit!\n";
	}
	else
	{
		data += "This human may consider some self-sacrifice\n";
	}
	return data;
}