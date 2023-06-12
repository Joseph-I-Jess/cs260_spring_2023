#include <iostream>

#include "graph.h"
#include "graph_node.h"

using std::cout;
using std::endl;

/*
    ToDo:
        .create edge class to go between two nodes!
*/

int main(int argc, char **argv) {
    cout << "hello world?" << endl;
    // create edge to test simple edge situations
    edge *newEdge = new edge{nullptr, nullptr, 42};
    cout << "newEdge->source: " << newEdge->source << "\nnewEdge->destination: " << newEdge->destination << "\nnewEdge->weight: " << newEdge->weight << endl;

    // create a simple node to test
    GraphNode *newNode = new GraphNode("Albany"); // default constructor (the constructor without parameters), does not need parentheses...
    cout << "newNode->getValue(): " << newNode->getValue() << "\nnewNode->getNeighbors().size(): " << newNode->getNeighbors().size() << endl;
    // add edge to node
    newNode->addEdge(newNode, 1);
    cout << "newNode->getNeighbors().size(): " << newNode->getNeighbors().size() << endl;
    cout << "newNode->getNeighbors()->at(0)->destination->getValue(): " << newNode->getNeighbors().at(0)->destination->getValue() << endl;
    
    // delete node
    delete newNode;

    //create graph

    // add node

    // add edge

    // show shortest path?

    // show minimum spanning tree?

    // clean up dynamic memory?

    cout << "end of program, thank you for playing the game!" << endl;

    return 0;
}