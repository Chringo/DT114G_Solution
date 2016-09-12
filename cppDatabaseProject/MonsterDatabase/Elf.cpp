#include "Elf.hpp"


Elf::Elf(std::string _name, std::string _occupation, int _health, bool _isVegan) : MonsterClass(_name, _occupation, _health)
{
	name = _name;
	occupation = _occupation;
	health = _health;

	isVegan = _isVegan;
}
Elf::~Elf(){}

void Elf::setHealth(int value)
{
	if (isVegan)
	{
		health += (int)(value * 0.5f);
	}
	else
	{
		health += value;
	}
}
void Elf::setVegan(bool _isVegan)
{
	isVegan = _isVegan;
}
std::string Elf::printMonster() const
{
	std::string data = MonsterClass::printMonster();
	if (isVegan)
	{
		data += "This elf doesn't hunt animals.\n";
	}
	else
	{
		data += "This elf can be your hunter!\n";
	}
	return data;
}