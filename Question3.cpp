#include<iostream>
using namespace std;

int main()
{
    while(1)
    {
        const char *ones[10]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        const char *seconds[10]={"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        const char *tens[10]={"Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    
        int number,a;
        long int b,c,d;
    
        cout<<"\n Enter a number between 0 - 999 : ";
        cin>>number;
    
        b=(number%1000)-(number%100);
        c=(number%100)-(number%10);
        d=number%10;
    
        cout<<"\n Numbers : "<<b<<" "<<c<<" "<<d<<" "<<endl<<endl;
    
        if(number == 0)
        {
            cout<<" Zero ";
        }
        
        else
        {
            if(b%1000 != 0)
            {
                a = b/100 - 1;
                cout<<" "<<ones[a]<<" Hundred";
            }
    
            if(c == 0 && d != 0)
            {
                a = d - 1;
                cout<<" "<<ones[a];
            }
    
            if(c == 10 && d != 0)
            {
                a = d - 1;
                cout<<" "<<seconds[a];
            }
    
            if( c%10 == 0 && d == 0 )
            {
                a = c / 10 - 1;
                cout<<" "<<tens[a];
            }
    
            if( (c + d) > 20 && (c + d)%10 != 0 )
            {
                a = c / 10 - 1;
                cout<<" "<<tens[a]<<" "<<ones[d - 1];
            }
        }    
    
        cout<<endl;
    }
    
    return 0;
}