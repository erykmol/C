#include <stdio.h>
#include <stdlib.h>

#define ARGS 10
#define rozmx 15
#define rozmy 80
#define x0 -2.0f
#define x1 2.0f
#define y0 -10.0f
#define y1 10.0f

int main(void)
{
    float a,b,c;
    int i,j,inty;
    float x,y,step, stepy,dl;
    scanf("%f%f%f",&a,&b,&c);
    for(int i=0; i<=rozmx;i++)
        {
            step=(x1-x0)/rozmx;
            stepy=(y1-y0)/rozmy;
            x=x0+step*i;
            y=a*x*x+b*x+c;
            dl=((y-y0)/stepy);
            if(y>y1 || y<y0) continue;
            for(j=0; j<(int)dl; j++)
                {
                    putchar(' ');
                }
            putchar('*');
            putchar('\n');
        }
    return 0;

}