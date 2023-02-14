#pragma once

struct stackNode
{
	int value;
	struct stackNode* nextNode; 
};

typedef struct stackNode StackNode;

typedef StackNode* StackNodePointer; 