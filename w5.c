#include <stdio.h>
#include <stdlib.h>

char *moj_strchr(char *s, int c){
    char litera = (char)c;
    int *p;
    while (*s != litera)
    {
        if (*s == '\0')
        {
            printf("Koniec stringa");
            return 0;
        }
        *s++;
    }
    
    return s;
}

int main()
{
    char napis[7] = "abcdaa";
    int c = 100;
    printf("%p\n",moj_strchr(napis, c));
}