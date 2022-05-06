
#include "lib.h"

void Init(float p[],float d)
{
    for(int i=0;i<d;i++)
    {
        p[i]=0;
    }
}

float Max( float p[], float d)
{
    float temporaneo=p[0];

    for(int i=1; i<d;i++)
    {
        if (p[i] > temporaneo)
            temporaneo = p[i];
    }
    return temporaneo;
}
