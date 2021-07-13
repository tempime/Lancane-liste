#include "SLLNode.h"

SLLNode::SLLNode()
{
	next = nullptr;
}


SLLNode::SLLNode(int el)
{
	info = el;
	next = nullptr;
}


SLLNode::SLLNode(int el, SLLNode* n)
{
	info = el;
	next = n;
}


SLLNode::~SLLNode()
{
	//nema potrebe da mu se stavi telo
}