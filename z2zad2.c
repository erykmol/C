#include <stdio.h>
#include "euk.h"



int main()
{
    int a = 18;
    int b = 24;


    printf("a = 18, b = 24\n");
    printf("Metoda iteracyjna: %d\n", euklidesIter(a,b));
    printf("Metoda rekurencyjna: %d\n", euklidesRek(a, b));
    printf("NWW: %d\n", NWW(a,b,euklidesIter(a,b)));
    return 0;
}