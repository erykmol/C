#include <stdio.h>
#include <math.h>

unsigned pot2(unsigned x){
    unsigned i = 1;
    int ob = 0;
    while (i < x){
        i = i * 2;
        ob ++;
    }
    i = i * 2;
    return ob;
}

int main(){
    printf("Potega 2 wieksze od %d wynosi: %0.0f\n", 1, pow(2,pot2(1)));
    printf("Potega 2 wieksze od %d wynosi: %.0f\n", 11, pow(2,pot2(11)));
    return 0;
}

