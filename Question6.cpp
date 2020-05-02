#include<iostream>
using namespace std;

void Swap(int &a, int &b) 
{         
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void Adisplay(int *arr, int size) 
{
   for(int i = 0; i<size; i++)
   {
       cout << arr[i] << " ";
   }
   
   cout << endl;
}

void Ddisplay(int *arr, int size) 
{
   for(int i = size-1; i>=0; i--)
   {
       cout << arr[i] << " ";
   }
   
   cout << endl;
}

void SelectionSort(int *arr, int size) 
{
   int i, j, imin;
   for(i = 0; i<size-1; i++) 
   {
       imin = i;   
      
        for(j = i+1; j<size; j++)
        {
            if(arr[j] < arr[imin])
            {
                imin = j;
            }
        }      
         
        Swap(arr[i], arr[imin]);
   }
}

void merge(int *arr1, int *arr2, int *arr3, int a, int b, int c)
{
    for(int i=0; i<a; i++)
    {
        arr3[i] = arr1[i];
    }
    
    for(int i= c-a, j=0; i<c, j<b; i++,j++)
    {
        arr3[i] = arr2[j];
    }
}

int main()
{ 
    int A[100],B[100],C[100],MN=0,M,N;
    
    cout<<"\n Enter No. Of Elements You Want In Array A : ";
    cin>>M;
    
    cout<<"\n Enter the elements in Array A : ";
    for(int i=0;i<M;i++)
    {
        cin>>A[i];
    }
    
    cout<<"\n Array A Sorted in Ascending Order : ";
    SelectionSort(A,M);
    Adisplay(A,M);
    
    cout<<"\n Enter No. Of Elements You Want In Array B : ";
    cin>>N;
    
    cout<<"\n Enter the elements in Array B : ";
    for(int i=0;i<N;i++)
    {
        cin>>B[i];
    }
    
    cout<<"\n Array B Sorted in Descending Order : ";
    SelectionSort(B,N);
    Ddisplay(B,N);
    
    MN=M+N;
    
    cout<<"\n So Merging Array A And Array B In Srray C :";
    merge(A,B,C,M,N,MN);
    
    cout<<"\n And Array C Sorted in Ascending Order : ";
    SelectionSort(C,MN);
    Adisplay(C,MN);
    
    return 0;
}