#include <iostream>
using namespace std;

class Calculator
{
        float N;

    public:
    
        void GetData(int a)
        {
            cout<<"\n Enter "<<a<<"st number : ";
            cin>>N;
        }
        
        void ShowData()
        {
            cout<<"\n Answer : "<<N<<endl;
        }
        
        Calculator operator + (const Calculator&);
        Calculator operator - (const Calculator&);
        Calculator operator * (const Calculator&);
        Calculator operator / (const Calculator&);
        Calculator operator % (const Calculator&);
};

Calculator Calculator::operator + (const Calculator& Calc1) 
{
    Calculator Calc2;
    Calc2.N = this->N + Calc1.N;
}

Calculator Calculator::operator - (const Calculator& Calc1) 
{
    Calculator Calc2;
    Calc2.N = this->N - Calc1.N;
}

Calculator Calculator::operator * (const Calculator& Calc1)
{
    Calculator Calc2;
    Calc2.N = this->N * Calc1.N;
}

Calculator Calculator::operator / (const Calculator& Calc1) 
{
    Calculator Calc2;
    Calc2.N = this->N / Calc1.N;
}

Calculator Calculator::operator % (const Calculator& Calc1) 
{
    Calculator Calc2;
    Calc2.N = (int)this->N % (int)Calc1.N;
}

int main()
{
    Calculator C1,C2,C3;
    
    int a;

    while(1)
    {   
        cout<<"\n Select An Option : \n 1. Addition \n 2. Subtraction " 
            <<"\n 3. Multipication \n 4. Division \n 5. Modulus \n 6. Exit "
            <<"\n Your Choice : ";
        cin>>a;

        switch (a)
        {
            case 1: {
                        C1.GetData(1);
                        C2.GetData(2);
                        C3 = C1 + C2;
                        C3.ShowData();
                    }
            break;
        
            case 2: {
                        C1.GetData(1);
                        C2.GetData(2);
                        C3 = C1 - C2;
                        C3.ShowData();
                    }
        
            break;
        
            case 3: {
                        C1.GetData(1);
                        C2.GetData(2);
                        C3 = C1 * C2;
                        C3.ShowData();
                    }
            break;
        
            case 4: {
                        C1.GetData(1);
                        C2.GetData(2);
                        C3 = C1 / C2;
                        C3.ShowData();
                    }
            break;
        
            case 5: {
                        C1.GetData(1);
                        C2.GetData(2);
                        C3 = C1 % C2;
                        C3.ShowData();
                    }
            break;
            
            case 6: exit(0);
            break;
        
            default: cout<<"\n Invalid Choice !!! \n";
        }
    }    

    return 0;
}