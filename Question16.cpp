#include<iostream>
using namespace std;

class Calculator
{
    float CRadius;
    long RLength, RBreath, RHeight;
    long SWidth;
    float THeight, TBase;
    
    public:
    
    Calculator() 
    { 
        CRadius = 1.0;
        
        RLength = RBreath = RHeight = 1; 
        
        THeight = TBase = 1.0; 
    }
    
    void Info(int Count);
    
    friend float AreaOfCircle(Calculator Ob); // To calculate Area Of Circle

    friend long AreaOfRectangle(Calculator Ob); // To calculate Area Of Rectangle

    friend long AreaOfSquare(Calculator Ob); // To calculate Area Of Square

    friend float AreaOfTriangle(Calculator Ob); // To calculate Area Of Triangle
};

void Calculator::Info(int Count)
{
    if(Count == 1)
    {
        cout<<"\n Enter Radius : ";
        cin>>CRadius;
    }
    
    else if(Count == 2)
    {
        cout<<"\n Enter Length : ";
        cin>>RLength;
        
        cout<<"\n Enter Breath : ";
        cin>>RBreath;
        
        cout<<"\n Enter Height : ";
        cin>>RHeight;
    }
    
    else if(Count == 3)
    {
        cout<<"\n Enter Width : ";
        cin>>SWidth;
    }
    
    else if(Count == 4)
    {
        cout<<"\n Enter Height : ";
        cin>>THeight;
        
        cout<<"\n Enter Base : ";
        cin>>TBase;
    }
    
    else
    {
       cout<<"\n Error !! Retry Again !! \n";
       
       return;
    }
}

float AreaOfCircle(Calculator Ob)
{
    return( 3.14*Ob.CRadius*Ob.CRadius );
}

long AreaOfRectangle(Calculator Ob)
{
    return( Ob.RLength*Ob.RHeight*Ob.RBreath );
}

long AreaOfSquare(Calculator Ob)
{
    return( Ob.SWidth*Ob.SWidth ); 
}

float AreaOfTriangle(Calculator Ob)
{
    return( (Ob.THeight*Ob.TBase)/2.0 );
}

int main()
{
    Calculator C1;
    
    int a, Count = 0;
    
    while(1)
    {   
        cout<<"\n Select An Option : \n 1. Area Of Circle \n 2. Area Of Rectangle" 
            <<"\n 3. Area Of Square \n 4. Area Of Triangle \n 5. Exit \n Your Choice : ";
        cin>>a;
        
        switch(a)
        {
            case 1: {
                        Count = 1;
                        
                        C1.Info(Count);
                        
                        cout<<"\n The Area of the Circle : "<<AreaOfCircle(C1);
                        
                        cout<<endl;
                    }    
            break;
        
            case 2: {
                        Count = 2;
                        
                        C1.Info(Count);
                        
                        cout<<"\n The Area of the Rectangle : "<<AreaOfRectangle(C1);
                        
                        cout<<endl;
                    }    
            break;
        
            case 3: {
                        Count = 3;
                        
                        C1.Info(Count);
                        
                        cout<<"\n The Area of the Square : "<<AreaOfSquare(C1);
                        
                        cout<<endl;
                    }
            break;
            
            case 4: {
                        Count = 4;
                        
                        C1.Info(Count);
                        
                        cout<<"\n The Area of the Trianglee : "<<AreaOfTriangle(C1);
                        
                        cout<<endl;
                    }
            break;
            
            case 5: exit(0);
            break;
        
            default : cout<<"\n Option Not Available !!";
        }
    }
    
    return 0;
}