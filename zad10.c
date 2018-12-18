#include <stdio.h>

int warunek(int a)
{
        return a;
    
}

int funkcja(int a, int b)
{
    return a+b;
}

int main()
{
    int x = 10;
    int y = 0;

    for (int i=warunek(x); i>0; i += funkcja(i, i+y)){
        y = 2-x;
    }

     x = 10;
     y = 0;
    x += funkcja(x, x+y);
    y = 2-x;
    printf("%d\n", x);
    for (int i=warunek(x); i>0; i += funkcja(i, i+y)){
        x += funkcja(x, x+y);
        y = 2-x;
        printf("%d\n", x);
    }

     x = 10;
     y = 0;
    for (int i=warunek(x); i>0; i=0) {
        x += funkcja(x, x+y);
        y = 2-x;
    }
}