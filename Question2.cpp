#include<iostream> 
using namespace std; 

class employee 
{ 
    
    int num,house ; 
    char city[20], state[20], name[20], depart[20]; 
    
    public: 
    
    void input() 
    { 
        cout<<"\n Enter the employe's name : "; 
        cin>>name; 
        
        cout<<"\n Enter the employe number : "; 
        cin>>num;
        
        cout<<"\n Enter the address including house number, city, state : "; 
        cin>>house>>city>>state; 
        
        cout<<"\n Enter the department : "; 
        cin>>depart; 
    } 
    
    void output() 
    { 
        cout<<"\n Employe's infomation : "; 
        cout<<"\n "<<name<<"\n "<<num;
        cout<<"\n Address : "<<house<<" "<<city<<" "<<state; 
        cout<<"\n "<<depart; 
    }
    
}; 

class manager : public employee 
{ 
    char name[20]; 
    int n,i; 
    
    public: 
    
    void getdata() 
    { 
        cout<<"\n Enter the manager's name : "; 
        cin>>name; 
        
        cout<<"\n Enter the total number of employe's working under him : "; 
        cin>>n; 
    } 
    
    void info(); 
}; 

void manager::info() 
{ 
    getdata(); 
    
    for(i=1;i<=n;i++) 
    { 
        cout<<"\n Employee No. : "<<i;
        input(); 
    } 
    
    cout<<"\n Manager : "<< name; 
    
    for(i=1;i<=n;i++) 
    { 
        cout<<"\n Employee : "<<i ; 
        output(); 
    } 
    
} 

int main() 
{ 
    class manager M;
    
    M.info(); 
    
    return 0;
}  