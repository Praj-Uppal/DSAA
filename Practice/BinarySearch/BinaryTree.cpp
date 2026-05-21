#include "BinaryTree.h"

using namespace std;

int getLeftChild(int index)
{
    return 2 * index + 1;
}
int getRightChild(int index)
{
    return 2 * index + 2;
}
int getParent(int index)
{
    return floor((index - 1) / 2);
}

void BinaryTree::insertData(int value)
{
    int currentIndex = 0;
    if (root == nullptr)
    {
        root = new Node(value);
        return;
    }

    Node *currentNode = root;
    while (currentNode->children[0] != nullptr && currentNode->children[1] != nullptr)
    {
        if (currentNode->children[0] != nullptr && value < currentNode->data)
        {
            break;
        }

        if (currentNode->children[0] != nullptr && value >= currentNode->data)
            break;

        if (value > currentNode->data)
        {
            currentNode = currentNode->children[1];
        }
        else
        {
            currentNode = currentNode->children[0];
        }
    }

    Node *newNode = new Node(value);

    if (value < currentNode->data)
    {
        currentNode->children[0] = newNode;
    }
    else
    {
        currentNode->children[1] = newNode;
    }
}

Node *BinaryTree::insertDataRecursive(Node *root, int value)
{
    if (root = nullptr)
    {
        return new Node(value);
    }

    if (value <= root->data)
    {
        root->children[0] = insertDataRecursive(root->children[0], value);
    }
    else
    {
        root->children[1] = insertDataRecursive(root->children[1], value);
    }

    return root;
}

BinaryTree::BinaryTree(vector<int> list)
{
    root = new Node(list[0]);
    for (int i = 1; i < list.size(); i++)
    {
        insertDataRecursive(root, list[i]);
    }
}
