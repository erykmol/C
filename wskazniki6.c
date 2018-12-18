#include <stdio.h>
#include <stdlib.h> //for qsort()

int compare(const void* left, const void* right){
    
    //return (*(int*)right - *(int*)left);
    int *x, *y;
    int roznica;
    x = (int *)left;
    y = (int *)right;
    roznica = *x - *y;
    return roznica;
}



main(){
    int (*cmp) (const void* , const void*);
    cmp = &compare;
    int i;
    
    //int array[] = {1,2,3,4,5,6,7,8,9};
    char *array[] = {"gruszka", "jablko", "banan"};
    int size = sizeof(array)/sizeof(*array);
    
    qsort(array, size, sizeof(*array), cmp);
    
    for(i = 0; i < size; i++){
      printf("%s\t", array[i]);
    }
    printf("\n");
}
