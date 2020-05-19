#include <iostream>
using namespace std;

int main()
{
    int f, i, r=0, tr=0, o=0, to=0, u=0;
    //f = floors, i = iteration, r = rooms, tr = temp rooms, o = occupied, to = temp occupied u = unoccupied
    
    float po;  //po = Percentage of occupied
    
    cout<<"\n Enter number of floors : ";
    cin>>f;
    
    if(f<1)
    {
        cout<<"\n Number of floors cannot be less than 1 !!! \n";
    }
    
    else
    {
        cout<<"\n Please provide details of total rooms and rooms occupied on each floor :- \n";
        
        for(i=1; i<=f; i++)
        {
            if(i == 13)
            {
                cout<<"\n Hotel's Tradition !!! We do not have Thirteenth Floor \n";
                continue;
            }
            
            else
            {
                rooms:
                
                cout<<"\n Total Rooms on floor "<<i<<" : ";
                cin>>tr;
                
                if(tr<5)
                {
                    cout<<"\n Total rooms on each floor cannot be less than 5 \n Re-enter \n";
                    goto rooms;
                }
                
                else
                {
                    r=tr+r;
                }

                occupied:
                
                cout<<"\n Total Rooms occupied on floor "<<i<<" : ";
                cin>>to;
                
                if(to>tr)
                {
                    cout<<"\n Total occupied rooms on floor "<<i<<" cannot be greater than "<<tr<<" \n Re-enter\n";
                    goto occupied;
                }
                
                else
                {
                    o=to+o;
                }
            }
        }
    
        cout<<"\n Lets looks the Hotel rooms analysis :- ";
    
        cout<<"\n Total number of floors hotel have : ";
    
        if(f>13)
        {
            f = f - 1;
        }
    
        cout<<f;
    
        cout<<"\n Total Rooms hotel have : "<<r;
    
        cout<<"\n Total Rooms occupied : "<<o;
    
        u = r - o;
    
        cout<<"\n Total Rooms unoccupied : "<<u;
    
        po = float(o) / r * 100;
    
        cout<<"\n Percentage Rooms occupied : "<<po<<"%";
    }
    
    return 0;
}