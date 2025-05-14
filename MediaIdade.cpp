#include<iostream>
using namespace std;

int main()
{
    int I, NP, S;
    float M;
    S=0;
    NP=0;
    
    cout << "idade: ";
    cin >> I;
    while (I>0)
    {
         S = S + I;
         NP = NP + 1;
         cout << "idade:";
         cin >> I;    
    }
    if(NP>0)
    {
    M= S / NP;
    cout << "MEDIA DAS IDADES = " << M;
    }
    else 
    cout << "Usuario ja cadastrado.\n";
    
    return 0;
}