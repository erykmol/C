#include <stdio.h>
#include <string.h>

void moj_strcpy(char *kopia, char *zrodlo){
    size_t l = strlen(zrodlo);
    if (l==0)
    {
        printf(" Nie wprowadzono tekstu");
    }
    while( *zrodlo!='\0' ){
        *kopia++=*zrodlo++;
    }
    *kopia='\0'; 

}

int main()
{
    char z[80]="fbhwkvbfhkhoebshcoa";
    char k[80];
    moj_strcpy(k,z);
    puts(z);
    puts(k);

}