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
void wyswietl(int *tab, int n, int k, int w, char x, int l)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(w==1)
            printf("(%d) ",i+1);
        if(k==0)
            printf("%d ",tab[n-i-1]);
        else
            printf("%d %c ",tab[i],x);
        if((i+1)%l==0&&(i+1)!=n)
            printf("\n");
    }
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
    int kol,wysw_num,ile_elem;
    char oddziel;
    printf("\nPodaj (1-tak;0-nie) czy wyswietlic tablice od poczatku, \nczy wyswietlac numer elementu, \nile elementow mialoby by byc w wierszu\ni jakim znakiem oddzielac kolejne elementy:\n");
    scanf("%d%d%d",&kol,&wysw_num,&ile_elem);
    scanf(" %c",&oddziel);
    wyswietl(tab,n,kol,wysw_num,oddziel,ile_elem);
    free(tab);
    return EXIT_SUCCESS;
}
