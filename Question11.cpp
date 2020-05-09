#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], C[10][10], r1, c1, r2, c2, i, j, k;

    do
    {
        cout<<"\n Enter rows and columns for Matrix A (MAX 10*10) :- ";
        
        cout<<"\n Row(s) : ";    cin>>r1; 
        cout<<"\n Column(s) : "; cin>>c1;
    
        cout<<"\n Enter rows and columns for Matrix B (MAX 10*10) :- ";
        
        cout<<"\n Row(s) : ";    cin>>r2; 
        cout<<"\n Column(s) : "; cin>>c2;
        
        if( c1 != r2 )
        {
            cout<<"\n Error !! Column of first matrix should be equal to row of second matrix !! \n";
        }

    } while( c1 != r2 );

    cout<<"\n Enter elements of Matrix A :- \n";
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c1; ++j)
        {
            cout<<"\n Enter Element A"<< i + 1 << j + 1 << " : ";
            cin>>A[i][j];
        }
    }    

    cout<<"\n Enter elements of Matrix B :- \n";
    for(i = 0; i < r2; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            cout<<"\n Enter Element B"<< i + 1 << j + 1 << " : ";
            cin>>B[i][j];
        }
    }    

    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            C[i][j] = 0;
        }
    }    

    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            for(k = 0; k < c1; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }    

    cout<<"\n Output Matrix :- \n";
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            cout<<" "<<C[i][j];
            
            if( j == (c2 - 1) )
            {
                cout<<endl;
            }    
        }
    }    

    return 0;
}