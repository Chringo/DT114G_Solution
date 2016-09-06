#include "MonsterDB.hpp"

MonsterDB::MonsterDB()
{
	first = NULL;
	numNodes = 0;
}
MonsterDB::~MonsterDB()
{
	Node* iterator = first;
	while (iterator != NULL)
	{
		first = iterator->next;
		delete iterator;
		iterator = first;
	}
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
// Searches for the monster with "name" and returns it. Returns NULL otherwise
Monster *MonsterDB::find(const std::string name)
{
	Monster *temp = NULL;
	if (first != NULL)
	{
		Node *iterator = first;
		while (iterator->value.name != name && iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		if (iterator->value.name == name)
		{
			temp = &iterator->value;
		}// TODO: If necessary add error message.
	}
	return temp;
}
// Removes a monster
void MonsterDB::remove(Monster *entry)
{
	if (entry != NULL)
	{
		Node *iterator = first;
		if (iterator->value == *entry)
		{
			first = first->next;
			delete iterator;
		}
		else
		{
			//bool notDeleted = true;
			while (iterator->next != NULL /*&& notDeleted*/)// TODO/Future: Better solution
			{
				if (iterator->next->value == *entry)
				{
					Node *temp = iterator->next;
					iterator->next = iterator->next->next;
					delete temp;
					//notDeleted = false;
					break;
				}
				iterator = iterator->next;
			}
		}
		numNodes--;
	}
	else
	{
		std::cout << "Entry is not in database." << std::endl;
	}
}
// Removes all monsters from list
void MonsterDB::flushList()
{
	Node* iterator = first;
	while (iterator != NULL)
	{
		first = iterator->next;
		delete iterator;
		iterator = first;
	}
	numNodes = 0;
}

// Size of database, number of monsters
int MonsterDB::size() const
{
	return numNodes;
}

// Prints out information of a monster
void MonsterDB::print(Monster *entry) const
{
	std::cout << "Name: " << std::setw(10) << std::left << entry->name
		<< " Race: " << std::setw(13) << std::left << entry->race
		<< " Occupation: " << std::setw(17) << std::left << entry->occupation
		<< " Health: " << std::setw(4) << std::left << entry->health << std::endl;
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