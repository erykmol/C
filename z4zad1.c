#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#define ROZMIAR 30

struct ksiazka{
  char autor[63];                                                                                                     
  char tytul[63];                                                                                                     
  unsigned ilosc;                                                                                                     
  float cena;                                                                                                         
};                                                                                                                    
                                                                                                                      
struct ksiazka magazyn[ROZMIAR];
int wypelnij_strukture (const char *nazwaPliku){
    FILE* fp;
    fp = fopen(nazwaPliku, "r");
    int max_rozmiar = 10000;
    char line[max_rozmiar], *result;
    char *token;
    for (int i = 0; i<30; i++) 
    {
        result = fgets (line, max_rozmiar, fp);
        token = strtok(result, ";");
        strcpy(magazyn[i].autor, token);
        token = strtok(NULL, ";");
        strcpy(magazyn[i].tytul, token);
        token = strtok(NULL, ";");
        magazyn[i].ilosc= atoi(token);
        token = strtok(NULL, ";");
        magazyn[i].cena= atof(token);
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

int vat(){
    float Vat = 0.07;
    float NalVat=0;
    for(int i = 0; i<30; i++)
    {
        NalVat=magazyn[i].cena*Vat;
        printf("Nalezny Vat: %f\n",NalVat);
        NalVat=0;
    }
    return 0;
}

int main(void){
   wypelnij_strukture("/Users/erykmol/Desktop/lista.txt");
   vat();
   
   return 0;

}
