#pragma once
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Data;

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

typedef ListStack Stack;

void StackInit(Stack* pstack);
int SisEmpty(Stack* pstack);

void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack* pstack);

