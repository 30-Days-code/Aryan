#include<iostream>
using namespace std;

int CheckError()
{
    int err = 0, a;
    
	do
	{
		try 
		{
		    cin>>a;
			if( !( a >= 0 && a <= 100 ) ) 
			{
				throw(a); 
			}
			err=0; 
		}
		catch(int b)
		{
			cout<<"\n Invalid Marks !! \n\n Enter Again : ";
			err = 1; 
		}

	}while(err);
	
	return a;
}

int main()
{
    int E,C,A,M;

    cout<<"\n Enter English Marks : ";
	E = CheckError();			
    cout<<"\n Enter Chemistry Marks : ";
	C = CheckError();
    cout<<"\n Enter ADS Marks : ";
	A = CheckError();
	cout<<"\n Enter Maths Marks : ";
	M = CheckError();
	
	return 0;
}	