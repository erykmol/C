#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

unsigned litery['Z'-'A'+1];
unsigned litery1['Z'-'A'+1];

void czytaj(void)
{
    int c,d,l;
    printf("podaj pierwszy wyraz");
    while( (c = getchar()) != '\n')
    {
        if( isalpha(c))
        {
            litery[toupper(c)-'A']++;
        }
        
    }

    printf("podaj drugi wyraz");
    while( (d = getchar()) != '\n')
    {
        if( isalpha(d))
        {
            litery1[toupper(d)-'A']++;
        }
        
    }
    for(int i='A'; i<='Z'; i++)
    {
        if( (litery[i-'A']) == (litery1[i-'A']) )
        {
            l++;
        }
        else{
        printf("nie sa anagramem");
        break;
        }
    }
    if(l==('Z'-'A'))
    {
        printf("Wyrazy sa anagramem");
    }
    
    printf("\n");
}

int main(){
czytaj();
return 0;
}
