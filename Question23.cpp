#include<iostream>
#include<cstring>
using namespace std;

int string_length(char *pointer) 
{ 
    int c=0; 
    
    while( *(pointer + c) != '\0' )
    {
        c++;
    }    
    
    return c; 
}

void reverse(char *string) 
{ 
    int length, c; 
    char *begin, *end, temp; 
    
    length = string_length(string); 
    
    begin = string; 
    
    end = string; 
    
    for(c=0; c<(length - 1); c++)
    {
        end++;
    }    
    
    for(c =0; c<(length/2); c++) 
    { 
        temp = *end; 
        
        *end = *begin;
        
        *begin = temp; 
        
        begin++; 
        
        end--; 
        
    } 
}

int main() 
{
    char string[100]; 
    
    cout<<"\n Enter a String : "; 
    cin.getline(string,100); 
    
    reverse(string); 
    
    cout<<"\n Reverse of Entered String is : "<<string; 
    
    return 0; 
}