#include <stdio.h>
#include <string.h>

int moj_strlen(char *zrodlo){
    int leng = 0;
    while( *zrodlo!='\0' ){
        *zrodlo++;
        leng=leng+1;
    }
   return leng; 

}

int main()
{
    char z[80]="fbhwkvbfhkhoebshcoa";
    printf("\n%d",moj_strlen(z));

}