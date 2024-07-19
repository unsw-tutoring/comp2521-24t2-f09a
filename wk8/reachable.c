#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "Set.h"

void doReachable(Graph g, Vertex curr, Set visited) {
    SetInsert(visited, curr);

    for (int v = 0; v < GraphNumVertices(g); v++) {
        if (GraphIsAdjacent(g, curr, v) && !SetContains(visited, v)) {
            doReachable(g, v, visited);
        }
    }
}

Set reachable(Graph g, Vertex src) {
    Set visited = SetNew();

    doReachable(g, src, visited);

    return visited;
}
