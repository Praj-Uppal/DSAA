#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>

class Node
{
private:
    int data;
    Node *link;

public:
    Node(int data, Node *link) : data(data), link(link) {};
    int getData() { return data; }
    void setData(int data) { this->data = data; }
    Node *getLink() { return link; }
    void setLink(Node *link) { this->link = link; }
};

#endif