#include <iostream>
using namespace std;

int main(){
    int NE;
    cout<<"Inserte un numero entero: "<<endl;
    cin>>NE;

    for (int i = 2; i < NE; i = i+2)
    {
        cout<<i<<" "<<endl;
    }

    return 0;
}