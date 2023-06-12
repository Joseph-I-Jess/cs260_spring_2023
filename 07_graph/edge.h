#pragma once

#include "graph_node.h"

class GraphNode;

struct edge {
    GraphNode *source;
    GraphNode *destination;
    int weight;
};