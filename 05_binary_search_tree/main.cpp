#include <iostream>

#include "bstnode.h"

using std::cout;
using std::endl;

// print values of tree in-order, assuming initial BSTNode is not nullptr
void inOrderTraversal(BSTNode *current) {
    // look and go left if not nullptr
    if(current->left != nullptr) {
        inOrderTraversal(current->left);
    }

    // print yo self
    cout << current->value << ", ";

    // look and go right if not nullptr
    if(current->right != nullptr) {
        inOrderTraversal(current->right);
    }
}

int main() {
    auto *root = new BSTNode{40, nullptr, nullptr}; // auto will attempt to autodetect the data type being used

    BSTNode *left = new BSTNode{20, nullptr, nullptr};
    // BSTNode *right = new BSTNode{60, nullptr, nullptr};
    root->left = left;
    // root->right = right;

    // cout << "root->value: " << root->value << endl;
    // cout << "root->left->value: " << root->left->value;
    // cout << " (left->value: " << left->value << ")" << endl;
    // cout << "root->right->value: " << root->right->value;
    // cout << " (right->value: " << right->value << ")" << endl;

    // BSTNode *ll = new BSTNode{10, nullptr, nullptr};
    // BSTNode *lr = new BSTNode{30, nullptr, nullptr};
    // root->left->left = ll; // could also use left->left
    // root->left->right = lr;

    // BSTNode *rl = new BSTNode{50, nullptr, nullptr};
    // BSTNode *rr = new BSTNode{70, nullptr, nullptr};
    // root->right->left = rl;
    // root->right->right = rr;

    // cout << "root->left->left->value: " << root->left->left->value << endl;
    // cout << "root->left->right->value: " << root->left->right->value << endl;
    // cout << "root->right->left->value: " << root->right->left->value << endl;
    // cout << "root->right->right->value: " << root->right->right->value << endl;

    inOrderTraversal(root);

    // What happens if we run this on a nullptr?
    // BSTNode * nullNode = nullptr;
    // inOrderTraversal(nullNode);

    cout << "got to end of program, yay!" << endl;

    return 0;
}