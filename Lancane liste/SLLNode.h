#pragma once
#include <iostream>
using namespace std;

class SLLNode
{
public:
	int info;
	SLLNode* next; // pokazivac je na sledeci NODE, zato je ovog tipa

	//nisam morao ovoliko konstruktora da pisem ali sam cisto zbog vezbe
	SLLNode(); // default konstruktor za praznu listu
	SLLNode(int el); // kad imamo samo jedan element u listi
	SLLNode(int el, SLLNode* n);
	~SLLNode();
};

