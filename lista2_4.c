#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    unsigned short int x,x1;
    x=rand();
    x1=x;
    printf("Wylosowano liczbe: %d\nW systemie dwojkowym (czytanym od dołu):\n",x);
    while(x>0)
    {
        printf("%d : 2 = %d reszta %d\n",x,x/2,x%2);
        x/=2;
    }
    printf("\nW systemie szesnastkowym (czytanym od dołu):\n");
    while(x1>0)
    {
        printf("%d : 16 = %d reszta %X\n",x1,x1/16,x1%16);
        x1/=16;
    }
    return 0;
}

