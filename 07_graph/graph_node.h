//we will add the pragma once in a few minutes, so we can see the issue that it prevents!
#pragma once

#include <string>
#include <vector>

#include "edge.h"

using std::string;
using std::vector;

class GraphNode {
    public:
    // constructor
    GraphNode(string newName);
    ~GraphNode();
    // add edge
    void addEdge(GraphNode *destination, int weight);
    // get value of this node
    string getValue();
    // get neighbors as a list of pointers
    vector<edge *> getNeighbors();

    private:
    // stored value
    string value;

    // reference to neighbors
    vector<edge *> neighbors;
};