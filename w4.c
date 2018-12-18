#include <stdio.h>

char *moj_strcat(char *doo, const char *skad)
{
    while (*doo != '\0')
    {
        *doo++;
    }
    while (*skad != '\0')
    {
        *doo++ = *skad++;
    }
    *doo = '\0';
    return doo;
}

int main()
{
    char str1[] = "Napis 1 ";
    char str2[] = "Napis 2";
    char *a = moj_strcat(str1, str2);
    puts(str1);
}