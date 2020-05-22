#include<iostream>
using namespace std;

void AND()
{
    int a, b;
    cout<<"\n Enter Two Numbers :- ";
    cout<<"\n A : "; cin>>a;
    cout<<"\n B : "; cin>>b; 
    
    cout << " A & B = " << (a&b) << " \n";    
}

void OR()
{
    int a, b;
    cout<<"\n Enter Two Numbers :- ";
    cout<<"\n A : "; cin>>a;
    cout<<"\n B : "; cin>>b; 
    
    cout<<"\n a | b = "<< (a|b) <<" \n";
}

void XOR()
{
    int a, b;
    cout<<"\n Enter Two Numbers :- ";
    cout<<"\n A : "; cin>>a;
    cout<<"\n B : "; cin>>b; 
    
    cout<<"\n a ^ b = "<< (a^b) <<" \n";
}

void COMPLEMENT()
{
    int a, b;
    cout<<"\n Enter Two Numbers :- ";
    cout<<"\n A : "; cin>>a;
    cout<<"\n B : "; cin>>b; 
    
    cout<<"\n ~a = "<< (~a) <<" ";
    cout<<"\n ~b = "<< (~b) <<" \n";
}

void LEFTSHIFT()
{
    int a, b;
    cout<<"\n Enter Two Numbers :- ";
    cout<<"\n A : "; cin>>a;
    cout<<"\n B : "; cin>>b; 
    
    cout<<"\n a >> b = "<< (a>>b) <<" \n";
}

void RIGHTSHIFT()
{
    int a, b;
    cout<<"\n Enter Two Numbers :- ";
    cout<<"\n A : "; cin>>a;
    cout<<"\n B : "; cin>>b; 
    
    cout<<"\n a << b = "<< (a<<b) <<" \n";
}


 int main() 
{
    cout<<"\n Bitwise Operators \n";
    
    int a;
    
    while(1)
    {   
        cout<<"\n Select An Option :- \n 1. AND \n 2. OR \n 3. XOR \n 4. COMPLEMENT \n"
            <<" 5. LEFTSHIFT \n 6. RIGHTSHIFT \n 7. EXIT \n Your Choice : ";
        cin>>a;
        
        switch(a)
        {
            case 1: AND();
            break;
        
            case 2: OR();
            break;
        
            case 3: XOR();
            break;
            
            case 4: COMPLEMENT();
            break;
            
            case 5: LEFTSHIFT();
            break;
            
            case 6: RIGHTSHIFT();
            break;
            
            case 7: exit(0);
            break;
        
            default : cout<<"\n Option Not Available !! \n";
        }
    } 
    
    return 0;
}