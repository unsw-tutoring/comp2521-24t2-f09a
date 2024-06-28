#include "Graph.h"

struct graph {
    int nV;
    int nE;  // optional
    bool **adjMatrix;
};

Graph GraphNew(int nV) {
    Graph g = malloc(sizeof(struct graph));

    g->nV = nV;
    g->nE = 0;
    g->adjMatrix = malloc(nV * sizeof(bool *));
    for (int i = 0; i < nV; i++) {
        g->adjMatrix[i] = calloc(nV, sizeof(bool));
    }

    return g;
}
