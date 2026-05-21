#ifndef NODE_H
#define NODE_H

#include <vector>

struct Node
{
    int data;
    std::vector<Node *> children;

    Node(int data)
    {
        this->data = data;
        children = {nullptr, nullptr};
    }
};

#endif