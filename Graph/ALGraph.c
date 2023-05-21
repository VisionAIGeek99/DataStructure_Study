#include <stdio.h>
#include <stdlib.h>
#include "ALGraph.h"
#include "../LinkedList/LinkedList.h"

int WhoIsPrecede(int data1, int data2);

void GraphInit(ALGraph* pg, int nv)
{
	int i;

	pg->adjlist = (List*)malloc(sizeof(List) * nv);

	pg->numE = 0;
	pg->numV = nv;

	for (i = 0; i < nv; i++)
	{
		ListInit(&(pg->adjlist[i]));
		SetSortRule(&pg->adjlist[i], WhoIsPrecede);
	}
}

void GraphDestroy(ALGraph* pg)
{
	if (pg->adjlist != NULL)
		free(pg->adjlist);
}

void AddEgde(ALGraph* pg, int fromV, int toV)
{
	LInsert(&(pg->adjlist[fromV]), toV);

	LInsert(&(pg->adjlist[toV]), fromV);
	pg->numE += 1;
}

void ShowGraphEdgeInfo(ALGraph* pg)
{
	int i;
	int vx;

	for (i = 0; i < pg->numV; i++)
	{
		printf("%c와 연결된 정점: ", i + 65);

		if (LFirst(&(pg->adjlist[i]), &vx))
		{
			printf("%c ", vx + 65);

			while(LNext(&(pg->adjlist[i]), &vx))
				printf("%c ", vx + 65);
		}
		printf("\n");
	}
}

int WhoIsPrecede(int data1, int data2)
{
	if (data1 < data2)
		return 0;
	else
		return 1;
}