#include <iostream>
#include "MonsterDB.hpp"

using namespace std;

int main()
{
	MonsterDB db;

	db.add(MonsterDB::Monster("Nisse", "Tomte", "Snickare", 5));
	db.add(MonsterDB::Monster("Kisse", "Katt", "Musjagare", 2));
	db.add(MonsterDB::Monster("Fnorg", "Bergstroll", "Chipsmumsare", 666));

	db.printList();
	cout << "List size: " << db.size() << endl;

	MonsterDB::Monster *entry = db.find("Kisse");
	db.print(entry);
	db.remove(entry);

	db.printList();
	cout << "List size: " << db.size() << endl;

	// TODO: Part 2.

	return 0;
}