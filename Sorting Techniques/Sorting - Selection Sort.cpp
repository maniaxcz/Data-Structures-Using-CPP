#include <iostream>
using namespace std;

/*

Selection Sort Concept : 1. Select An Element.
                         2. Compare to other Elements in Chronological Order.
                         3. Swap if the Element is greater than the next element.
                         4. Bring the Selected Element to it's correct Position.

Type : Comparison Based Sort.
Complexity : O(n^2)

*/


void swapper(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int a[], int length)
{
    for(int i=0; i<length; ++i)
    {
        int traverser  = i;
        int minPointer = i;

        while(traverser<length)
        {
            if(a[traverser] < a[minPointer])
                minPointer = traverser;
            ++traverser;
        }
        swapper(a[i],a[minPointer]);
    }
}


int main()
{
    int arr[] = {3,1,2,5,6,7,-88,9,-102,0};
    int length = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,length);
    cout<<"\n\nSelection Sorted Array : ";
    for(int i=0;i<length;i++)
        cout<<arr[i]<<" ";
    cout<<"\n\n";
    return 0;
}
