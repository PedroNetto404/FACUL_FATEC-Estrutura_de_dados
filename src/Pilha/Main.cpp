#define MAX 10

#include <iostream>
#include "StackBehaviors.h"

using namespace std;

int main()
{
	StackPointer ptrStack = CreateStack();
	
	cout << "Empinhando elementos" << endl << endl;
	for (int i = 1; i <= MAX; i++)
	{
		cout << "Elemento com valor " << i << " colocado no topo da pilha" << endl;
		push(i, ptrStack);
	}
	cout << endl << endl;


	cout << "Quantidade total de elementos na pilha: " << count(ptrStack) << endl << endl;

	cout << "Desempilhando elementos:" << endl << endl; 
	for (int i = 0; i < count(ptrStack); i++)
	{
		cout << "Elemento " << getNodeValue(ptrStack) << " removido da pilha." << endl;

		pop(ptrStack);
	}


	system("pause"); 

}
