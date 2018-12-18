#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROZMIAR 24


struct obiekt{
    float wartosc;
    char nazwa[63];
};

struct obiekt spis[ROZMIAR];

int wypelnij_strukture (const char *nazwaPliku){
    FILE* fp;
    fp = fopen(nazwaPliku, "r");
    int max_rozmiar = 10000;
    char line[max_rozmiar], *result;
    char *token;
    for (int i = 0; i<30; i++) 
    {
        result = fgets (line, max_rozmiar, fp);   // czytamy ze standardowego wejścia
        token = strtok(result, ";");
        token = strtok(NULL, ";");
        //printf("%s  ",token);
        strcpy(spis[i].nazwa, token);
        token = strtok(NULL, ";");
        token = strtok(NULL, ";");
        //printf("%s\n",token);
        spis[i].wartosc= atof(token);
        token = strtok(NULL, ";");
        if (result != NULL) 
        {
            //printf ("%d %s\n", i, line);
            if (feof (fp))
                printf ("\n%d koniec pliku\n", i);
        }
        else
            printf ("\n%d blad odczytu\n", i);
    }
    return 0;
}


int compare(const void *o1, const void *o2)
{
  struct obiekt *p1 = (struct obiekt *)o1;
  struct obiekt *p2 = (struct obiekt *)o2;
  return (int)(100.f*p1->wartosc - 100.f*p2->wartosc);
}

int main (){
  wypelnij_strukture("/Users/erykmol/Desktop/lista.txt");
  qsort(spis, ROZMIAR, sizeof(struct obiekt), &compare);
  int i;
  for(i =0; i<sizeof(spis) / sizeof(struct obiekt); i++){
    printf("%s, %f \n", spis[i].nazwa, spis[i].wartosc);
  }

}