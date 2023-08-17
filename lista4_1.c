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
void najw(int *t,int n)
{
    int i,j=1,max=t[1];
    for(i=0;i<n;i++)
    {
        if(t[i]>max)
        {
            max=t[i];
            j=i;
        }
    }
    j++;
    printf("\nNajwiekszy jest %d element",j);
}
void najm(int *t,int n)
{
    int i,j=1,min=t[1];
    for(i=0;i<n;i++)
    {
        if(t[i]<min)
        {
            min=t[i];
            j=i;
        }
    }
    j++;
    printf("\nNajmniejszy jest %d element",j);
}
int srednia(int *t,int n)
{
    int s=0,i;
    double srednia;
    for(i=0;i<n;i++)
        s+=t[i];
    srednia=s/n;
    return srednia;
}
void odchylenie(int *t,int n,int sr)
{
    double fi,suma=0;
    int i;
    for(i=0;i<n;i++)
        suma+=pow(t[i]-sr,2);
    fi=sqrt(suma/n);
    printf("\nOdchylenie wynosi: %lf",fi);
}
int main()
{
    srand(time(NULL));
    int *tab;
    int n,z,ile;
    double sr;
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
    najw(tab,n);
    najm(tab,n);
    sr=srednia(tab,n);
    printf("\nSrednia wynosi: %lf",sr);
    odchylenie(tab,n,sr);
    free(tab);
    return EXIT_SUCCESS;
}
