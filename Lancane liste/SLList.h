#pragma once
#include <iostream>
#include "SLLNode.h"
using namespace std;


class SLList
{
public:
	SLLNode* head, * tail;

	SLList() { head = tail = nullptr; }
	~SLList() {} ;
	//sad ide deo gde pisemo neke osnovne funkcije za rad sa listom
	void printAll();
	void addToHead(int el); // dodavanje cvora na pocetak liste
};



