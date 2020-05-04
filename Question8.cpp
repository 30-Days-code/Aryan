#include<iostream> 
using namespace std;

static int DaysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

class Date
{
    int Day, Month, Year, Days; 

    unsigned short DayCounter;
    
    public:
    
    int LeapYear()
    { 
        return ( (Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0 ); 
    }
    
    void OldDate(); 
    void NextDay(); 
    void NewDate();
    void DisplayDate();
};

void Date::OldDate()
{ 
    cout<<"\n Enter A Date (Say, Day : 2 , Month : 10 , Year : 2019) :- ";
    cout<<"\n Day : "; cin>>Day;
    cout<<"\n Month : "; cin>>Month;
    cout<<"\n Year : "; cin>>Year;
    
    Month < 1 ? Month = 1 : 0; 
    Month > 12 ? Month = 12 : 0; 
    Day < 1 ? Day = 1 : 0; 
    Day > DaysInMonth[Month] ? Day = DaysInMonth[Month] : 0; 
    
    if (LeapYear())
    { 
        DaysInMonth[1] = 29; 
    } 
    else 
    { 
        DaysInMonth[1] = 28; 
    } 
    
    NewDate();
} 

void Date::NextDay()
{ 
    Day += 1;
    
    if (Day > DaysInMonth[Month]) 
    { 
        Day = 1; Month += 1; 
        
        if (Month > 12) 
        { 
            Month = 1; 
            Year += 1; 
            
            if (LeapYear()) 
            { 
                DaysInMonth[1] = 29; 
            } 
            else 
            { 
                DaysInMonth[1] = 28; 
            } 
        } 
    }
} 

void Date::NewDate()
{ 
    cout<<"\n Enter number of days : ";
    cin>>Days;
    
    for (int i=0;i<Days;i++) 
    {
        NextDay(); 
    }    
}

void Date::DisplayDate()
{
    cout<<"\n The Updated Date Is :- ";
    cout<<"\n Day : "<<Day<<"\n Month : "<<Month<<"\n Year : "<<Year;
}

int main()
{ 
    Date D1; 
    
    D1.OldDate(); 
    
    D1.DisplayDate();
    
    return 0;
}