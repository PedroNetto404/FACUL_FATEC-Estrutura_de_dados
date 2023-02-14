#include "StackBehaviors.h"
#include "StackBehaviors.h"

StackPointer CreateStack()
{
	StackPointer ptrStack = (StackPointer)malloc(sizeof(Stack));

	ptrStack->ptrTop = NULL;

	return ptrStack; 
}


int getNodeValue(StackPointer ptrStack)
{
	if (ptrStack->ptrTop == NULL) throw new _exception(); 
	return ptrStack->ptrTop->value;
}

bool pop(StackPointer ptrStack)
{
	if (ptrStack->ptrTop == NULL) return false;

	ptrStack->ptrTop = ptrStack->ptrTop->nextNode;

	//free
	return true; 
}

bool push(int value, StackPointer ptrStack)
{
	StackNodePointer node = (StackNodePointer)malloc(sizeof(StackNode));

	if (node == NULL) return false;

	node->value = value; 
	node->nextNode = ptrStack->ptrTop;

	ptrStack->ptrTop = node;

	return true;



}

int count(StackPointer ptrStack)
{
	int counter = 0;

	StackNodePointer ptr = ptrStack->ptrTop;

	while (ptr != NULL)
	{
		counter++;

		ptr = ptr->nextNode; 
	}

	return counter; 
}


