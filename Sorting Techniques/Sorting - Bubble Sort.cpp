#include <iostream>
using namespace std;

/*

    Bubble Sort Concept : Suppose if we throw a Pebble in a Pond, thus all the lighter
                          elements will come up i.e. Bubbles and the heavier element has to settle at the
                          bottom.

    Type : Comparison based Sort.
    Complexity : O(n^2)
*/


int swapper(int &a, int &b)                                // Swap Logic
{
   int temp = a;
   a = b;
   b = temp;

   return temp;
}

void bubbleSort(int A[], int siz)                          // Bubble Sort Logic
{

    for(int i=0;i<siz;++i)
    {
        int flag = 0;
        for(int j=0;j<siz-1;++j)
        {
            if(A[j]>A[j+1])
            {
                ++flag;
                swapper(A[j],A[j+1]);
            }
        }
        if(flag == 0)
            break;
    }
}

int main()
{
    int A[] = {11,-99,-100,45,5,1};
    bubbleSort(A,6);
    int i = 0;
    cout<<"Bubble Sorted Array : ";
    while(i<6)
    {
        cout<<A[i]<<" ";
        ++i;
    }
    return 0;
}
