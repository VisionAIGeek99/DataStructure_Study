#include "Dummy_DBLinkedList.h"

void ListInit(List* plist)
{
	Node* head_dummy = (Node*)malloc(sizeof(Node));
	Node* tail_dummy = (Node*)malloc(sizeof(Node));

	head_dummy->prev = NULL;
	tail_dummy->next = NULL;

	plist->head = head_dummy;
	plist->tail = tail_dummy;
	plist->head->next = plist->tail;
	plist->tail->prev = plist->head;
	(plist->numOfData) = 0;
}

void LInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->tail;
	plist->tail->prev->next = newNode;

	newNode->prev = plist->tail->prev;
	plist->tail->prev = newNode;
	
	(plist->numOfData)++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->head->next == plist->tail)
		return FALSE;

	plist->cur = plist->head->next;
	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->cur->next == plist->tail)
		return FALSE;

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;
	return TRUE;
}


LData LRemove(List* plist)
{
	Node* rpos = plist->cur;
	LData rdata = rpos->data;

	plist->cur->prev->next = rpos->next;
	plist->cur->next->prev = rpos->prev;
	plist->cur = rpos->prev;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List* plist)
{
	return plist->numOfData;
}