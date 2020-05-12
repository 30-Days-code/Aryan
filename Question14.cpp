#include <iostream>
#include <string.h>
using namespace std;

template <class Array>

void Print(Array* arr, int l)
{
    for (int i = 0; i < l; i++) 
    {
        cout<< *arr <<" ";
        
        ++arr; 
    }
    
    cout << endl;
}

int main()
{
    char Word[100];
    int Numb[100], n;
    
    cout<<"\n Enter a word : ";
    cin.getline(Word,100);
    
    cout<<"\n Enter the size of nunber array : ";
    cin>>n;
    
    cout<<"\n Enter "<<n<<" numbers in number array : \n";
    for(int i = 0; i < n; i++)
    {
        cout<<" ";
        
        cin>>Numb[i];
    }    

    cout<<"\n Entered word is : ";
    Print(Word, strlen(Word));

    cout<<"\n Entered numbers are : ";
    Print(Numb,n);

    return 0;
}