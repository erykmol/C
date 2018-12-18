#include <stdio.h>
#include <string.h>

char x;
int wiersz = 0;
int ilosc = 0;
int main(){
    while ((x = getchar())){
        ilosc++;
        if (x == '\n' && ilosc > 10){
            wiersz++;
            printf("%d\a\n", wiersz);
            ilosc = 0;
        }
        else if (x == '\n'){
            wiersz ++;
            ilosc = 0;
        }
    }
}
