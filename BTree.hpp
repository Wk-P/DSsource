#include <queue>
#include <iostream>

using namespace std;

template <class T>
class Node {
public:
    Node() : data(nullptr), parent(nullptr), leftChild(nullptr), rightChild(nullptr) {}
    Node(T data) : data(data), parent(nullptr), leftChild(nullptr), rightChild(nullptr) {}
    Node(T data, Node* parentNode) : data(data), parent(parentNode), leftChild(nullptr), rightChild(nullptr) {}

    T getNodeData() { return data; }
    void setNodeData(T newData) { data = newData; }

    Node* getLeftChildNode() { return leftChild; }
    Node* getRightChildNode() { return rightChild; }
    void setLeftChildNode(Node* node) { leftChild = node; }
    void setRightChildNode(Node* node) { rightChild = node; }

private:
    T data;
    Node* parent;
    Node* leftChild;
    Node* rightChild;
};

template <class T1>
class Tree {
public:

private:
    Node<T1>* root;
    int height;
    int depth;
    int width;
    int nodeSum;
};
