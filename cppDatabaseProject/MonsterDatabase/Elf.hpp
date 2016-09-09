#ifndef ELF_HPP
#define ELF_HPP
#include "MonsterClass.hpp"
class Elf : public MonsterClass
{
public:
	Elf(std::string _name, std::string _occupation, int _health, bool _isGreedy);
	virtual ~Elf();

	virtual void setHealth(int value);
private:
	bool isVegan;
};
#endif
