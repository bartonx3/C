#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double s;
    int i, j;
    for(j=100000; j<=1000000; j+=100000)
    {
        s=0;
        for(i=0; i<j; i++)
            s+=(pow(-1,i)/(2*i+1.));
        printf("Wartosc obliczona = %.12lf\nWartosc liczby PI = %.12lf\nRoznica = %.12lf\n\n",s*4,M_PI,s*4-M_PI);
    }
    return 0;
}

