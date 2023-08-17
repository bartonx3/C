#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ilePierwszych(int n)
{
    int i,j,x=1;
    for(i=3;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i==j)
                x++;
            else if(i%j==0)
                break;
        }
    }
    return x;
}
int main()
{
    int n, x;
    double b1,b2;
    printf("Podaj zakres przedzialu [0:n]:\n");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Brak liczb pierwszych");
        return 0;
    }
    x=ilePierwszych(n);
    printf("Liczb pierwszych w przedziale [0:%d]: x=%d\n",n,x);
    b1=x-(n/log(n));
    if(b1<0)
        b1=-b1;
    b2=b1/x;
    printf("%d/ln(%d)=%lf\ndelta x=%lf\n(delta x)/x=%lf",n,n,n/log(n),b1,b2);
    return 0;
}

