#include <iostream>
using namespace std;

/*
 Insertion Sort : 1. Firstly we suppose that the very First element is sorted, because if there is an array of length 1 than
                     it's automatically sorted.
                  2. Very next unsorted position is chosen(Insertion Element), if the Sorted Position is > Insertion Element.
                  3. Now we reach to a position which is !> Insertion Element( < or ==).
                  4. Now the very next position becomes Insertion Position , so Insert it at that position.

Type : Comparison Based
Complexity : O(n^2).

*/



void insertionSort(int arr[], int length)
{
    for(int i=1;i<length;++i)
    {
        int j = i-1;
        int x = arr[i]; // Element To be Inserted

        while(arr[j]>x && j>-1)
        {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = x;
    }
}

int main()
{
    int length = 7;
    int a[length] = {0,1,2,55,-44,77,-22};
    insertionSort(a,length);

    cout<<"\n\nInsertion Sorted Array Is : ";
    for(int i=0; i<length; ++i)
        cout<<a[i]<<" ";
    return 0;
}
