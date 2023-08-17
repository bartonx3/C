#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    double srednia=-1,suma=0,ERR;
    int n,m,i=0;
    printf("Podaj liczbe m i ERR:\n");
    scanf("%d%lf",&m,&ERR);
    printf("Zakres:\n%lf-%lf\nNacisnij enter aby kontynuowac",m/2.-ERR,m/2.+ERR);
    getc(stdin);
    getc(stdin);
    while(srednia>m/2.+ERR||srednia<m/2.-ERR)
    {
        i++;
        n=rand()%m;
        suma+=n;
        srednia=suma/i;
        printf("\n\nLosowanie numer: %d\nWylosowana liczba: %d\nSrednia arytmetyczna: %lf",i,n,srednia);
    }
    return 0;
}

