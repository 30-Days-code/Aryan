#include<iostream>
using namespace std;

int main()
{
	int arr[100], s, d, count=0;
	
	cout<<"\n Enter Array Size : ";
	cin>>s;
	
	cout<<"\n Enter Array Elements : \n";
	for(int i=0; i<s; i++)
	{
		cout<<" ";cin>>arr[i];
	}
	
	cout<<"\n Enter Element to Delete : ";
	cin>>d;
	
	for(int i=0; i<s; i++)
	{
		if(arr[i] == d)
		{
			for(int j=i; j<(s - 1); j++)
			{
				arr[j] = arr[j+1];
			}
			
			count++;
			break;
		}
	}
	
	if(count == 0)
	{
		cout<<"\n Element Not Found !!! \n";
	}
	else
	{
		cout<<"\n Element Deleted Successfull !!! \n";
		
		cout<<"\n Now the Array is : ";
		for(int i=0; i<(s - 1); i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	
	return 0;
}