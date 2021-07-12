#include "SLList.h"

void SLList::printAll()
{
	
	if (head == nullptr)
	{
		cout << "List is empty!" << endl;
	}
	SLLNode* temp = new SLLNode(); // da bi obisao listu pravis pomocni node
	temp = head;
	while (temp != nullptr)
	{
		cout << temp->info;
		temp = temp->next; // moramo da update taj cvor kako bi sad pokazivao na sledeci
	}
}


void SLList::addToHead(int el)
{
	//Koraci za resenje: 1.Prvo moramo na napravimo novi cvor 2. Moramo da lepo povezemo listu, racunamo kao da vec postoje cvorovi u njoj
	SLLNode* newNode = new SLLNode(el);

	if (head == nullptr) // ako je lista prazna
	{
		head = newNode;
		tail = newNode;
	}

	else // ako nije prazna
	{
		newNode->next = head;
		head = newNode;
	}
}