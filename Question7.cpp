#include<iostream>
#include<cstring>
using namespace std;

class TravelPlan
{
    long PlanCode;
    char Place[100];
    int Number_of_travellers;
    int Number_of_buses;
    
    public:
    
    TravelPlan()
    {
        PlanCode = 0000;
        strcpy(Place,"NOT YET SELECTED");
        Number_of_travellers = 0;
        Number_of_buses = 0;
    }
    
    void NewPlan()
    {
        cout<<"\n Enter Your Travel Plan :- ";
        
        cout<<"\n Enter Travel code : ";
        cin>>PlanCode;
        
        cout<<"\n Enter Place : ";
        cin>>Place;
        
        cout<<"\n Enter Number of travellers : ";
        cin>>Number_of_travellers;
        
        if(Number_of_travellers<20)
        {
            Number_of_buses=1;
        }    
        else if(Number_of_travellers<40)
        {
            Number_of_buses=2;
        }    
        else
        {
            Number_of_buses=3;
        }    
    }
    
    void ShowPlan()
    {
        cout<<"\n This Your Travel Plan :- ";
        
        cout<<"\n Plan Code : "<<PlanCode;
        cout<<"\n Place : "<<Place;
        cout<<"\n Number of travellers : "<<Number_of_travellers;
        cout<<"\n Number of buses : "<<Number_of_buses<<endl;
    }
};

int main()
{
    TravelPlan tp;
    
    tp.ShowPlan();
    tp.NewPlan();
    tp.ShowPlan();
    
    return 0;
}