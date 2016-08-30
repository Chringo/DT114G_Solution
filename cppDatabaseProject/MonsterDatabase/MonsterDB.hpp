#ifndef MONSTER_HPP
#define MONSTER_HPP
#include <string>

class MonsterDB
{
private:
	// TODO: Linked list
public:
	MonsterDB();		// Initiate empty database
	~MonsterDB();		// Deletes database

	struct Monster // TODO: Initiate before class but keep a limited scope
	{
	private:
		std::string name,
			race,
			occupation;
		int health;
	public:
		Monster(std::string name_, std::string race_, std::string occupation_, int health_)
		{
			name = name_;
			race = race_;
			occupation = occupation_;
			health = health_;
		}
	};

	void add(const Monster& entry);			// Adds a monster to the database
	Monster *find(const std::string name);	// Searches for THE monster with "name" and returns it. Returns NULL otherwise
	void remove(Monster *entry);			// Removes a monster
	void flushList();						// Removes all monsters from list
	int size();								// Size of database, number of monsters
	void print(Monster *entry);				// Prints out information of a monster
	void printList();						// Prints out entire database of monsters
};
#endif