#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct wymierna_ {
    int licznik;
    int mianownik;
} wymierna;

int rekur_euk(int a, int b)
{
    if (b==0) return a;
    else return rekur_euk(b,(a%b));
}

wymierna dodawanie(wymierna x, wymierna y)
{
    wymierna wynik;

    if(x.mianownik == y.mianownik)
    {
        wynik.licznik = x.licznik + y.licznik;
        wynik.mianownik= x.mianownik;
        return wynik;
    }
    else
    {
        wynik.mianownik=x.mianownik*y.mianownik;
        x.licznik = x.licznik*y.mianownik;
        y.licznik = y.licznik*x.mianownik;
        wynik.licznik = x.licznik+y.licznik;
        int nwd = rekur_euk(x.mianownik,y.mianownik);
        wynik.licznik = wynik.licznik/nwd;
        wynik.mianownik = wynik.mianownik/nwd;
        return wynik;

    }
}

wymierna iloczyn(wymierna x, wymierna y)
{
    wymierna wynik;

    wynik.licznik = x.licznik*y.licznik;
    wynik.mianownik = x.mianownik*y.mianownik;
    int nwd = rekur_euk(x.mianownik,y.mianownik);
    wynik.licznik = wynik.licznik/nwd;
    wynik.mianownik = wynik.mianownik/nwd;

    return wynik;
}

wymierna odejmowanie(wymierna x, wymierna y)
{
    wymierna wynik;

    if(x.mianownik == y.mianownik)
    {
        wynik.licznik = x.licznik - y.licznik;
        wynik.mianownik= x.mianownik;
        return wynik;
    }
    else
    {
        wynik.mianownik=x.mianownik*y.mianownik;
        x.licznik = x.licznik*y.mianownik;
        y.licznik = y.licznik*x.mianownik;
        wynik.licznik = x.licznik-y.licznik;
        int nwd = rekur_euk(x.mianownik,y.mianownik);
        wynik.licznik = wynik.licznik/nwd;
        wynik.mianownik = wynik.mianownik/nwd;
        return wynik;

    }
}

int main(){

    wymierna x,y;
    scanf("%d", &x.licznik);
    scanf("%d", &x.mianownik);
    scanf("%d", &y.licznik);
    scanf("%d", &y.mianownik);

    printf("%d/%d\n",dodawanie(x,y).licznik,dodawanie(x,y).mianownik);
    printf("%d/%d\n",odejmowanie(x,y).licznik,odejmowanie(x,y).mianownik);
    printf("%d/%d\n",iloczyn(x,y).licznik,iloczyn(x,y).mianownik);
}