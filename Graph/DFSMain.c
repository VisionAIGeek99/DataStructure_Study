#include "ALGraphDFS.h"
#include <stdio.h>

int main(void)
{
	ALGraph graph;
	GraphInit(&graph, 7);

	AddEgde(&graph, A, B);
	AddEgde(&graph, A, D);
	AddEgde(&graph, B, C);
	AddEgde(&graph, D, C);
	AddEgde(&graph, D, E);
	AddEgde(&graph, E, F);
	AddEgde(&graph, E, G);

	ShowGraphEdgeInfo(&graph);

	DFShowGraphVertex(&graph, A); printf("\n");
	DFShowGraphVertex(&graph, C); printf("\n");
	DFShowGraphVertex(&graph, E); printf("\n");
	DFShowGraphVertex(&graph, G); printf("\n");

	GraphDestroy(&graph);
	return 0;
}