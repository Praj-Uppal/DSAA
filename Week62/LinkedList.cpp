#include "LinkedList.h"

#include <limits>

LinkedList::LinkedList(int* array, int len) {
  if (len <= 0) {
    head = nullptr;
    return;
  }

  head = new Node(array[0], nullptr);
  Node* currentNode = head;
  for (int i = 1; i < len; i++) {
    Node* newNode = new Node(array[i], nullptr);
    currentNode->setLink(newNode);
    currentNode = newNode;
  }
}

LinkedList::LinkedList() {
  head = nullptr;
  return;
}

LinkedList::~LinkedList() {
  Node* currentNode = head;
  if (head == nullptr) {
    return;
  }
  Node* nextNode = currentNode->getLink();
  while (nextNode != nullptr) {
    delete currentNode;
    currentNode = nextNode;
    nextNode = currentNode->getLink();
  }

  delete currentNode;
  head = nullptr;
}

void LinkedList::insertPosition(int pos, int newNum) {
  Node* newNode = new Node(newNum, nullptr);

  if (pos <= 1 || (head == nullptr)) {
    newNode->setLink(head);
    head = newNode;
    return;
  }

  int currentPos = 1;
  Node* currentNode = head;
  Node* nextNode = head->getLink();
  while (nextNode != nullptr) {
    if (currentPos == (pos - 1)) {
      newNode->setLink(currentNode->getLink());
      currentNode->setLink(newNode);
      return;
    }
    currentNode = nextNode;
    nextNode = currentNode->getLink();
    currentPos++;
  }

  currentNode->setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
  if (pos < 1) {
    return false;
  }

  if (head == nullptr) {
    return false;
  }

  if (pos == 1) {
    Node* temp = head;
    head = head->getLink();
    delete temp;
    return true;
  }

  int currentPos = 1;
  Node* currentNode = head;
  Node* nextNode = head->getLink();
  while (nextNode != nullptr) {
    if (currentPos == (pos - 1)) {
      currentNode->setLink(nextNode->getLink());
      delete nextNode;
      return true;
    }
    currentNode = nextNode;
    nextNode = currentNode->getLink();
    currentPos++;
  }

  return false;
}

int LinkedList::get(int pos) {
  if (pos < 1) {
    return std::numeric_limits<int>::max();
  }

  Node* currentNode = head;
  Node* nextNode = head->getLink();
  int currentPos = 1;
  while (currentNode != nullptr) {
    if (currentPos == pos) {
      return currentNode->getData();
    }
    currentNode = nextNode;
    nextNode = currentNode->getLink();
    currentPos++;
  }

  return std::numeric_limits<int>::max();
}

int LinkedList::search(int target) {
  Node* currentNode = head;
  Node* nextNode = head->getLink();
  int currentpos = 1;

  while (currentNode != nullptr) {
    if (currentNode->getData() == target) {
      return currentpos;
    }
    currentNode = nextNode;
    nextNode = nextNode->getLink();
    currentpos++;
  }

  return -1;
}

void LinkedList::printList() {
  Node* currentNode = head;
  if (currentNode == nullptr) {
    return;
  }

  std::cout << '[' << head->getData() << ']';
  currentNode = head->getLink();
  while (currentNode != nullptr) {
    std::cout << ' ' << '[' << currentNode->getData() << ']';
    currentNode = currentNode->getLink();
  }
}