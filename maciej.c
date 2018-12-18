#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROZMIAR 30
int n,i,j,k,w;


typedef struct probka_ {
    char          nazwa[100];
    unsigned long id;
    double        wartosc;
} probka;
probka c[ROZMIAR];
 
 void czytaj(){
    int i;
    const int max_n= 10000;
    const int linie= 44;
    char napis[max_n], *result;
    FILE *fp;
    char *token;

   fp = fopen("plik.txt", "r");
    for (i = 0; i <= ROZMIAR; ++i) 
    {
        result = fgets (napis, max_n, fp);
        if (result != NULL) 
        {
            if (feof (fp))
                NULL;
            else{
                c[i].id = i;
                token = strtok(napis,";");
                strcpy(c[i].nazwa, token);
                token = strtok (NULL, ";");
                token = strtok(NULL, ";");
                token = strtok(NULL, ";");
                c[i].wartosc = atof(token);
                token = strtok(NULL, ";");
            }
        }
        else
            NULL;
    }
 }
int podzial(probka c[ROZMIAR], int a, int b)
{
    int e;
    probka tmp;
    e=c[a].wartosc;     
    while (a<b)
    {
        while ((a<b) && (c[b].wartosc>=e)) b--;
        while ((a<b) && (c[a].wartosc<e)) a++;
        if (a<b)
        {
        tmp=c[a];
        c[a]=c[b];
        c[b]=tmp;
        }
    }
return a;
}
 
 
int main()
{
    czytaj();
    i=0;
    j=ROZMIAR-1;
    w = 15;
    while (i!=j)
    {
        k=podzial(c,i,j);
        k=k-i+1;
        if (k>=w) j=i+k-1;
        if (k<w)
        {
            w-=k;
            i+=k;
        }
    }
    printf("Mediana: %f\n", (c[15].wartosc));
    return 0;
}