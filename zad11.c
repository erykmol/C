#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


int main()
{   
    printf("CHAR  zakres : %d - %d\n",CHAR_MIN, CHAR_MAX);
    printf("UNSIGNED CHAR  zakres : %d - %d\n",0,UCHAR_MAX );
    printf("SHORT  zakres : %d - %d\n",SHRT_MIN,SHRT_MAX);
    printf("UNSIGNED SHORT  zakres : %d - %d\n",0,USHRT_MAX  );
    printf("INT  zakres : %d - %d\n",INT_MIN, INT_MAX );
    printf("UNSIGNED INT  zakres : %d - %d\n",0, UINT_MAX );
    printf("LONG  zakres : %ld - %ld\n",LONG_MIN,LONG_MAX  );
    printf("USIGNED LONG  zakres : %d - %lu\n",0, ULONG_MAX );
    printf("LONG LONG  zakres : %lld - %lld\n",LLONG_MIN ,LLONG_MAX);
    printf("UNSIGNED LONG LONG  zakres : %d - %llu\n",0 ,ULLONG_MAX);

    return 0;
}