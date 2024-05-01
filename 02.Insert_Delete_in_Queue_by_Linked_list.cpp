#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class Queue
{
    public:
    int front, rear;
    
    Queue() { front = -1, rear = -1; }
};
// User defined functions...
void Insert(Node *node, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
        temp->next = node[rear];
    }
    node[rear] = temp;
}

int main()			 // Main function
{
    
    
    return 0;
}