#include<iostream>
#include<cmath>
using namespace std;

void QRoots() 
{

    float A, B, C, X1, X2, D, RP, IP;   // D -> Discriminant, RP -> Real Part, IP -> Imaginary Part
    
    cout<<"\n Enter Coefficients :- ";
    cout<<"\n A : ";cin>>A;
    cout<<"\n B : ";cin>>B;
    cout<<"\n C : ";cin>>C;
    
    D = B*B - 4*A*C;
    
    if (D > 0) 
    {
        X1 = (-B + sqrt(D)) / (2*A);
        X2 = (-B - sqrt(D)) / (2*A);
        
        cout<<"\n The Roots are Real and Different \n";
        cout<<"\n X1 = "<<X1;
        cout<<"\n X2 = "<<X2;
    }
    
    else if (D == 0) 
    {
        X1 = (-B + sqrt(D)) / (2*A);
        
        cout<<"\n The Roots are Real and Equal \n";
        cout<<"\n X1 = X2 = "<<X1;
    }

    else 
    {
        RP = -B / (2*A);
        IP = sqrt(-D) / (2*A);
        
        cout<<"\n The Roots are Complex and Different \n";
        cout<<"\n X1 = "<<RP<<" + "<<IP<<"i ";
        cout<<"\n X2 = "<<RP<<" - "<<IP<<"i ";
    }

    cout<<endl;
}

void DRatios()
{
    float A, B, C, L, M, N, X1, X2, Y1, Y2, Z1, Z2;
    
    for(int i=1; i<=2; i++)
    {
        cout<<"\n Enter Co-ordinates of Point "<<i<<" on the XYZ plane :- \n";
        cout<<"\n X"<<i<<" : "; i == 1 ? cin>>X1 : cin>>X2;
        cout<<"\n Y"<<i<<" : "; i == 1 ? cin>>Y1 : cin>>Y2;
        cout<<"\n Z"<<i<<" : "; i == 1 ? cin>>Z1 : cin>>Z2;
    }
    
    A = X1 - X2;
    B = Y2 - Y2;
    C = Z1 - Z2;
    
    L = A / (sqrt( A*A + B*B + C*C ));
    M = B / (sqrt( A*A + B*B + C*C ));
    N = C / (sqrt( A*A + B*B + C*C ));
    
    cout<<"\n The Direction Ratios are : "<<A<<", "<<B<<", "<<C;
    
    cout<<"\n The Direction Cosines are : "<<L<<", "<<M<<", "<<N;
    
    cout<<endl;
}

void LAngle()
{
    float A1, A2, B1, B2, C1, C2, CosO, O; // O -> Theta 
    
    for(int i=1; i<=2; i++)
    {
        cout<<"\n Enter Direction Ratios of Line "<<i<<" :- \n";
        cout<<"\n A"<<i<<" : "; i == 1 ? cin>>A1 : cin>>A2;
        cout<<"\n B"<<i<<" : "; i == 1 ? cin>>B1 : cin>>B2;
        cout<<"\n C"<<i<<" : "; i == 1 ? cin>>C1 : cin>>C2;
    }
    
    CosO = abs( ( A1*A2 + B1*B2 + C1*C2 ) / ( sqrt( A1*A1 + B1*B1 + C1*C1 )*sqrt( A2*A2 + B2*B2 + C2*C2 ) ) );
    
    O = acos(CosO);
    
    cout<<"\n The Angle b/w the two line is : "<<O;
    
    cout<<endl;
}

int main()
{
    int a;
    
    while(1)
    {   
        cout<<"\n Select An Option : \n 1. Roots of a Quadratic Equation \n 2. Direction Ratios and Cosines of a Line in an XYZ plane "
            <<"\n 3. Angle Between Two Lines in an XYZ plane \n 4. Exit \n Your Choice : ";
        cin>>a;
        
        switch(a)
        {
            case 1: QRoots();
            break;
        
            case 2: DRatios();
            break;
        
            case 3: LAngle();
            break;
            
            case 4: exit(0);
            break;
        
            default : cout<<"\n Option Not Available !!";
        }
    } 
    
    return 0;
}