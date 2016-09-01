#include <iostream>
#include "MonsterDB.hpp"

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	MonsterDB db;

	db.add(Monster("Nisse", "Tomte", "Snickare", 5));
	db.add(Monster("Kisse", "Katt", "Musjagare", 2));
	db.add(Monster("Fnorg", "Bergstroll", "Chipsmumsare", 666));

	db.printList();
	cout << "List size: " << db.size() << endl;

	Monster *entry = db.find("Kisse");
	db.print(entry);
	db.remove(entry);

	db.printList();
	cout << "List size: " << db.size() << endl;

	// TODO: Part 2.

	return 0;
}