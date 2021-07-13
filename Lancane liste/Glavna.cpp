#include <iostream>
#include "SLList.h"
#include "SLLNode.h"

using namespace std;

void main()
{
	SLList*lista = new SLList();
	lista->addToHead(5);
	lista->addToHead(6);
	lista->addBefore(5, 13);
	lista->addToHead(7);
	lista->addToTail(3);
	lista->addAfter(5, 69);
	lista->deleteFromHead();
	lista->printAll();

}