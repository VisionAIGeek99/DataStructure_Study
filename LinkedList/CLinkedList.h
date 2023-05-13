#pragma once

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int Data;

typedef struct __node
{
	Data data;
	struct __node* next;
} Node;

typedef struct __CLinkedList
{
	Node* tail;
	Node* cur;
	Node* before;
	int numOfData;
} CLinkedList;

typedef CLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, Data data); // add node to tail
void LInsertFront(List* plist, Data data); // add node to head

int LFirst(List* plist, Data* pdata);
int LNext(List* plist, Data* pdata);
Data LRemove(List* plist);
int LCount(List* plist);
