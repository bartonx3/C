#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a1,a2,b1,b2,x1,y1;
    printf("Podaj wspolczynniki a i b, oraz polozenie punktu A (x1,y1):\n");
    scanf("%f%f%f%f",&a1,&b1,&x1,&y1);
    if(a1!=0)
    {
        a2=-1/a1;
        b2=y1-a2*x1;
        printf("Rownanie prostej prostopadlej: y=%fx+%f",a2,b2);
    }
    else
        printf("Rownanie prostej prostopadlej: x=%f",x1);
    return 0;
}
