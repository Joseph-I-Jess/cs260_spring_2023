#pragma once

#include "graph_node.h"

class Graph {
    public:
    // constructor and destructor
    Graph();
    ~Graph();
    // add node
    void addNode(string newName);
    // add edge
    void addEdge(string sourceName, string destinationName, int weight);
    //get size of graph nodes list
    int getSize();
    // shortest path, take source and return string representing the shortest paths from the source node to each destination node
    string shortestPath(string sourceName);
    // minimum spanning tree
    string minimumSpanningTree();

    private:
    // some way of storing my data...
    vector<GraphNode *> nodes;
};