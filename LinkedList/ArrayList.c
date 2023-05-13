#pragma once
#include "ArrayList.h"

void ListInit(List* plist)
{
	plist->numOfData = 0;
	plist->curPosition = -1;
}

void LInsert(List* plist, LData data)
{
	if (LCount(plist) >= LIST_LEN) {
		printf("저장 할 수 없습니다\n");
		return;
	}

	plist->arr[plist->numOfData] = data;
	(plist->numOfData)++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numOfData == 0) {
		return FALSE;
	}
	(plist->curPosition) = 0;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->curPosition >= (plist->numOfData) - 1) {
		return FALSE;
	}

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LData LRemove(List* plist)
{
	LData rdata;
	int rpose = plist->curPosition;

	rdata = plist->arr[rpose];

	for (int i = rpose; i < plist->numOfData-1; i++) {
		plist->arr[i] = plist->arr[i + 1];
	}
	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List* plist)
{
	return plist->numOfData;
}