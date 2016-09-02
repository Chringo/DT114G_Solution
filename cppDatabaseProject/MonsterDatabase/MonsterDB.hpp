#ifndef MONSTER_HPP
#define MONSTER_HPP
#include <string>
#include <iomanip>
#include <iostream>

struct Monster // TODO: Initiate before class but keep a limited scope
{
	std::string name,
		race,
		occupation;
	int health;

	Monster() 
	{
		name = race = occupation = "Default";
		health = -1;
	}
	Monster(std::string name_, std::string race_, std::string occupation_, int health_)
	{
		name = name_;
		race = race_;
		occupation = occupation_;
		health = health_;
	}
};

class MonsterDB
{
public:
	MonsterDB();		// Initiate empty database
	~MonsterDB();		// Deletes database



	void add(const Monster& entry);			// Adds a monster to the database
	Monster *find(const std::string name);	// Searches for THE monster with "name" and returns it. Returns NULL otherwise
	void remove(Monster *entry);			// Removes a monster
	void flushList();						// Removes all monsters from list
	int size() const;						// Size of database, number of monsters
	void print(Monster *entry) const;		// Prints out information of a monster
	void printList() const;					// Prints out entire database of monsters
private:
	class Node
	{
	public:
		Monster value;
		Node* next;
		Node(const Monster& value, Node* next = nullptr)
		{
			this->value = value;
			this->next = next;
		}
		~Node() {}
	};

	Node* first;
	int numNodes;
};
#endif