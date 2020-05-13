#include<iostream>
using namespace std;

class Queue
{
    int Data[10];
    int Front, Rear;

    public :

    Queue( ) 
    { 
        Front = -1;  
        Rear = -1; 
    }

    void Add(); // to add an element into the queue

    void Remove(); // to remove an element from the front of the queue

    void Delete(int ITEM); // to delete all elements whose Data is equal to ITEM
    
    void Display(); // to diaplay the queue
};

void Queue::Add()
{
    if( ( Front == 0 && Rear == 9 ) || ( Rear == Front - 1 ) )
    {
        cout<<"\n Overflow !!! \n";
        return;
    }
    
    int X;
    
    cout<<"\n Enter the data : ";
    cin>>X;
    
    if(Rear == -1)
    {
        Front = 0;
        Rear = 0;
    }
    else if(Rear == 9)
    {
        Rear = 0;
    }    
    else
    {
        Rear++;
    }    
        
    Data[Rear] = X;
    
    cout<<"\n "<<X<<" is added to the queue \n";
}

void Queue::Remove()
{
    if(Front == -1)
    {
        cout<<"\n Underflow !!! \n";
        return;
    }
    
    int X;
    
    X = Data[Front];
    
    if(Front == Rear)
    { 
        Front = -1;
        Rear = -1;
    }
    else if(Front == 9)
    {
        Front = 0;
    }    
    else
    {
        Front++;
    }    
        
    cout<<"\n "<<X<<" is removed from the queue \n";
}

void Queue::Delete(int ITEM)
{
    if(Front == -1)
    {
        cout<<"\n Underflow !!! \n";
        return;
    }
    
    for(int i = Front; i <= Rear; i++)
    {
        if(Data[i] == ITEM)
        {
            Queue T;
    
            T.Front = 0;
    
            while(1) // will repeat endless untill encounters a break statement
            {
                if(Data[Front] != ITEM)
                { 
                    T.Rear++;
                    T.Data[T.Rear] = Data[Front];
                }
        
                if(Front == Rear)
                {
                    break;
                }    
            
                Front++;
        
                if(Front == 10)
                {
                    Front = 0;
                } 
            }
            
            // copy temp data to current data
            Front = -1;
            Rear = -1;
    
            while(T.Front <= T.Rear)
            {
                Rear++;
                Data[Rear] = T.Data[T.Front];
                T.Front++;
            }
    
            cout<<"\n "<<ITEM<<" is deleted from the queue \n";
            return;
        }
        
        else
        {
            if(i <= Rear)
            {
                cout<<"\n "<<ITEM<<" does not exits !! \n";
                return;
            }
        }
    }    
}

void Queue::Display() 
{
    if(Front == -1)
    {
        cout<<"\n Queue is Empty !!! \n";
        return;
    }   
    else 
    {
        cout<<"\n Queue Data : ";
        for(int i = Front; i <= Rear; i++)
        {
            cout<<Data[i]<<" -> ";
        }
        
        cout<<" !!! \n";
    }
}

int main()
{
    Queue Q1;
    
    int a, ITEM;
    
    while(1)
    {   
        cout<<"\n Select An Option : \n 1. Add \n 2. Remove \n 3. Delete \n 4. Display \n 5. Exit \n Your Choice : ";
        cin>>a;
        
        switch(a)
        {
            case 1: Q1.Add();
            break;
        
            case 2: Q1.Remove();
            break;
        
            case 3: {
                        cout<<"\n Enter data to delete : ";
                        cin>>ITEM;
                        
                        Q1.Delete(ITEM);
                    }    
            break;
            
            case 4: Q1.Display();
            break;
            
            case 5: exit(0);
            break;
        
            default : cout<<"\n Option Not Available !! \n";
        }
    } 
    
    return 0;
}