#include <iostream>

#include "bstnode.h"

using std::cout;
using std::endl;

int main() {
    auto *root = new BSTNode{40, nullptr, nullptr}; // auto will attempt to autodetect the data type being used

    BSTNode *left = new BSTNode{20, nullptr, nullptr};
    BSTNode *right = new BSTNode{60, nullptr, nullptr};
    root->left = left;
    root->right = right;

    cout << "root->value: " << root->value << endl;
    cout << "root->left->value: " << root->left->value;
    cout << " (left->value: " << left->value << ")" << endl;
    cout << "root->right->value: " << root->right->value;
    cout << " (right->value: " << right->value << ")" << endl;


    return 0;
}