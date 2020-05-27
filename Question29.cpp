#include <iostream>
using namespace std;

void Heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 
    if(l < n && arr[l] > arr[largest]) // if left child is larger than root
    {
        largest = l;
    }
 
    if(r < n && arr[r] > arr[largest]) // if right child is larger than largest so far
    {
        largest = r;
    }
 
    if(largest != i) // if largest is not root
    {
        swap(arr[i], arr[largest]);
 
        Heapify(arr, n, largest); // recursively heapify the affected sub-tree
    }
}

void HeapSort(int arr[], int n)
{
    for(int i = n / 2 - 1; i >= 0; i--) // build heap (rearrange array)
    {
        Heapify(arr, n, i);
    }
 
    for(int i=n-1; i>=0; i--) // one by one extract an element from heap
    {
        swap(arr[0], arr[i]); // move current root to end
 
        Heapify(arr, i, 0); // call max heapify on the reduced heap
    }
}

void PrintArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" -> ";
    }
    cout<<"!!! \n";
}
 

int main()
{
    int arr[1000], n;
    
    cout<<"\n Enter Number Of Elements : ";
    cin>>n;
    
    cout<<"\n Enter Your "<<n<<" Elements :- \n";
    for(int i=0; i<n; i++)
    {
        cout<<"\n Element "<<i + 1<<" : ";cin>>arr[i];
    }    
 
    HeapSort(arr, n);
 
    cout<<"\n Sorted Elements Are : ";
    PrintArray(arr, n);
}