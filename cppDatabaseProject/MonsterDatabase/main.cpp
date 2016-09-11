#include <iostream>
#include "MonsterDB.hpp"
#include "Human.hpp"
#include "Elf.hpp"

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

	//__PART 2__TESTS
	Human h("Bob", "Byggare", 1, true);
	MonsterClass *aptr = &h;
	cout << aptr->printMonster(); // virtual makes sure that Human::printMonster() is called here.
	aptr->setHealth(5);
	//aptr->setGreed(false); // 
	cout << h.printMonster();

	Elf e("Legolas", "Skytt", 25, false);
	system("pause");
	return 0;
}