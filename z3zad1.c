#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

unsigned litery['Z'-'A'+1];

void czytaj(void)
{
    int c;
    while( (c = getchar()) != '\n')
    {
        if( isalpha(c))
        {
            litery[toupper(c)-'A']++;
        }
        
    }
}

void wyswietl(){

    for(int i='A'; i<'Z'; i++)
        {
            printf("%c %d ",i,litery[i-'A']);
            for(int j=0; j<litery[i-'A']; j++)
            {
                printf("#");
            }
            printf("\n");
        }
}

int main(){
czytaj();
wyswietl();
return 0;
}
