#include<iostream>
using namespace std;

struct City
{
    long Pin;
    char Name[100];
    
    City *Next ;
};

class Stack
{
    City *Top;
    
    public:
    
    Stack() 
    { 
        Top = NULL; 
    }
    
    void Push();
    void Pop();
    void Display();
};

void Stack::Push()
{
    City *Temp;
    
    Temp = new City;
    
    if(Temp == NULL)
    {
        cout<<"\n Node Not Able To Create !!! \n";
        return;
    }
    
    cout<<"\n Enter the City Pin Code : ";
    cin>>Temp -> Pin;
    
    cout<<"\n Enter the City Name : ";
    cin>>Temp -> Name;
    
    Temp -> Next = NULL;
    
    if(Top == NULL)
    {
		Top = Temp;
    }	
	else
	{
		Temp -> Next = Top;
		
		Top = Temp;
	}
}

void Stack::Pop()
{
    City *Temp;
    
    if( Top == NULL)
    {
        cout<<"\n Underflow !!! ";
    }
    
    else
    {
        cout<<"\n City Pin Code : "<<Top -> Pin;
        cout<<"\n City Name : "<<Top -> Name;
        
        Temp = Top;
        
        Top = Top -> Next;
        
        delete Temp;
    }
}

void Stack::Display()
{
    if(Top == NULL)
    {
        cout<<"\n Stack Is Empty !!! \n";
        return;
    }
    
    cout<<endl;
    
    while(Top != NULL)
    {
        cout<<" [ "<<Top -> Pin<<" , "<<Top -> Name<<" ] ->";
        Top = Top -> Next;
    }
    
    cout<<" !!! \n";
}

int main()
{
    Stack s1;
    int a;
    
    while(1)
    {   
        cout<<"\n Select An Option : \n 1. Push \n 2. Pop \n 3. Display \n 4. Exit \n Your Choice : ";
        cin>>a;
        
        switch(a)
        {
            case 1: s1.Push();
            break;
        
            case 2: s1.Pop();
            break;
        
            case 3: s1.Display();
            break;
            
            case 4: exit(0);
            break;
        
            default : cout<<"\n Option Not Available !!";
        }
    } 
    
    return 0;
}