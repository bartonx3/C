#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void zapelnij(int *t,int n,int z)
{
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=rand()%z;
        printf("%d ",t[i]);
    }
}
void odwroc(int *t,int n)
{
    int i,j=n-1,pom;
    for(i=0;i<n/2;i++)
    {
        pom=t[i];
        t[i]=t[j];
        t[j]=pom;
        j--;
    }
    for(i=0;i<n;i++)
        printf("%d ",t[i]);
    j=n-1;//cofa odwrocenie aby zrobic przesuniecie
    for(i=0;i<n/2;i++)
    {
        pom=t[i];
        t[i]=t[j];
        t[j]=pom;
        j--;
    }
}
void przesun(int *t,int n,int p)
{
    int i,pom,pom1;
    if(p>0)
    {
        pom=t[n-p];
        pom1=t[0];
        for(i=0; i<n-p; i++)
        {
            if(i%2==0)
            {
                pom1=t[i];
                t[i]=pom;
            }
            else
            {
                pom=t[i];
                t[i]=pom1;
            }
        }
        if(n%2==0)
            t[n-1]=pom1;
        else
            t[n-1]=pom;
    }
    if(p<0)
    {
        pom=t[0];
        pom1=t[0];
        for(i=n+p;i>0;i--)
        {
            if(i%2==0)
            {
                pom=t[i];
                t[i]=pom1;
            }
            else
            {
                pom1=t[i];
                t[i]=pom;
            }
            t[0]=pom1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",t[i]);
}

int main()
{
    srand(time(NULL));
    int *tab;
    int n,z,ile,p;
    printf("Podaj ile elementow ma miec tablica,\nz jakiego zakresu ma losowac jego zawartosc [0;z] oraz\no ile ma byc pozniej przesunieta (1 - w prawo/-1 - w lewo):\n");
    ile=scanf("%d",&n);
    scanf("%d%d",&z,&p);
    if(ile!=1||n<=0)
    {
        printf("Nie podales liczby dodatniej, konczymy\n");
        return EXIT_FAILURE;
    }
    tab=(int*)malloc(n*sizeof(int));
    if(tab==NULL)
    {
        printf("Nie ma miejsca w pamieci na tablice, konczymy.\n");
        exit(EXIT_FAILURE);
    }
    printf("Wylosowana tablica:\n");
    zapelnij(tab,n,z);
    printf("\nTablica odwrocona:\n");
    odwroc(tab,n);
    printf("\nTablica przesunieta:\n");
    przesun(tab,n,p);
    free(tab);
    return EXIT_SUCCESS;
}
