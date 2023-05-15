#pragma once
#include <stdio.h>
#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int LData;

typedef struct __node
{
	LData data;
	struct __node* prev;
	struct __node* next;
} Node;

typedef struct __DBLinkedList
{
	Node* head;
	Node* cur;
	int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);
int LPrevious(List* plist, LData* pdata);

//LData LRemove(List* plist);
int LCount(List* plist);
