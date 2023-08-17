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
void zamiana(int *t,int i)
{
    int pom;
    pom=t[i+1];
    t[i+1]=t[i];
    t[i]=pom;
}
void sortowanie_babelkowe(int *t,int n)
{
    int i,j=0;
    for(i=0;i<n-1;i++)
    {
        if(t[i]>t[i+1])
        {
            zamiana(t,i);
            j++;
        }
        if(i==n-2&&j!=0)
        {
            i=-1;
            j=0;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",t[i]);

}

int main()
{
    srand(time(NULL));
    int *tab;
    int n,z,ile;
    printf("Podaj ile elementow ma miec tablica i z jakiego zakresu ma losowac jego zawartosc [0;z]:\n");
    ile=scanf("%d",&n);
    scanf("%d",&z);
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
    printf("\nTablica posortowana babelkowo (rosnaco):\n");
    sortowanie_babelkowe(tab,n);
    free(tab);
    return EXIT_SUCCESS;
}

