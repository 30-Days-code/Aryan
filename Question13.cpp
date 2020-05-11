#include <iostream>
using namespace std;

void StarPyramid()
{
    int s, r; // s = Space & r = Rows

    cout<<"\n Enter number of rows (Star Pyramid) : ";
    cin>>r;

    for(int i = 1, k = 0; i <= r; ++i, k = 0)
    {
        for(s = 1; s <= r-i; ++s)
        {
            cout<<"  ";
        }

        while(k != 2*i-1)
        {
            cout<<"* ";
            ++k;
        }
        
        cout<<endl;
    }
}

void NumberPyramid()
{
    int r, count = 0, count1 = 0, k = 0;   // r = Rows

    cout<<"\n Enter number of rows (Number Pyramid) : ";
    cin>>r;

    for(int i = 1; i <= r; ++i)
    {
        for(int s = 1; s <= r-i; ++s)  // s = Space
        {
            cout<<"  ";
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= r-1)
            {
                cout<< i+k <<" ";
                ++count;
            }
            else
            {
                ++count1;
                cout<< i+k-2*count1 <<" ";
            }
            ++k;
        }
        
        count1 = count = k = 0;

        cout<<endl;
    }
}

int InvertedStarPyramid()
{
    int r; // r = Rows

    cout<<"\n Enter number of rows (Inverted Star Pyramid) : ";
    cin >> r;

    for(int i = r; i >= 1; --i)
    {
        for(int s = 0; s < r-i; ++s) // s = Space
        {
            cout <<"  ";
        }    

        for(int j = i; j <= 2*i-1; ++j)
        {
            cout <<"* ";
        }    

        for(int j = 0; j < i-1; ++j)
        {
            cout <<"* ";
        }    

        cout<<endl;
    }
}

void PascalTriangle()
{
    int r, coef = 1; // r = Rows

    cout<<"\n Enter number of rows (Pascal's Triangle) : ";
    cin>>r;

    for(int i = 0; i < r; i++)
    {
        for(int s = 1; s <= r-i; s++)  // s = Space
        {
            cout<<"  ";
        }    

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }    
            else
            {
                coef = coef*(i-j + 1)/j;
            }    

            cout<< coef <<"   ";
        }
        
        cout<<endl;
    }
}

void FloydTriangle()
{
    int r, number = 1;  // r = Rows

    cout<<"\n Enter number of rows (Floyd's Triangle) : ";
    cin>>r;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<< number <<" ";
            ++number;
        }

        cout<<endl;
    }
}

int main()
{
    StarPyramid();
    NumberPyramid();
    InvertedStarPyramid();
    PascalTriangle();
    FloydTriangle();
    
    return 0;
}