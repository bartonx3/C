#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,ab,bc,ac,ab1,bc1,ac1;
    printf("Wprowadz wpolrzedne trzech punktow (x1, y1, x2, y2, x3, y3):\n");
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    ab=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    ab1=pow(ab,2);
    bc=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    bc1=pow(bc,2);
    ac=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    ac1=pow(ac,2);
    if(ab+bc>ac&&ab+ac>bc&&bc+ac>ab)
    {
        printf("Z podanych punktow mozna zbudowac trojkat");
        if(fabs(ab1+ac1-bc1)<10e-12||fabs(ab1+bc1-ac1)<10e-12||fabs(bc1+ac1-ab1)<10e-12)
            printf(" ( i trojkat jest prostokatny)");
    }
    else
        printf("Z podanych punktow nie mozna zbudowac trojkata");
    return 0;
}

