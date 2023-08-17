#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    double n,i;
    n=rand()%11+2;
    printf("Wylosowano wartosc n=%.0lf",n);
    for(i=0; i<=(M_PI/6*n); i+=M_PI/6)
        printf("\nsin(x)=%lf  cos(x)=%lf  tan(x)=%lf",sin(i),cos(i),tan(i));
    return 0;
}

