#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a1, a2, b1, b2,c1,c2,x,y,W,Wx,Wy;
    printf("Wprowadz kolejne wspolczynniki (a1, b1, c1, a2, b2, c2):\n");
    scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
    W=a1*b2-a2*b1;
    Wx=c1*b2-c2*b1;
    Wy=a1*c2-a2*c1;
    if(W==0)
        if(Wx==0&&Wy==0)
            printf("Uklad jest nieoznaczony");
        else
            printf("Uklad jest sprzeczny");
    else
    {
        x=Wx/W;
        y=Wy/W;
        printf("Rozwiazanie rownania:\nx=%.2f\ny=%.2f",x,y);
    }
    return 0;
}

