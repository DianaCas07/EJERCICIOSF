#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int primo=1,NE, modulo;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>NE;

    for (int i = NE-1; i >= 2; i--)
    {
        modulo = (NE % i);
        if (modulo==0)
        {
            cout<<"no es primo"<<endl;
            primo = 0;
            break;
        }
        }
        if (primo==1)
            {
                cout<<"es primo"<<endl;
            } 
            return 0;
    }