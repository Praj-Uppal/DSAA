#ifndef NODE_H
#define NODE_H

class Node {
 private:
  int data;
  Node* link;

 public:
  Node(int data, Node* link) : data(data), link(link) {};

  Node() {
    data = 0;
    link = nullptr;
  }

  int getData() { return data; }
  Node* getLink() { return link; }
  void setData(int data) { this->data = data; }
  void setLink(Node* link) { this->link = link; }
};

#endif