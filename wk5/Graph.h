#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct graph *Graph;

Graph GraphNew(int nV);

void GraphAddEdge(Graph g, int v, int u);

void GraphRemoveEdge(Graph g, int v, int u);

#endif
