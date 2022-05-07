#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    int d;
    cin>>d;
    float p[];
    Init(p, d);

    for(int i=0;i<d;i++)
    {
        cin>>p[i];
    }

    cout<<Max( p, d);
    return 0;
}
