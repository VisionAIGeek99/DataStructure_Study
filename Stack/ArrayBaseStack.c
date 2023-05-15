#include "ArrayBaseStack.h"

/*
typedef struct __arraystack
{
	Data stackArr[STACK_LEN];
	int topIndex;
} ArrayStack;
*/

void StackInit(Stack* pstack)
{
	pstack->topIndex = -1;
}


int SisEmpty(Stack* pstack)
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}


void SPush(Stack* pstack, Data data)
{
	pstack->topIndex++;
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack* pstack)
{
	if (SisEmpty(pstack)) {
		printf("Error!\n");
		exit(-1);
	}

	Data rdata = pstack->stackArr[pstack->topIndex];
	pstack->topIndex--;
	return rdata;
}

Data SPeek(Stack* pstack)
{
	if (SisEmpty(pstack)) {
		printf("Error!\n");
		exit(-1);
	}

	Data rdata = pstack->stackArr[pstack->topIndex];
	return rdata;
}