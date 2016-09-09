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