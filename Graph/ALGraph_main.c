#include <stdio.h>
#include "ALGraph.h"

int main(void)
{
	ALGraph graph;
	GraphInit(&graph, 5);

	AddEgde(&graph, A, B);
	AddEgde(&graph, A, D);
	AddEgde(&graph, B, C);
	AddEgde(&graph, C, D);
	AddEgde(&graph, D, E);
	AddEgde(&graph, E, A);

	ShowGraphEdgeInfo(&graph);
	GraphDestroy(&graph);
	return 0;
}