#include <iostream>
#include "MonsterDB.hpp"
#include "Human.hpp"

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
	//entry = db.find("Fnorg");
	db.remove(db.find("Fnorg"));
	db.add(Monster("Asda", "Hertiginna", "Monark", 100));
	//db.remove(db.find("Asda"));
	db.remove(db.find("Nisse"));

	db.printList();
	cout << "List size: " << db.size() << endl;
	db.flushList();

	// TODO: Part 2.
	Human h("Bob", "Snickare", 1);
	//MonsterClass mc;

	system("pause");
	return 0;
}