#include<iostream> 
using namespace std;

class Library 
{ 
    int BookNo; 
    char BName[25]; 
    char Author[25]; 
    char Publisher[25]; 
    float Price; 
    int No_of_Copies; 
    int No_of_Copies_Issued; 
    
    public: 
    
    void initial() 
    { 
        cout<<endl<<" Enter Book Number: "; 
        cin>>BookNo; 
        
        cout<<endl<<" Enter Book Name: "; 
        gets(BName);
        
        cout<<endl<<" Enter Author Name: "; 
        gets(Author);
        
        cout<<endl<<" Enter Publisher Name: "; 
        gets(Publisher); 
        
        cout<<endl<<" Enter Price: "; 
        cin>>Price; 
        
        cout<<endl<<" Enter Number of copies: "; 
        cin>>No_of_Copies; 
    } 
    
    void issue_book() 
    {
        cout<<" Enter book details "<<endl; 
        initial(); 
        
        if(No_of_Copies>0) 
        { 
            cout<<" Enter How many book you want to issue: "; 
            cin>>No_of_Copies_Issued; 
            
            if(No_of_Copies>=No_of_Copies_Issued) 
            { 
                No_of_Copies=No_of_Copies-No_of_Copies_Issued; 
                cout<<endl<<" "<<No_of_Copies_Issued<<" book is issued !!"; 
                display(); 
                
            } 
            
            else 
            { 
                cout<<No_of_Copies_Issued<<" books is not available in stock !!"; 
                
            } 
        } 
        
        else 
        { 
            cout<<" Book is not available "; 
            
        } 
        
    } 
    
    void return_book() 
    { 
        cout<<" Enter book detail you want to return "; 
        
        cout<<endl<<" Enter Book Number: "; 
        cin>>BookNo; 
        
        cout<<endl<<" Enter Book Name: "; 
        gets(BName); 
        
        No_of_Copies=No_of_Copies+No_of_Copies_Issued; 
        cout<<endl<<BookNo<<":"<<BName<<" Book is returned !!!"; 
    }
    
    void display() 
    { 
        cout<<" Book Number: "<<BookNo<<endl; 
        cout<<" Book Name: "<<BName<<endl; 
        cout<<" Author Name: "<<Author<<endl; 
        cout<<" Publisher Name: "<<Publisher<<endl; 
        cout<<" Price: "<<Price<<endl; 
    } 
}; 

int main() 
{  
    Library A1; 
    int ch; 
    
    cout<<" 1-> Issue book "<<endl; 
    cout<<" 2-> Return Book "<<endl; 
    cout<<" Enter your choice "; 
    cin>>ch; 
    
    switch(ch) 
    { 
        case 1: A1.issue_book(); 
        break; 
        case 2: A1.return_book();
        break;
        default:{ cout<<" Wrong Option !!"; exit(0); }
    }
    
    return 0;
}