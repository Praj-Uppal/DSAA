#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>

#include <iostream>

#include "Node.h"

class LinkedList {
 private:
  Node* head;

 public:
  LinkedList(int* array, int len);
  LinkedList();

  ~LinkedList();

  void insertPosition(int pos, int newNum);
  bool deletePosition(int pos);

  int get(int pos);

  int search(int target);

  void printList();
};

#endif