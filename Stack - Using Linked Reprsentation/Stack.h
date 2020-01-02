#include "Node.h"
using std::cout;
class Stack
{
private:
    Node *top = nullptr;
public:
    Stack();
    bool isUnderflow();          // Checks If Stack is Empty
    bool isOverflow(Node *tmp);           // Checks If Stack is Full i.e When Dynamic Memory is Full
    void push(int data);         // Inserting An Element in the Stack
    int pop();                   // Popping(Retrieving) the Element in LIFO Manner
    int peek();                  // Retrieving the Top Most Element in the Stack
    void display();
};

bool Stack::isUnderflow()
{
    if(top==nullptr)
        return true;
    else
        return false;
}
bool Stack::isOverflow(Node *tmp)
{
    if(tmp==NULL)
        return true;
    else
        return false;
}
Stack::Stack()
{
    top = nullptr;
}

void Stack::push(int num)
{
    Node *temp = new Node();
    if(isOverflow(temp))
        cout<<"\nStack Overflow ! Can't Add Entry To Stack\n";

    else if(top==nullptr)
    {
        temp->data = num;
        temp->next = nullptr;
        top = temp;
        cout<<"\nItem Added Successfully !\n";
    }
    else
    {
        temp->data = num;
        temp->next = top;
        top = temp;
    }
}

int Stack::pop()
{
    if(isUnderflow())
        cout<<"\nStack Underflow ! Empty Stack\n";
    else
    {
        int x = top->data;
        top = top->next;
        return x;
    }
}

int Stack::peek()
{
    if(isUnderflow())
        cout<<"\nStack Underflow ! Empty Stack\n";
    else
    {
        return top->data;
    }
}

void Stack::display()
{
    Node *traverser = top;
    if(isUnderflow())
        cout<<"Empty Stack\n";
    else
    {
        while(traverser!=nullptr)
        {
            cout<<traverser->data<<" ";
            traverser = traverser->next;
        }
    }
}
