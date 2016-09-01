#include "MonsterDB.hpp"

MonsterDB::MonsterDB()
{
	first = NULL;
	numNodes = 0;
}
MonsterDB::~MonsterDB()
{

}

// Adds a monster to the database
void MonsterDB::add(const Monster& entry)
{
	if (first == NULL)
	{
		first = new Node(entry);
	}
	else
	{
		Node *iterator = first;
		while (iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		iterator->next = new Node(entry);
	}
	numNodes++;
}
// Searches for THE monster with "name" and returns it. Returns NULL otherwise
Monster *MonsterDB::find(const std::string name)
{
	return NULL;
}
// Removes a monster
void MonsterDB::remove(Monster *entry)
{

	numNodes--;
}
// Removes all monsters from list
void MonsterDB::flushList()
{

}

// Size of database, number of monsters
int MonsterDB::size() const
{
	return numNodes;
}

// Prints out information of a monster
void MonsterDB::print(Monster *entry) const
{
	//std::cout << "Name: " << entry->name << std::endl;
	//std::cout << "Race: " << entry->race << std::endl;
	//std::cout << "Occupation: " << entry->occupation << std::endl;
	std::cout << "Health: " << entry->health << std::endl;
}
// Prints out entire database of monsters
void MonsterDB::printList() const
{
	if (first == NULL)
	{
		std::cout << "List is empty." << std::endl;
	}
	else
	{
		Node *iterator = first;
		while (iterator != NULL)
		{
			this->print(&iterator->value);
			iterator = iterator->next;
		}
	}
}