#include<iostream>
using namespace std;

int BinaryToDecimal(long long n) // Binary To Decimal #1
{
    int DecimalNumber = 0, i = 0, r;
    while (n!=0)
    {
        r = n%10;
        n /= 10;
        DecimalNumber += r*pow(2,i);
        ++i;
    }
    return DecimalNumber;
}

int main()
{
	cout<<BinaryToDecimal(1100);
	
	return 0;
}	