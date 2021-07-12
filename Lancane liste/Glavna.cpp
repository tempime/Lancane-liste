#include <iostream>
#include "SLList.h"
#include "SLLNode.h"

using namespace std;

int main()
{
	SLList*lista = new SLList();
	lista->addToHead(5);
	lista->addToHead(6);
	lista->addToHead(7);
	lista->printAll();
	return 0;
}