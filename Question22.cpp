#include <iostream>
using namespace std;

int main()
{
    char ch, i, j, k;
    
    int r;
    
    cout<<"\n Enter a character (Upper Case) : ";
    cin>>ch;
    
    r = ch - 64;
    
    cout<<"\n The alphabet pattern is : \n";
    
    for(i=ch ; i>='A' ; i--)
    {
        for(j='A' ; j<=i ; j++)
        {
            cout<<j<<" ";
        }
        
        r = ch-i;
        
        while(r>0)
        {
            cout<<"    ";
            r--;
        }
        
        for(k=i ; k>='A' ; k--)
        {
            cout<<k<<" ";
        }
        
        cout<<endl;
    }
    
    for(i='B' ; i<=ch ; i++)
    {
        for(j='A' ; j<=i ; j++)
        {
            cout<<j<<" ";
        }
        
        r = ch-i;
        
        while(r>0)
        {
            cout<<"    ";
            r--;
        }
        
        for(k=i ; k>='A' ; k--)
        {
            cout<<k<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}