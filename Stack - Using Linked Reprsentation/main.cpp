#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    int choice;
    int num;

    Stack s;
    cout<<"\t\t\tLinked Representation Of Stack\n";
    cout<<"\t\t\t______________________________\n";
    while(1)
    {
        cout<<"\n1.Push";
        cout<<"\n2.Pop";
        cout<<"\n3.Peek";
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
            s.push(num);
            break;
        case 2:
            cout<<"\nElement Retrieved Is : "<<s.pop();
            break;
        case 3:
            cout<<"\nElement At The Top Is : "<<s.peek();
            break;
        case 4:
            cout<<"\nDisplaying Elements in LIFO : ";
            s.display();
            break;
        case 5:
            exit(1);
        default:
            cout<<"\nIncorrect Choice :(\n";
        }
    }
    return 0;
}
