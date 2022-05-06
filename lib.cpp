
#include "libreria.h"

void Init(float p[],int d)
{
    for(int i=0;i<d;i++)
    {
        p[i]=0;
    }
}

float Max( float p[], int d)
{
    float temporaneo=p[0];

    for(int i=1; i<d;i++)
    {
        if (p[i] > temporaneo)
            temporaneo = p[i];
    }
    return temporaneo;
}
