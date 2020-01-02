#include "Node.h"
using std::cout;
class Queue
{
private:
    Node *frnt = nullptr;
    Node *rear = nullptr;
public:
    Queue();
    void enqueue(int num);
    int dequeue();
    void displayQueue();
    bool isEmpty();
    bool isFull(Node *t);
    int top();
};

Queue::Queue()
{
    frnt = nullptr;
    rear = nullptr;
}
bool Queue::isFull(Node *t)
{
    if(t==NULL)
        return true;
    else
        return false;
}
bool Queue::isEmpty()
{
    if(frnt==nullptr)
        return true;
    else
        return false;
}

void Queue::enqueue(int num)                 // Inserting Into Queue
{
    Node *temp = new Node();                 // Node Created in Heap and manipulating it.

    if(isFull(temp))
        cout<<"\nQueue Is Full\n";          // Checks If the Heap Memory is Full and cannot be allotted
    else if(frnt==nullptr)
    {
      temp->data = num;
      temp->next = nullptr;
      frnt = temp;
      rear = temp;
      cout<<"\nElement Added \n";
    }
    else
    {
      temp->data = num;
      temp->next = nullptr;
      frnt->next = temp;
      rear = temp;
    }
}

int Queue::dequeue()                       // Retrieving Element in FIFO Manner
{
    int x = -1;
    if(isEmpty())
        cout<<"Queue Is Empty, cannot apply Dequeue\n";
    else
    {
        Node *deleter = frnt;
        x = frnt->data;
        frnt = frnt->next;
    }
    return x;
}

void Queue::displayQueue()
{
    if(isEmpty())
        cout<<"Empty Queue ! No Elements to Display\n";
    else
    {
        Node *traverser = frnt;
        while(traverser!=nullptr)
        {
            cout<<traverser->data<<" ";
            traverser = traverser->next;
        }
    }
}
int Queue::top()
{
    int x = -1;

    if(isEmpty())
        cout<<"\nEmpty Queue - No Elements To Display\n";
    else
    {
        Node *topper = frnt;
        x = topper->data;
    }
    return x;
}
