#include <stdio.h>
#include <stdlib.h>
void sortuj3Liczby(int*a,int*b,int*c)
{
    int pom;
    while(*a>*b||*a>*c||*b>*c)
    {
        if(*a>*b)
        {
            pom=*a;
            *a=*b;
            *b=pom;
        }
        if(*b>*c)
        {
            pom=*b;
            *b=*c;
            *c=pom;
        }
        if(*a>*c)
        {
            pom=*a;
            *a=*c;
            *c=pom;
        }
    }
    printf("Rosnaco: %d  %d  %d",*a,*b,*c);
}
int main()
{
    int *a,*b,*c,x,y,z;
    printf("Podaj 3 liczby do ulozenia w kolejnosci rosnacej:\n");
    scanf("%d%d%d",&x,&y,&z);
    a=&x;
    b=&y;
    c=&z;
    sortuj3Liczby(a,b,c);
    return 0;
}
