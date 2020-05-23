#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

// ---------------- Binary (Base 2) To Base 10,8,16 ----------------

void BinaryToDecimal() // Binary (Base 2) To Decimal (Base 10) #1
{
    long long BinaryNumber;
    int DecimalNumber = 0, i = 0, r;
    
    cout<<"\n Enter Binary Number : ";
    cin>>BinaryNumber;
    
    while (BinaryNumber != 0)
    {
        r = BinaryNumber%10;
        BinaryNumber /= 10;
        DecimalNumber += r*pow(2,i);
        ++i;
    }
    
    cout<<"\n Decimal Number is : "<<DecimalNumber;
}

void BinaryToOctal() // Binary (Base 2) To Octal (Base 8) #2
{
    long long BinaryNumber;
    int OctalNumber = 0, DecimalNumber = 0, i = 0;
    
    cout<<"\n Enter Binary Number : ";
    cin>>BinaryNumber;

    while(BinaryNumber != 0)
    {
        DecimalNumber += (BinaryNumber%10) * pow(2,i);
        ++i;
        BinaryNumber/=10;
    }

    i = 1;

    while (DecimalNumber != 0)
    {
        OctalNumber += (DecimalNumber % 8) * i;
        DecimalNumber /= 8;
        i *= 10;
    }

    cout<<"\n Octal Number is : "<<OctalNumber;
}

void BinaryToHexadecimal() // Binary (Base 2) To Hexadecimal (Base 16) #3
{
    char BinaryNumber[100], HexadecimalNumber[100];
    int temp;
    long int i = 0, j = 0;  
    
    cout<<"\n Enter Binary Number : ";
    cin>>BinaryNumber;
    
    while(BinaryNumber[i])
    {
        BinaryNumber[i] = BinaryNumber[i] - 48;
        ++i;
    }
    
    --i;
    
    while(i - 2 >= 0)
    {
        temp = BinaryNumber[i - 3] * 8 + BinaryNumber[i - 2] * 4 +  BinaryNumber[i - 1] * 2 + BinaryNumber[i];
        
        if(temp > 9)
        {
            HexadecimalNumber[j++] = temp + 55;
        }
        else
        {
            HexadecimalNumber[j++] = temp + 48;
        }
            
        i = i - 4;
    }
    
    if(i == 1)
    {
        HexadecimalNumber[j] = BinaryNumber[i - 1] * 2 + BinaryNumber[i] + 48;
    }    
    else if(i == 0)
    {
        HexadecimalNumber[j] =  BinaryNumber[i] + 48;
    }    
    else
    {
        --j;
    }
        
    cout<<"\n Hexadecimal Number is : ";
    while(j >= 0)
    {
        cout<<HexadecimalNumber[j--];
    }
}

// ---------------- Decimal (Base 10) To Base 2,8,16 ----------------

void DecimalToBinary() // Decimal (Base 10) To Binary (Base 2) #4
{
    int DecimalNumber;
    long long BinaryNumber = 0;
    int r, i = 1;
    
    cout<<"\n Enter Decimal Number : ";
    cin>>DecimalNumber;

    while (DecimalNumber!=0)
    {
        r = DecimalNumber%2;
        DecimalNumber /= 2;
        BinaryNumber += r*i;
        i *= 10;
    }
    
    cout<<"\n Binary Number is : "<<BinaryNumber;
}

void DecimalToOctal() // Decimal (Base 10) To Octal (Base 8) #5
{
    int DecimalNumber;
    int r, i = 1, OctalNumber = 0;
    
    cout<<"\n Enter Decimal Number : ";
    cin>>DecimalNumber;
    
    while (DecimalNumber != 0)
    {
        r = DecimalNumber % 8;
        DecimalNumber /= 8;
        OctalNumber += r * i;
        i *= 10;
    }
    
    cout<<"\n Octal Number is : "<<OctalNumber;
}

void DecimalToHexadecimal() // Decimal (Base 10) To Hexadecimal (Base 16) #6
{
    int DecimalNumber, r;
    string HexadecimalNumber;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
	cout<<"\n Enter Decimal Number : ";
	cin>>DecimalNumber;
		
        while(DecimalNumber > 0)
        {
            r = DecimalNumber % 16;
            HexadecimalNumber = hex[r] + HexadecimalNumber;
            DecimalNumber = DecimalNumber/16;
        }
        
        cout<<"\n Hexadecimal Number is : "<<HexadecimalNumber; 
}

// ---------------- Octal (Base 8) To Base 2,10,16 ----------------

void OctalToBinary() // Octal (Base 8) To Binary (Base 2) #7
{
    int OctalNumber;
    int DecimalNumber = 0, i = 0;
    long long BinaryNumber = 0;
    
    cout<<"\n Enter Octal Number : ";
    cin>>OctalNumber;

    while(OctalNumber != 0)
    {
        DecimalNumber += (OctalNumber%10) * pow(8,i);
        ++i;
        OctalNumber /= 10;
    }

    i = 1;

    while (DecimalNumber != 0)
    {
        BinaryNumber += (DecimalNumber % 2) * i;
        DecimalNumber /= 2;
        i *= 10;
    }

    cout<<"\n Binary Number is : "<<BinaryNumber;
}

void OctalToDecimal() // Octal (Base 8) To Decimal (Base 10) #8
{
    int OctalNumber;
    int DecimalNumber = 0, i = 0, r;
    
    cout<<"\n Enter Octal Number : ";
    cin>>OctalNumber;
    
    while (OctalNumber != 0)
    {
        r = OctalNumber % 10;
        OctalNumber /= 10;
        DecimalNumber += r * pow(8, i);
        ++i;
    }
    
    cout<<"\n Decimal Number is : "<<DecimalNumber;
}

void OctalToHexadecimal() // Octal (Base 8) To Hexadecimal (Base 16) #9
{
    int DecimalNumber = 0, i = 0, r, x, OctalNumber;
    string HexadecimalNumber;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
    cout<<"\n Enter Octal Number : ";
    cin>>OctalNumber;
    
    while (OctalNumber != 0)
    {
        r = OctalNumber % 10;
        OctalNumber /= 10;
        DecimalNumber += r * pow(8, i);
        ++i;
    }

    while(DecimalNumber > 0)
    {
        x = DecimalNumber % 16;
        HexadecimalNumber = hex[x] + HexadecimalNumber;
        DecimalNumber = DecimalNumber/16;
    }
        
    cout<<"\n Hexadecimal Number is : "<<HexadecimalNumber;
}

// ---------------- Hexadecimal (Base 16) To Base 2,10,8 ----------------

void HexadecimalToBinary() // Hexadecimal (Base 16) To Binary (Base 2) #10
{
    long int i=0;
    char HexadecimalNumber[100];
    
    hex:
    
    cout<<"\n Enter Hexadecimal Number : ";
    cin>>HexadecimalNumber;
    
    cout<<"\n Binary Number is : ";
    while(HexadecimalNumber[i])
    {
        switch(HexadecimalNumber[i])
        {
            case '0': cout<<"0000";
            break;
            
            case '1': cout<<"0001";
            break;
            
            case '2': cout<<"0010";
            break;
            
            case '3': cout<<"0011";
            break;
            
            case '4': cout<<"0100";
            break;
            
            case '5': cout<<"0101";
            break;
            
            case '6': cout<<"0110";
            break;
            
            case '7': cout<<"0111";
            break;
            
            case '8': cout<<"1000";
            break;
            
            case '9': cout<<"1001";
            break;
            
            case 'a':
            case 'A': cout<<"1010";
            break;
            
            case 'b':
            case 'B': cout<<"1011";
            break;
            
            case 'c':
            case 'C': cout<<"1100";
            break;
            
            case 'd':
            case 'D': cout<<"1101";
            break;
            
            case 'e':
            case 'E': cout<<"1110";
            break;
            
            case 'f':
            case 'F': cout<<"1111";
            break;
            
            default:{
                        cout<<"\n Invalid Hexadecimal Digit : "<<HexadecimalNumber[i]
                            <<"\n Enter Again !! ";
                            
                        goto hex;
                    }
        }
        
        i++;
    }
    
    
}

void HexadecimalToDecimal() // Hexadecimal (Base 16) To Decimal (Base 10) #11
{
    char HexadecimalNumber[100];
    int base = 1, DecimalNumber = 0;
    
    cout<<"\n Enter Hexadecimal Number : ";
    cin>>HexadecimalNumber;
    
    int len = strlen(HexadecimalNumber);
    
    for (int i=len-1; i>=0; i--) 
    {
        if (HexadecimalNumber[i] >= '0' && HexadecimalNumber[i] <= '9') 
        {
            DecimalNumber += (HexadecimalNumber[i] - 48)*base;
            base = base * 16;
        }
        else if (HexadecimalNumber[i] >= 'A' && HexadecimalNumber[i] <= 'F') 
        {
            DecimalNumber += (HexadecimalNumber[i] - 55)*base;
            base = base*16;
        }
    }
    
    cout<<"\n Decimal Number is : "<<DecimalNumber;
}

void HexadecimalToOctal() // Hexadecimal (Base 16) To Octal (Base 8) #12
{
    char HexadecimalNumber[100];
    int base = 1, DecimalNumber = 0, r, k = 1, OctalNumber = 0;
    
    cout<<"\n Enter Hexadecimal Number : ";
    cin>>HexadecimalNumber;
    
    int len = strlen(HexadecimalNumber);
    
    for (int i=len-1; i>=0; i--) 
    {
        if (HexadecimalNumber[i] >= '0' && HexadecimalNumber[i] <= '9') 
        {
            DecimalNumber += (HexadecimalNumber[i] - 48)*base;
            base = base * 16;
        }
        else if (HexadecimalNumber[i] >= 'A' && HexadecimalNumber[i] <= 'F') 
        {
            DecimalNumber += (HexadecimalNumber[i] - 55)*base;
            base = base*16;
        }
    }
    
    while (DecimalNumber != 0)
    {
        r = DecimalNumber % 8;
        DecimalNumber /= 8;
        OctalNumber += r * k;
        k *= 10;
    }
    
    cout<<"\n Octal Number is : "<<OctalNumber;
}

int main()
{
    int a, ITEM;
    
    while(1)
    {   
        cout<<"\n\n Select An Option : "
            <<"\n  1.  Binary To Decimal        2.  Binary To Octal           3.  Binary To Hexadecimal " 
            <<"\n  4.  Decimal To Binary        5.  Decimal To Octal          6.  Decimal To Hexadecimal "
            <<"\n  7.  Octal To Binary          8.  Octal To Decimal          9.  Octal To Hexadecimal "
            <<"\n 10.  Hexadecimal To Binary   11.  Hexadecimal To Decimal   12.  Hexadecimal To Octal "
            <<"\n 13.  Exit \n Your Choice : ";
        cin>>a;
        
        switch(a)
        {
            case 1: BinaryToDecimal();
            break;
        
            case 2: BinaryToOctal();
            break;
        
            case 3: BinaryToHexadecimal();    
            break;
            
            case 4: DecimalToBinary();
            break;
            
            case 5: DecimalToOctal();
            break;
            
            case 6: DecimalToHexadecimal();
            break;
            
            case 7: OctalToBinary();
            break;
            
            case 8: OctalToDecimal();
            break;
            
            case 9: OctalToHexadecimal();
            break;
            
            case 10: HexadecimalToBinary();
            break;
            
            case 11: HexadecimalToDecimal();
            break;
            
            case 12: HexadecimalToOctal();
            break;
            
            case 13: exit(0);
            break;
        
            default : cout<<"\n Option Not Available !! \n";
        }
    } 
    
    return 0;
}