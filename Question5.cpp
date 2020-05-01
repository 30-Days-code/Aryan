#include<iostream>
#include<cstring>

using namespace std;

class Clothing
{
    char Code[100];
    char Type[100];
    char Material[100];
    int Size;
    float Price;
    
    void Cal_Price()
    {
        if(strcasecmp(Material,"COTTON") == 0)
        {
            if(strcasecmp(Type,"TROUSER") == 0)
            {
                Price = 1500;
            }    
            else if(strcasecmp(Type,"SHIRT") == 0)
            {
                Price = 1200;
            }
            else 
            {
                cout<<"\n Type Not Available !! ";
                exit(0);
            }
        }
        else
        { 
            if(strcasecmp(Type,"TROUSER") == 0)
            {
                Price = 1500.0 - 1500.0 * 0.25;
            }
            else if(strcasecmp(Type,"SHIRT") == 0)
            {
                Price = 1200.0 - 1200.0 * 0.25;
            }
            else 
            {
                cout<<"\n Item Not Available !! ";
                exit(0);
            }
        }
    }
    
    public:
    
    Clothing()
    {
        strcpy(Code,"NOT ASSIGNED");
        strcpy(Type,"NOT ASSIGNED");
        strcpy(Material,"NOT ASSIGNED");
        
        Size = 0;
        Price = 0;
    }
    
    void Enter()
    {
        cout<<"\n\n Enter The Details :- ";
        
        cout<<"\n Enter Code : ";
        cin.getline(Code,100);
        
        cout<<"\n Type Available : TROUSER and SHIRT ";
        cout<<"\n Enter Type : ";
        cin.getline(Type,100);
        
        cout<<"\n Material Available : COTTON and SYNTHETIC ";
        cout<<"\n Enter Material : ";
        cin.getline(Material,100);
        
        cout<<"\n Enter Size (In Inches) : ";
        cin>>Size;
        
        cout<<endl;
        
        Cal_Price();
    }
        
    void Show()
    {
        cout<<"\n Code     : "<<Code;
        cout<<"\n Type     : "<<Type;
        cout<<"\n Size     : "<<Size;
        cout<<"\n Material : "<<Material;
        cout<<"\n Price    : "<<Price;
    }
};

int main()
{
    Clothing cl;
    
    cl.Show();
    cl.Enter();
    cl.Show();
    
    return 0;
}