#pragma once
#include <iostream>
#include "SLLNode.h"
using namespace std;


class SLList
{
public:
	SLLNode* head;

	SLList() { head = nullptr; }
	~SLList() {};
	//sad ide deo gde pisemo neke osnovne funkcije za rad sa listom
	void printAll(); // stampanje podrazumeva obilazak kroz listu, moze while petlja
	void addToHead(int el); // dodavanje cvora na pocetak liste
	void addToTail(int el); // dodavanje cvora na kraj liste
	void addBefore(int n, int k); // dodavanje cvora sa info->k pre cvora sa info->n KORISTE SE DVA POMOCNA CVORA ZA PROLAZAK KROZ LISTU!!!!!!
	void addAfter(int n, int k); // dodavanje cvora sa info->k nakon cvora sa info->n, takodje dva pomocna pointera koristimo
	void deleteFromHead();
};



