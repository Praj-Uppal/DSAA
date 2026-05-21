#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"

class BinaryTree
{
private:
    Node *root;

public:
    BinaryTree(std::vector<int> list);
    BinaryTree();

    void insertData(int value);
    Node *insertDataRecursive(Node *root, int value);
};

#endif