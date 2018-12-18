#include <stdio.h>

int przesuniecia(int liczba){
    liczba = liczba>>1;
    if (liczba == 0 ) return 0;
    while (liczba % 2 == 0){
        liczba = liczba >> 1;
    }
    return liczba;
}

int main(){
    printf("przesuniecie(-2): %d\n",przesuniecia(-2));
    printf("przesuniecie(0): %d\n",przesuniecia(0));
    return 0;
}

