#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    int choice;
    int num;

    Queue q;
    cout<<"\t\t\tLinked Representation Of Queue\n";
    cout<<"\t\t\t______________________________\n";
    while(1)
    {
        cout<<"\n1.Enqueue";
        cout<<"\n2.Dequeue";
        cout<<"\n3.Top";
        cout<<"\n4.Display";
        cout<<"\n5.Exit";

        cout<<"\nPlease Enter Your Choice : ";
        cin>>choice;
        cout<<"\n";

        switch(choice)
        {
        case 1:
            cout<<"\nEnter An Element : ";
            cin>>num;
            q.enqueue(num);
            break;
        case 2:
            cout<<"\nElement Retrieved Is : "<<q.dequeue();
            break;
        case 3:
            cout<<"\nElement At The Top Is : "<<q.top();
            break;
        case 4:
            cout<<"\nDisplaying Elements in FIFO : ";
            q.displayQueue();
            break;
        case 5:
            exit(1);
        default:
            cout<<"\nIncorrect Choice :(\n";
        }
    }
    return 0;
}
