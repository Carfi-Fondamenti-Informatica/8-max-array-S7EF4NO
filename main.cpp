#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    float d;

    cout<<"Inserisci la dimensione del vettore:";
    cin>>d;
    float p[d];
    Init(p, d);

    for(int i=0;i<d;i++)
    {
        cin>>p[i];
    }

    cout<<Max( p, d);
    return 0;
}
