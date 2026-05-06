#include "LinkedList.h"

LinkedList::LinkedList(int *array, int len)
{

    Node *head;

    if (len == 0)
    {
        head = nullptr;
        return;
    }

    Node *newLink = new Node(array[0], nullptr);
    head = newLink;
    Node *oldNode = (newLink);
    for (int i = 1; i < len; i++)
    {
        Node *newLink = new Node(array[i], nullptr);
        oldNode->setLink(newLink);
        oldNode = (newLink);
    }
}

LinkedList::~LinkedList()
{
    Node *nextNode = head;

    while (nextNode != nullptr)
    {
        Node *currentNode = nextNode;
        nextNode = currentNode->getLink();
        delete[] currentNode;
    }
}

void LinkedList::insertPosition(int pos, int newNum)
{

    int currentPos = 1;

    if (pos <= 1)
    {
        Node *newNode = new Node(newNum, head);
        head = newNode;
        return;
    }

    Node *oldNode;
    Node *nextNode = head;
    while (currentPos < pos)
    {
        oldNode = nextNode;
        nextNode = nextNode->getLink();
        if (nextNode == nullptr)
        {
            break;
        }
        currentPos++;
    }

    Node *insertNode = new Node(newNum, nextNode);
    oldNode->setLink(insertNode);
    return;
}

bool LinkedList::deletePosition(int pos)
{

    if (pos < 1)
    {
        return false;
    }
    Node *nextNode = head;
    if (pos == 1)
    {
        head = nextNode->getLink();
        delete[] nextNode;
    }

    int currentpos = 1;
    Node *oldNode;
    while (currentpos < pos)
    {
        oldNode = nextNode;
        if (nextNode->getLink() == nullptr)
        {
            return false;
        }
        nextNode = nextNode->getLink();

        currentpos++;
    }

    oldNode->setLink(nextNode->getLink());
    delete nextNode;
}

int LinkedList::get(int pos)
{
    int currentpos = 1;
    if (pos < 1)
    {
        return std::numeric_limits<int>::max();
    }

    Node *currentNode = head;

    while (currentpos < pos)
    {
        currentNode = currentNode->getLink();
        currentpos++;
    }

    return currentNode->getData();
}

int LinkedList::search(int target)
{
    int currentpos = 1;

    Node *currentNode = head;

    while (currentNode->getLink() != nullptr)
    {
        if (currentNode->getData() == target)
        {
            return currentpos;
        }
        currentNode = currentNode->getLink();
        currentpos++;
    }

    return -1;
}

void LinkedList::printList()
{
    Node *currentNode = head;

    while (currentNode->getLink() != nullptr)
    {
        }
}