#include "ListBaseStack.h"

/*
typedef struct __node
{
	Data data;
	struct __node* next;
} Node;

typedef struct __liststack
{
	Node* head;
	int topIndex;
} ListStack;
*/

void StackInit(Stack* pstack)
{
	pstack->head = NULL;
}


int SisEmpty(Stack* pstack)
{
	if (pstack->head == NULL)
		return TRUE;
	else
		return FALSE;
}


void SPush(Stack* pstack, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = pstack->head;
	pstack->head = newNode;
}

Data SPop(Stack* pstack)
{
	if (SisEmpty(pstack)) {
		printf("Error!\n");
		exit(-1);
	}

	Node* rnode = pstack->head;
	Data rdata = rnode->data;

	pstack->head = rnode->next;
	
	free(rnode);
	return rdata;
}

Data SPeek(Stack* pstack)
{
	if (SisEmpty(pstack)) {
		printf("Error!\n");
		exit(-1);
	}

	Node* rnode = pstack->head;
	Data rdata = rnode->data;

	return rdata;
}