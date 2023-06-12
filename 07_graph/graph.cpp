#include "graph.h"

Graph::Graph() {
    // do nothing for now?
}

Graph::~Graph() {
    // delete all objects created with the new keyword in this grpah class... such as graphNode objects created in the addNode member function.
}

void Graph::addNode(string newName) {
    // create node
    GraphNode *newNode = new GraphNode(newName);
    // add to nodes list
    nodes.push_back(newNode);
}

// Take a source name and destination name and create an edge if those names have corresponding nodes, do not create if either end is nullptr.
void Graph::addEdge(string sourceName, string destinationName, int weight) {
    GraphNode *sourceNode = nullptr;
    GraphNode *destinationNode = nullptr;
    // find source and destination node references
    for(auto node : nodes) {
        if(sourceName == node->getValue()) {
            sourceNode = node;
        }

        if(destinationName == node->getValue()) {
            destinationNode = node;
        }
    }

    if(sourceNode != nullptr && destinationNode != nullptr) {
    // ask source node to create edge toward destination node
    sourceNode->addEdge(destinationNode, weight);
    // is this an undirected graph, if so create reverese-edge?
    destinationNode->addEdge(sourceNode, weight);
    } // otherwise don't add edges!
}

int Graph::getSize() {
    return nodes.size();
}

string Graph::shortestPath(string sourceName) {
    // exercise to be completed by the student...
}

string Graph::minimumSpanningTree() {
    // exercise to be completed by the student...
}