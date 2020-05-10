#include<iostream>
#include<fstream>
using namespace std;

class LAPTOP
{ 
    long ModelNo; 
    float RAM,HDD; 
    char Name[20]; 
      
    public: 
      
    void StockEnter() 
    { 
        cout<<"\n Enter Details of the Laptop :- ";
        cout<<"\n Model No. : "; cin>>ModelNo;
        cout<<"\n RAM : "; cin>>RAM;
        cout<<"\n HDD : "; cin>>HDD;
        cout<<"\n Name : "; cin>>Name;
    } 
      
    void StockDisplay() 
    { 
        cout<<"\n Details of the Laptop :- ";
        cout<<"\n Model No. : "<<ModelNo;
        cout<<"\n RAM : "<<RAM;
        cout<<"\n HDD : "<<HDD;
        cout<<"\n Name : "<<Name;
    } 
      
    long ReturnModelNo() 
    { 
        return ModelNo;
    } 
}; 

void LaptopData()
{
    LAPTOP la;
    
    ofstream file1;
    ifstream file2;
    
    // Writing on the file
    
    file1.open("LAPTOP.DAT",ios::out);
    
    if(!file1)
    {
      cout<<"\n File could not be created !! \n";
      
      return;
    }
    
    la.StockEnter();    
    
    file1.write((char*)&la,sizeof(la));
    
    file1.close();
    
    // Reading the file
    
    file2.open("LAPTOP.DAT",ios::in);
    
    if(!file1)
    {
      cout<<"\n File could not be opened !! \n";
      
      return;
    }
    
    file2.read((char*)&la,sizeof(la));
    
    la.StockDisplay();
    
    file2.close();
}

int main()
{
    LaptopData();
    
    return 0;
}