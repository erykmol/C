#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROZMIAR 30


typedef struct probka_ {
char nazwa[63];
unsigned long id;
double wartosc;
} probka;

probka tablica[ROZMIAR];

int wypelnij_strukture (const char *nazwaPliku){
    FILE* fp;
    fp = fopen(nazwaPliku, "r");
    int max_rozmiar = 10000;
    char line[max_rozmiar], *result;
    char *token;
    for (int i = 0; i<30; i++) 
    {
        tablica[i].id=i+1;
        result = fgets (line, max_rozmiar, fp);
        token = strtok(result, ";");
        token = strtok(NULL, ";");
        strcpy(tablica[i].nazwa, token);
        token = strtok(NULL, ";");
        token = strtok(NULL, ";");
        tablica[i].wartosc= atof(token);
        token = strtok(NULL, ";");
        if (result != NULL) 
        {
            if (feof (fp))
                printf ("\n%d koniec pliku\n", i);
        }
        else
            printf ("\n%d blad odczytu\n", i);
    }
    return 0;
}

int n,k;
 
 
int partition(probka tablica[ROZMIAR],int a, int b)
{
    int e;
     probka tmp;
    e=tablica[a].wartosc;        //elemennt dzielacy
    while (a<b)
    {
        while ((a<b) && (tablica[b].wartosc>=e)) b--;
        while ((a<b) && (tablica[a].wartosc<e)) a++;
        if (a<b)
        {
            tmp=tablica[a];
            tablica[a].wartosc=tablica[b].wartosc;
            tablica[b]=tmp;
        }
    }
    return a;
}

int mediana(){

    int startInd = 0;
    int secIter = ROZMIAR-1;
    int polMed =  15;
    
    while (startInd!=secIter)
    {
        k=partition(tablica,startInd,secIter);
        k=k-startInd+1;
        if (k>=polMed) secIter=startInd+k-1;
        if (k<polMed)
        {
            polMed-=k;
            startInd+=k;
        }
    }
    printf("%d element ciagu to %f", 15, tablica[15].wartosc);
    for(int i=0; i<30;i++)
    {
        printf("%f\n",tablica[i].wartosc);
    }
    return 0;
}

int main(){

    wypelnij_strukture("/Users/erykmol/Desktop/lista.txt");
    mediana();
    return 0;
}