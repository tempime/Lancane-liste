#include "SLList.h"

void SLList::printAll()
{
	
	if (head == nullptr)
	{
		cout << "List is empty!" << endl;
	}
	SLLNode* temp = new SLLNode(); // da bi obisao listu pravis pomocni node, ne mozes sa head da obilazis listu, jer head uvek moras da cuvas kako ne bi izgubio gde ti pocinje lista!!!!!!!
	temp = head; // sad temp ukazuje na prvi i mozes da pocnes obilazak
	while (temp != nullptr)
	{
		cout << temp->info << endl;
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
	}

	else // ako nije prazna
	{
		newNode->next = head;
		head = newNode;
	}
}

void SLList::addToTail(int el) // ovo je slucaj ako nemamo tail
{
	SLLNode* newNode = new SLLNode(el);
	if (head == nullptr) // ako je lista prazna
	{
		head = newNode;
	}
	//ako nemas tail moras da prolazis kroz listu
	SLLNode* temp = new SLLNode();
	temp = head;

	while (temp->next != nullptr)
	{
		temp = temp->next;
	} // on izlazi iz while kad pokazuje na poslednji

	temp->next = newNode;
}

void SLList::addBefore(int n, int k)
{
	SLLNode* current = new SLLNode();
	current = head;
	SLLNode* prev = new SLLNode();
	prev = nullptr;

	if (head != nullptr) // ako lista nije prazna
	{
		while (current != nullptr) // dok ne stignemo do kraja liste, ako stavimo current->next != nullptr onda nece da proveri poslednji cvor nego ce da izadje iz petlje
		{
			if (current->info == n)
			{
				SLLNode* newNode = new SLLNode(k);
				newNode->next = current;
				if (prev != nullptr) // ovo proveravamo samo zbog prvog elementa, ako je odmah na head taj trazeni iz funkcije samo treba novi da update, pre head nema nista
				{
					prev->next = newNode;
				}
			}
			prev = current; // kako bi se prev pomerio sa null izdjednacavamo ga sa current, pa onda update current u sledecoj liniji i tako je current jos uvek ispred prev
			current = current->next;
		}
	}
}

void SLList::addAfter(int n, int k)
{
	SLLNode* current = new SLLNode();
	current = head;

	if (head != nullptr)
	{
		while (current != nullptr)
		{
			if (current->info == n)
			{
				SLLNode* newNode = new SLLNode(k);
				newNode->next = current->next;
				current->next = newNode;
			}
			current = current->next;
		}
	}
}

void SLList::deleteFromHead()
{
	if (head == nullptr)
	{
		cout << "List is empty!" << endl;
	}
	// Ako kazemo delete head brise se i pristup listi, moramo da uvedemo temp node
	SLLNode* temp = new SLLNode();
	temp = head;
	head = head->next;
	delete temp;

}